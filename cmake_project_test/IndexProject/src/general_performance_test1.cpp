#include <cstddef>
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <list>
#include <deque>
#include <queue>
#include <set>
#include <unordered_set>
#include <functional>

#include <immintrin.h>
#include <dlfcn.h>


#include <memory_resource>
#include <chrono>
#include <functional>
#include <benchmark/benchmark.h> //google benchmark
// #include <gtest/gtest.h>
using namespace std;

int count; // external variable , slightly slower to stack varible.
static int count2;
class A{
    public:
    mutable int A; // this mutability here is purely a c++ language constraint.
                // they do not paricipate in any performance.
    void change_A() const {
        ++A;
    }
};
volatile int seconds;
void DelayFiveSeconds(){
    seconds = 0;
    while(seconds<5){
        //it is always less than five.
        // because the variable is volatile , the compiler will keep the loop 
        // and there might be some other way where this variable is getting changed , 
        //so the while loop may actually terminate.
    }
};
//thread -local storage 
//most compilers can make thread-local storage of static and global variables, 
//by using the keyword 
//thread_local 
//__thread 
// or  __declispec(thread)
//such variables have one instace for each thread.

//memory allocation
//static memory allocation (stack)
//dynamic memory allocation(heap)
    // is done with the operators new
    //and delete or with the functions malloc and free
const int arraysize=100;
__m512 * pp = new __m512[arraysize];
__m512 tttt ;
int8_t t2;
int16_t t3;
int32_t t4;
int64_t t5;
// pp will be aligned by alignof(__m512) if using c++17

int accumulate(int x){
    vector<int> v;  // on stack, but elements on hep 
    // ..  initialize vector
    int i= 0; // on stack 
    for (auto e: v)
        i += e+x;
    return i;
}

// use short _alloc for allocating standard containers entirely on stack
// use pmr::vector to allocate vector on stack
    // pmr === polymorphic memory resources.


static void pmrVector(benchmark::State& state){
    constexpr size_t BUF_SIZE = 2048; 
    std::pmr::pool_options options;
    options.max_blocks_per_chunk = 4;
    options.largest_required_pool_block=64;

    alignas(8) std::array<char,BUF_SIZE> buffer; // a small buffer on the stack

    std::pmr::monotonic_buffer_resource pool{std::data(buffer), std::size(buffer)};
    std::pmr::unsynchronized_pool_resource mem (options, &pool);
    for (auto _ : state){
        std::pmr::vector<char> vec{&mem};
        for(char i = 'a'; i<'z';++i){
            vec.emplace_back(i);
            benchmark::DoNotOptimize(vec);
        }
    } 
}; 
static void stdVector(benchmark::State& state){
    for(auto _: state){
        std::vector<char> vec{};
        for(char i='a';i<'z';++i){
            vec.emplace_back(i);
            benchmark::DoNotOptimize(vec);
        }
    }
};
// BENCHMARK(pmrVector);
// BENCHMARK(stdVector);
// BENCHMARK_MAIN();jm
int main(){
    std::cout << "__m512 size is " << sizeof(tttt) << std::endl;
    std::cout << "int8 size is " << sizeof(t2) << std::endl;
    std::cout << "16 size is " << sizeof(t3) << std::endl;
    std::cout << "32 size is " << sizeof(t4) << std::endl;
    std::cout << "64 size is " << sizeof(t5) << std::endl;
    std::cout << 64* 8 << std::endl;

    return 0; 
}