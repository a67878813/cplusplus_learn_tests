//avoid using vector<bool>




// vector string

//C array should be relpaced with vector or string 
#include <vector>
#include <string>
#include <iostream>


#include <chrono>

//vector string auto manage memory
//              is STL sequtial container ,
//              could use Sequential algrithum

using std::vector;
using std::string;

static 
std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long, std::ratio<1, 1000000000>>>
    begin_;

static 
std::chrono::time_point<std::chrono::system_clock, std::chrono::duration<long, std::ratio<1, 1000000000>>>
    end_;

inline void begin(){
    begin_ = std::chrono::high_resolution_clock::now();
    
}

inline void end(){
    end_ = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end_- begin_);
    // std::cout << "Time measured: "<< elapsed.count() * 1e-9  << " seconds."<< std::endl;
    std::cout << "Time measured: "<< elapsed.count()   << " nano"<< std::endl;
}
//===========================
//===========================


void test(){
    vector<bool> v;
    bool* pb =&v[0];
}

template<typename Allocator>
vector_proxy<bool Allocator> {
public:
    class reference{};//proxy class

    reference operator[](size_type n);// operator [] return a proxy 
}


int main(){

    for(int j=1;j<=10;++j) {

        // {
            begin();
            std::vector<int> v;
            v.reserve(1000);
            // v.push_back(1);
            for (int i =1;i<=1000;++i) {
                v.push_back(i);
            }
            end();
        // std::cout << v.size() << std::endl;
        // }

    // std::cout << v.capacity() << std::endl;
    }//end j 
    // std::cout << v.capacity() << std::endl;

}

