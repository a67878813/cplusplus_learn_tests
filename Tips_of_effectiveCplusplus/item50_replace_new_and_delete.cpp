//Understand when it makes sense to replace new and delete.

//reason
//   1. for detect error
//   2. for performance
//  3. for statistics.



#include <memory>
#include <new>
// for detect error

static const int signature = 0xDEADBEEF;
using Byte = unsigned char;

void* operator new(std::size_t size) noexcept(false){
    using namespace std;
    size_t realSize = size + 2 * sizeof(int);   // add size , to add 2 signatures

    void* pMem = malloc(realSize); // call malloc to get memory
    if(!pMem) throw bad_alloc();

    //write signature
    *(static_cast<int*>(pMem)) = signature;
    auto placeholder = reinterpret_cast<int *>(static_cast<Byte *>(pMem) + realSize - sizeof(int));
    *(placeholder) = signature;

    return static_cast<Byte*>(pMem) + sizeof(int);

};