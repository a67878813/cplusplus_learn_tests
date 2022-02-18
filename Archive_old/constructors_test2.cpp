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



class MoveExample{
    string *ptrString;

public:
    MoveExample(const string& str) : ptrString(new string(str)) {}
    ~MoveExample(){delete ptrString;}


    // move operator 
    // MoveExample(MoveExample&& param): ptrString(param.ptrString){param.ptrString = nullptr;}
    //move assignment
    MoveExample& operator=(MoveExample&& param){
        delete ptrString;
        ptrString = param.ptrString;
        param.ptrString = nullptr;
        return *this;
    }

    const string& ReadContent() const{ return *ptrString;}

    MoveExample operator+(const MoveExample& rhs){
        return MoveExample(this->ReadContent() + rhs.ReadContent() );
    }
};




int main(){

    MoveExample Class1("hello ");
    MoveExample Class2 = MoveExample("world");

    Class1 = Class1+ Class2;
    std::cout << Class1.ReadContent() << std::endl;
    return 0;
}