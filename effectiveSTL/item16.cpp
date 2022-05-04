// vector string

//C array should be relpaced with vector or string 
#include <vector>
#include <string>
#include <iostream>
#include <deque>
#include <list>
#include <map>
#include <set>

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
// C API read from c-array
// &v[0], v.size()

// C API read from c-string
// some_string.c_str()

//C API (write to c-array)
size_t fillArray(double* pArray, size_t arraySize);

void test3(){
    int maxNumDoubles = 5;
    vector<double> vd(maxNumDoubles); // create
    vd.resize(fillArray(&vd[0],  vd.size())  );// using fillArray (C API) to write data
            // to vd ( vector<double>)
}

//C API
//write to char* return number (write to c-array)
size_t fillString(char* pArray, size_t arraySize);

void test5(){
    //write to vector<char> then 
    // ctor a string
    int maxNumChars = 100;
    vector<char> vc(maxNumChars);
    
    size_t charsWritten = fillString(&vc[0], vc.size() ); // using fillArray write to vc

    //using range ctor function
    string s(vc.begin(), vc.begin() + charsWritten);
}

void test6(){
    size_t maxNumDoubles= 100;
    vector<double> vd(maxNumDoubles);
    vd.resize(fillArray( &vd[0], vd.size() ));

    std::deque<double> d(vd.begin(), vd.end());// deque
    std::list<double> l(vd.begin(), vd.end());// list
    std::set<double> s(vd.begin(), vd.end());// set


}

// any container to c_api
// copy to vector and to c-api
void test7(){
    // some data container
    std::set<int> intSet; // gonna to C_Api

    //copy to vector
    vector<int> v(intSet.begin(), intSet.end());

    // to C_API
    if(!v.empty()) doSomething(&v[0], v.size());

}




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

