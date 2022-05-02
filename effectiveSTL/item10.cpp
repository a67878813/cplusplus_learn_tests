// understand allocator's limits


// type T
//allocator<T>::pointer 
//allocator<T>::reference

#include <list>
#include <memory>
#include <set>

class Widget{};

template<typename T>
class SpecialAllocator{};

/* 
void* operator new(size_t bytes); //(some bytes)

template<typename T>
T* allocator<T>::allocate(size_type numObjects); //how many T objects

return T*,
but T has not been constructed.
//  (may through allocator<T>::construct,or uninitialized_fill,  raw_storage_iterator)
//              ?? vector::reserve    string::reserve
 */

//declare
void* operator new(size_t bytes);
template<class T>
pointer allocator<T>::allocate(size_type numObjects);





// list<T>
// list contructed by node
//
/* 
node {
    T node 
    T* pre pointer 
    T* post pointer 
}

*/
template<typename T, 
    typename Allocator = allocator<T>  > //
class list_1{
    private:
    Allocator alloc;   // type T 's objet's allocator
    struct ListNode{
        T data;
        ListNode *orev;
        ListNode *next;
    };
    //get ListNode alloc
    typename Allocator::rebind<ListNode>::other aaaa;
};
//when new node add to list, we should get memory via allocator.
// but we needs ListNode's memory. 
// that makes Allocator useless.(cause it cannot work for ListNode)

// list need one that get allocator to ListNode from ole allocator type.
//                                    //(other)
                                //    rebind(  other  )

template <typename T> //allocator template.(std::allocator \ specialallocator)
class Allocator1{
    public:
    template<typename U>
    struct rebind{ // should have rebind template
        typedef allocator1<T> other;
        //type other is A<U>
    };
};




void test22(){
    Allocator1<list_1<int> >rebind<list_1<int>::ListNode>::other
}

















int main(){

using SAW = SpecialAllocator<Widget> ;
using namespace std;


list<Widget,SAW> L1;
list<Widget,SAW> L2;

L1.splice(L1.begin(), L2);    //move L2 before L1.



sizeof(int)== 4;

// new(4)
// allocator<T>::allocate(1)
// allocator<T>::size_type











//  =============
    list<int> L;
// ==
// list<int, allocator<int> >;



// using SAW = SpecialAllocator<Widget> ;
// using SAW = SpecialAllocator<Widget> ;
set<Widget, SAW> s;
//          here is typedef of SpecialAllocator<widget>
                            // not allocate malloc memory
//  node container
// list set multiset map multimap

};



/* 
allocator is a template ,param T is object's type

need define pointer and reference , making pointer as T*, reference as T&

do not make allocator has per-object state

allocate(objects number), returning a raw memory T* pointer,
 and it should be ctored

need write rebind template which is depended by STL







*/