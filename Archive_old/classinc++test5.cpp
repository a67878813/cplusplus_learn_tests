#include "source.h"
#include <fstream>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <new>
#include <ostream>
#include <string>
#include <fstream>
#include <vector>
#include <array>
#include <algorithm>
#include <tuple>

using namespace std;

template<class T> 
class ValuePair
{
    T  a,b;
public:
    ValuePair(T first, T second)
    {
        a = first;
        b = second;
    }

    T GetMax();

};


template<class T> 
T ValuePair<T>::GetMax()
{
    T result;
    result =  a> b ? a : b;
    return result;
}

int main()
{
    ValuePair<int> intObject(100,200);
    std::cout << intObject.GetMax() << std::endl;
    ValuePair<double> myDoublePair(3.0,3.14); 

    ValuePair<float> floatObject(255.6,198.65);
    std::cout << floatObject.GetMax() << std::endl;


    return 0;
}