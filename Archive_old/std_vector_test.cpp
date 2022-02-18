#include "source.h"
#include <fstream>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <new>
#include <string>
#include <fstream>
#include <vector>


void SomeFunction(bool exit){
    int *array = new int[5]{1,2,3,4,5};

    if (exit)
        return;

    delete[] array;
}

int main(){

    std::vector<int> intVector;
    std::vector<int> intVector_2 = {1,2,3,4,5,};
    std::vector<int> intVector_3{6,7,8,9,10};

    std::cout << intVector_2.size() << std::endl;
    intVector_2.resize(10);
    // intVector_2.shrink_to_fit();
    for(auto const & element : intVector_2)
    {
        std::cout << element << std::endl;
    }

    std::vector<bool> boolVector{1,0,0,1,0};
    std::cout << boolVector.size() << std::endl;

    for(auto const& element : boolVector)
    {
        std::cout << element << std::endl;
    }

    return 0;
}