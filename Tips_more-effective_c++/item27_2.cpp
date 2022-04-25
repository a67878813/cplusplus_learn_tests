#include <iostream>
#include <list>

class HeapTracked{
public:
    class MissingAddress{};
    virtual ~HeapTracked() = 0;
    static void* operator new(size_t size);
    static void operator delete(void * ptr);

    [[nodiscard("isOnHeap should not be discarded")]] 
        bool isOnHeap() const;
private:
    using RawAddress = const void*;
    static std::list<RawAddress> addresses;
};


// 
HeapTracked::~HeapTracked()= default;

void* HeapTracked::operator new(size_t size)
{
    void *memPtr = ::operator new(size);
    addresses.push_front(memPtr);
    return memPtr;// (this)
}

void HeapTracked::operator delete(void* ptr)
{
    // get iterator , find which list element has ptr
    auto it = find(addresses.begin(),addresses.end(),ptr);

    if(it != addresses.end()){ // find a item
        addresses.erase(it);
        ::operator delete(ptr);

    }
    else{
        throw MissingAddress();
    }

}

bool HeapTracked::isOnHeap() const 
{
    //get a pointer which points to begin of *this 
    const void* rawAddress = dynamic_cast<const void*>(this);
    /* 
    why 

    multiple or virtual base class has "multiple address"
    // dynamic_cast<void*> will get a pointer which is points to  multiple || virtual class 's 
            raw obj's begin
    
    // dynamic_cast is suit for pointer points to which has at least one virtual function.




    */

    // find a pointer which is "returned of operator new"
    auto it = find(addresses.begin(),addresses.end(),rawAddress);

    return it != addresses.end();// return whether find.

}

//=============== when use , inherit

class NPNumber{};
class Asset :public HeapTracked{
private:
    UPNumber value;

};

// then we can retrive Asset* pointer:
void inventoryAsset(const Asset* ap)
{
    if(ap->isOnHeap()){
        // ap is a heap-based asset 
        //inventory it as such;
    }
    else
    {
        //ap is a non-heap-based asset -- record it 
        
    }
}

// there is disadvantage that it is unable to apply to inner types

