
#include <cstddef>
#include <iostream>

#include <vector>


#include <set>
#include <list>
#include <map>
#include <string>

#include <utility>


//malloc free model 
// a heap in  shared  memory
namespace {
void * mallocShared(size_t bytesNeeded);
void*  freeShared(void* ptr);


}

namespace 
{
// a shared memory allocator
template<typename T>
class SharedMemoryAllocator{
public:
    using pointer = T*;
    using size_type = size_t;
    using value_type = T;

    pointer allocate(size_type numObjects,
                    const void *localityHint=0)
    {
        return static_cast<pointer>(mallocShared(numObjects * sizeof(T) ));

    }

    void deallocate(pointer ptrToMemory , size_type numObjects)
    {
        freeShared(ptrToMemory);
    }
};

//when using

using SharedDoubleVec = std::vector< double, SharedMemoryAllocator<double>  > ;
void test(){
{
SharedDoubleVec v;
// v is stack obj, v gat a sharedmemory.
}

// all in shared memory
{

void *pVectorMemory =
     mallocShared(sizeof(SharedDoubleVec));  // get raw memory in shared memory

SharedDoubleVec *pv = new(pVectorMemory) SharedDoubleVec;
//using placement new construct a SharedDoubleVec


pv->~SharedDoubleVec();
freeShared(pVectorMemory);
}

}


//================= two heap has different alloc && release
class Heap1{
public:
    static void* alloc(size_t numBytes, const void* memoryBlockToBeNear);
    static void dealloc(void* ptr);
};

class Heap2{
    static void* alloc(size_t numBytes, const void* memoryBlockToBeNear);
    static void dealloc(void* ptr);

};

//=== want to place STL container to  different heap 

//===a allocater
template <typename T, typename Heap>
class SpecificHeapAllocator{
public:
    using pointer = T*;
    using size_type = size_t;
    using value_type = T;

    pointer allocate(size_type numObjects, const void* localityHint = 0)
    {
        return static_cast<pointer>(Heap::alloc(numObjects * sizeof(T),
                                                localityHint));
    }
    void deallocate(pointer ptrToMemory, size_type numObjects)
    {
        Heap::dealloc(ptrToMemory);
    }
};


class Widget{};
// gets some node

using std::vector;
using std::set;
using std::list;
using std::string;
using std::map;

// below Heap1, Heap2 is types.
vector<int, SpecificHeapAllocator<int,Heap1> >  v; // v and s 's elements ,was put in Heap1
set<int, std::less<int>,  
    SpecificHeapAllocator<int,Heap1> > s;


// L and M 's elements; put Heap2
list<Widget,
    SpecificHeapAllocator< Widget, Heap2> > L;
map<int , string  , std::less<int> ,
    SpecificHeapAllocator< std::pair<const int, string> ,
                                    Heap2>> M;

list<int,
    SpecificHeapAllocator< int, Heap2> > L2;

void test3(){
    L2.push_back(15);
}


}
//namespace end






