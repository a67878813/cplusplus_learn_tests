#include "source.h"
#include <fstream>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <new>
#include <string>
#include <fstream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;
void tt(array<int,5> &someArray){
    std::cout << "length is :" << someArray.size()<< std::endl;

    sort(someArray.begin(), someArray.end()  );

    for(const auto&element: someArray){
        std::cout << element << std::endl;
    }
    std::cout << "sorted" << std::endl;
}

int main(){

    array<int,5> intArray = {5,2,3,4,1};
    array<int,7> intArray_2 {1,2,3,4,5};

    std::cout << intArray[3] << std::endl;
    std::cout << intArray.at(2) << std::endl;
    // intArray;
    tt(intArray);
    using index_t  = std::array<int,5>::size_type;
    for (array<int,5>::size_type i = 0; i < intArray.size(); i++)   //c++14?
    {
        std::cout << intArray[i] << std::endl;
    }
    for (int i  = 0; i < intArray.size(); i++)   //c++14?
    {
        std::cout << intArray[i] << std::endl;
    }
    for(auto var : intArray)
    {
        std::cout << var << std::endl;
    }
    return 0;
}