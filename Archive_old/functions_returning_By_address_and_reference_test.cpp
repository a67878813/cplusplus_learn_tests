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
#include <tuple>

using namespace std;

int squareValue(int x) {
    int value = x * x;

    return value;
}

// int* sqv(int x ){
//     int value = x*x;
//     return & value;  //shoud not do it !!
// }

int *AllocateArray(int size) {
    return new int[size];
}
// int& sqv(int x){
//     int value = x*x;
//     return value;//shoud not do it !!
// }

int &getElement(std::array<int, 25> &someArray, int index) {
    return someArray[index];
}

int returnByValue() {
    return 10;
}

int &returnByReference() {
    static int x = 20; // static means it didn't distroyed when func ended.
    return x;
}

const int &constReturnByReference() {
    return 5;   // 5 goes out of scope, and then 
    // const extends the lifetime of the dangling reference 
    //and lifetime extension only work 
    //when an object going out of scope in the same block
    // it does not really work across function boundaries
}

struct SomeStruct
{
    int i ;
    double d;
};

SomeStruct returnStruct(){
    SomeStruct tempStruct;
    tempStruct.i= 5;
    tempStruct.d = 11.6;
    return tempStruct;
}
std::tuple<int, double> returnTuple(){
    return make_tuple(25,15.3);
}

int main() {
    int sizeOfArray = 5;
    int *someArray22 = AllocateArray(sizeOfArray);
    delete[] someArray22;

    std::array<int, 25> someArray;
    getElement(someArray, 10) = 100;
    std::cout << someArray[10] << std::endl;

    int value = returnByReference(); // copy    =    not copy

    int &reference = returnByReference(); // not copy = not copy
    // int & reference2 = returnByValue();    //  lvalue   =    only have rvalue

    const int &constRef = returnByValue(); // not copy = just rvalue

    const int &constRef2 = constReturnByReference();
    

    SomeStruct ss = returnStruct();
    std::cout << ss.i << ' ' << ss.d << std::endl;

    std::tuple<int, double>  someTuple = returnTuple();
    std::cout << get<0>(someTuple) << ' ' << get<1>(someTuple) << std::endl;

    int i ;
    double d;
    tie(i,d) = returnTuple();

    auto[o,p] = returnTuple();   // c++ 17 features
    std::cout << i << ' ' << d << std::endl;
    std::cout << o << ' ' << p << std::endl;
    std::cout << o+5 << std::endl;
    return 0;
}