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

class MyClass
{
    int x;

public:
    MyClass(int val): x(val){}

    const int& GetX() const {return x;}
    int &  GetX() {return x;}

    // const int &GetY() const {return x;}
    // const int& GetZ() {return x;}  //member functions specifies to const reference
                                    //can not modify non static data members 
                                    // nor call other counst member functions.
    // in a sense , const menmbers shall not modify the state of an object 
    //and const objects  limited to access only member functions marked as const
    //but non const objects are not restricted
    //and this can take both Const and non Const members .

private:
    
};

void printX(const MyClass& param)
{
    std::cout << param.GetX() << std::endl;
}

int main()
{
    // const class-name nameofObject;
    MyClass Myclass_1(10);
    // Myclass_1.x = 20;
    printX(Myclass_1);
    const MyClass constMyclass(20);
    Myclass_1.GetX() = 15;
    // constMyclass.GetX() =25;

    std::cout << Myclass_1.GetX() << std::endl;
    std::cout << constMyclass.GetX() << std::endl;


    return 0;
}