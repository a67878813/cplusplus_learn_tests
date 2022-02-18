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

class SomeClass
{

public:
    int Sum;
    SomeClass()= default;
    SomeClass(int initialValue): Sum(initialValue){}

    void CalculateSum(int x) {Sum +=x;}
};

class StringTest
{
    string * ptrString;
public:
    StringTest(): ptrString(new string) {}
    StringTest(const string&str ): ptrString(new string(str)){}

    ~StringTest();

    const string &ReadString() const{return *ptrString;}
};

StringTest::~StringTest()
{
    std::cout << "string class about to delete!" << std::endl;
}


class MyClass
{
    string* ptrString;
public:
    int a,b;
    string c;


    // MyClass(MyClass &&) = default;
    //MyClass(const MyClass &) = default;  // copy constructor

    //constructor
    MyClass();
    MyClass(const string& str): ptrString(new string(str)){}  //语法糖
                            // ptrString = new string;
                            // *ptrString = &str

    //COPY constructor
    MyClass(const MyClass&param): ptrString(new string(param.DeepCopy()  )){}
                            // ptrString = new string;
                            // *ptrString = param.DeepCopy()
    //move constructor
    MyClass(MyClass&&);  //&& rvalue

    // MyClass &operator=(MyClass &&) = default;                         
    // MyClass &operator=(const MyClass &) = default;

    //copy assignment    
    MyClass& operator=(const MyClass&);

    // move assignment           && rvalue 
    MyClass& operator=(MyClass&&);
    
    ~MyClass(){
        delete ptrString;}

    const string&DeepCopy() const{
        return *ptrString;}

private:
    
};

//overloaded =    to deep copy
MyClass& MyClass::operator=(const MyClass &param){
    delete ptrString;
    ptrString=new string(param.DeepCopy()) ;
    return * this; 
}; 

// MyClass::MyClass(const MyClass& param)
// {
//     a = param.a;//shalow copy
//     b = param.b;
//     c= param.c;
// }


int main33()
{
    SomeClass Class_1;
    StringTest stringtest1;
    StringTest stringtest2("stringTest");

    std::cout << "stringtest2 's countent is " << stringtest2.ReadString()<< std::endl;


    MyClass class1("sample");
    MyClass class2 = class1;
    std::cout << "class2 's countent = " << class2.DeepCopy()<< std::endl;

    return  0;
}

int main44(){
    MyClass  MyClass_1("dfsdf");
    MyClass MyClass_2(MyClass_1);
    MyClass MyClass_3 = MyClass_1;
    std::cout << "/* message */" << std::endl;

    return 0;
}

int main(){
    MyClass fn();
    MyClass foo;
    MyClass bar = foo;

    MyClass baz =fn();
    foo = bar;
    baz = MyClass(); //move assigment   , get object's rvalue



    return 0;
}