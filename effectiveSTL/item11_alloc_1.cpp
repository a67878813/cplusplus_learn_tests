
#include <memory>
#include <vector>
#include <set>
#include <list>
#include <map>

void* mallocShared(size_t bytesNeeded);
void* freeShared(void* ptr);


template<typename T>
class SharedMemoryAllocator{
public:
    using pointer = T*; // or = Allocator::rebind<ListNode>::other
    using size_type = std::size_t;
    pointer allocate(size_type numObjects, const void* localityHint= 0)
    {
        return static_cast<pointer>(mallocShared(numObjects * sizeof(T)));

    }

    void deallocate(pointer ptrToMemoty, size_type numObjects)
    {
        freeShared(ptrToMemoty);
    }
};



typedef 
    std::vector<double, SharedMemoryAllocator<double> > SharedDoubleVec;



class Heap1{
    public:
    static void* alloc(size_t numBytes, const void * memoryBlockToBeNear);
    static void dealloc(void *ptr);
};

class Heap2{
    public:
    static void* alloc(size_t numBytes, const void * memoryBlockToBeNear);
    static void dealloc(void *ptr);

};
//heap is type

template<typename T, typename Heap>
class SpecificHeapAllocator{
    public:
    pointer allocate(size_type numObjects, const void* localityHint = 0)
    {
        return static_cast<pointer>(Heap::alloc(numObjects* sizeof(T),
                                        localityHint));
    }    
    void deallocate(pointer ptrToMemory, size_type numObjects)
    {
        Heap::dealloc(ptrToMemory);
    }
    
};
class Widget;
int test(){
std::vector<int,SpecificHeapAllocator<int,Heap1> > v2;
std::set<int ,less<int>,  SpecificHeapAllocator<int , Heap1> s;


std::list<Widget,  SpecificHeapAllocator<Widget,  Heap2> > L;
std::map<int ,string, less<int>,
                             SpecificHeapAllocator<   pair<const int , string>, Heap2  > > m;




};

int main()
{
SharedDoubleVec v;   // add vector, It's contents located in shared memory



// if v is  needed in  shared memory
void *pVectorMemory = 
    mallocShared(sizeof(SharedDoubleVec)); // malloc SharedDoubleVec
SharedDoubleVec *pv = new(pVectorMemory) SharedDoubleVec; // creat SharedDoubleVec object


                                //use obj
                                
pv->~SharedDoubleVec();     //~()
freeShared(pVectorMemory); //release shared memory

}