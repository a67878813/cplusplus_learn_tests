// heap

// heap-basd Objects


class UPNumber{
public:
    UPNumber();
    UPNumber(int initValue);
    UPNumber(double initValue);
    UPNumber(const UPNumber& rhs);
    //pseudo destructor
    void destroy() const {delete this;}

// private:
protected:
    ~UPNumber(); // dtor sit in private
};

class NonNegativeUPNumber: 
    public UPNumber{}; //inheritance base class's protected
    // will be protected

class Asset{
public:
    Asset(int initValue);
    ~Asset();
private:
    // UPNumber value; // containment
    UPNumber* value;
};

Asset::Asset(int initValue)
    :value(new UPNumber(initValue))
    {}

Asset::~Asset()
{value->destroy();  }




// when clint using 

int test(){
    //iliegal
    // UPNumber n;//  UPNumber's d'tor was implicitly called.

    UPNumber *p = new UPNumber;

    // delete p;// iliegal . call private func-member

    p->destroy();

    // NonNegativeUPNumber a;





    return 0;
}



// judge whether a object is in Heap

//how  NPNumber c'tor know the difference between below

void test2(){
    NonNegativeUPNumber * n1 = new NonNegativeUPNumber ; // on heap

    NonNegativeUPNumber n2; // on stack
}


#include <iostream>
class UPNumber2{
public:
    class HeapConstraintViolation{};// if ctor a non-heap object , throw 
    
    static void* operator new(size_t size);
    UPNumber2();
    UPNumber2(int initValue);
    UPNumber2(double initValue);
    UPNumber2(const UPNumber2& rhs);
    //pseudo destructor
    void destroy() const {delete this;}

// private:
protected:
    ~UPNumber2(); // dtor sit in private

private:
    // this flag indicate c'toring's obj whether on heap
    static bool onTheHeap;
};

bool UPNumber2::onTheHeap = false;

void* UPNumber2::operator new(size_t size)
{
    onTheHeap = true; // 
    // call original operator new
    return ::operator new(size);
}





UPNumber2::UPNumber2()
{
    if(!onTheHeap){
        throw HeapConstraintViolation();
    }
    // proceed with normal construction here;
    onTheHeap = false;
}

void test3(){
    // UPNumber2 * numberArray = new UPNumber2[100];
    UPNumber2* pn = new UPNumber2(*new UPNumber2); // mem -leak

    new UPNumber2(*new UPNumber2);
    // 2 new operator 
        // call 2 operator new
        // call 2 UPNumber2 c'tor
    
    // call sequence
    
    //  1st operator new
    // 1st c'tor
    // 2ed operator new
    // 2ed c'tor

    // but it is not be guaranteed by C++


}



namespace EZ{

void* operator new(size_t size)
{
    void* p = getMemory(size); 
    // call func to alloc memory , deal with short of memory
    // add p to the collection of allocated addresses;
    return p;
}

void operator delete(void * ptr)
{
    releaseMemory(ptr); // free store
    // remove ptr from the collection of allocated addresses;
}

bool isSafeToDelete(const void* address)
{
    // return whether address is in collection of allocated addresses;
}


}
