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

void doSomething(const int* pInts, size_t numInts);
//vector<int> v ->- C API

//  doSomething( &v[0], v.size());

// problem of 0 vector
void doSomething(const char* pCharPtr);
void test(){
    vector<int> v;
    if(!v.empty()){
        doSomething(&v[0], v.size());
    }
}
void test2(){
    string s;
    doSomething(s.c_str() );


}

//C API
size_t fillArray(double* pArray, size_t arraySize);

void test3(){
    int maxNumDoubles = 5;
    vector<double> vd(maxNumDoubles); // create
    vd.resize(fillArray(&vd[0],  vd.size())  );// using fillArray (C API) to write data
            // to vd ( vector<double>)
}

//C API
//write to char* return number
size_t fillString(char* pArray, size_t arraySize);



int main(){

    for(int j=1;j<=3;++j) {

        // {
            begin();
            std::vector<int> v;
            v.reserve(1000);
            // v.push_back(1);
            for (int i =1;i<=1000;++i) {
                v.push_back(i);
            }
            end();
            std::cout << sizeof(&v[0] )<< std::endl;
                //  &v[0]    
        // std::cout << v.size() << std::endl;
        // }
// doSomething( &v[0], v.size());

    // std::cout << v.capacity() << std::endl;
    }//end j 
    // std::cout << v.capacity() << std::endl;

}

