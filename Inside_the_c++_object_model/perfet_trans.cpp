
#include <memory>

// template<typename T, typename Arg>
// UniquePtr<T> makeUnique(const Arg& arg)
// {return UniquePtr<T>(new T(arg));}



// template<typename T, typename Arg>
// UniquePtr<T> makeUnique(Arg& arg)
// {return UniquePtr<T>(new T(arg));}


// // begin with c++ 11 ===========




// template<typename T, typename Arg>
// UniquePtr<T> makeUnique(Arg&& arg)
// //                       when Arg is typename or auto,   // here is trans 
// {return UniquePtr<T>(new T(arg));}

// //1) 左值引用声明符：声明 S& D; 是将 D 声明为 声明说明符序列 S 所确定的类型的左值引用。
// //2) 右值引用声明符：声明 S&& D; 是将 D 声明为 声明说明符序列 S 所确定的类型的右值引用。

// // 引用折叠

// //通过模板或 typedef 中的类型操作可以构成引用的引用，此时适用引用折叠（reference collapsing）规则：右值引用的右值引用折叠成右值引用，所有其他组合均折叠成左值引用：

// typedef int&  lref;
// typedef int&& rref;
// int n;
 
// lref&  r1 = n; // r1 的类型是 int&
// lref&& r2 = n; // r2 的类型是 int&
// rref&  r3 = n; // r3 的类型是 int&
// rref&& r4 = 1; // r4 的类型是 int&&



#include <vector>
using std::vector;

int main2()
{


//c++98  +
vector<int> vec;
for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
{
//
};

//> c++ 11 
vector<int> vec2;
for (auto it = vec.begin(); it != vec.end(); ++it)
{
//
};

struct Foo{};
Foo* getPFoo();
const Foo* getCPFoo();

Foo foo{};
Foo* pfoo = &foo;
const Foo* cpfoo = &foo;
Foo& lrfoo = foo;
// Foo&& rvfoo = std::static_cast<Foo&>foo;

auto v1 = foo;
auto v2 = pfoo;
auto v3 = cpfoo;
auto v4 = getPFoo();
auto v5 = getCPFoo();

auto v6 = lrfoo;

const Foo& clrfoo = foo;
Foo&& rrfoo = Foo{};//   = an new object

auto v7  = clrfoo;
auto v8 = rrfoo;

// save reference  attribute and const valitile ;
auto& v9 = lrfoo;
const auto& v10_1 = lrfoo; // manual add const to non const;
const auto& v10_2 = clrfoo; // save const
auto& v11 = clrfoo; // auto& to declare a  const attribute.


//transmate semantic
auto&& v12 = foo; // = lv expr // Foo&
auto&& v13 = Foo{}; // = rv expr // Foo&&




}


<template<typename T>
void func(T arg) ;  // T  equivalent to  auto



// rv ==> type
// decltype

struct Point{
    int x=  0;
    int y = 0;

};

Point pt;
Point* pPt = &pt;
const Point* cpPt = &pt;
Point& lrPt = pt;
Point&& rrPt = {};


//lv expr
using T1 = decltype((pt)); // Point&
using T2 = decltype((pPt)); // Point*  &
using T4 = decltype((cpPt));//const Point *  &
using T5 = decltype((lrPt));//Point&
//rrPt ; // Point&
//rrPt.x // int&
//pt.x //int&
//++pt.x // int&          


//pure rv expr
using T9= decltype((pt.x++)); //int  // get value ,and ++
using T10 =decltype((Point{1,2})); //Point
using T11 = decltype  ((5)); // int


// xvalue // have a rvalue when there is no lvalue.
using T12 = decltype ((Point{10,10}.x)); // int&&
using T13 = decltype ((std::move(pt)));// Point&&  
// Is std::move delete lv exprssion's lvalue?

using T14 = decltype  (( static_cast<Point&&>(pt)));//Point&&


// no () version
//get defenition's type
using T21 = decltype(pt); //Point;
// pPt; // Point*
//cpPt // const Ponit*
//lrPt // Pint&
//rrPt ; // Point&&
//rrPt.x // int
//pt.x //int
//Point{10,10}.x // int

decltype(pt) v1 = pt; // Point
decltype((pt)) v2 = pt; // Point&
decltype(1+2+3+4) v3 = 1+2+3+4 ; // int

//after c++14
decltype(auto) v11 = pt; // Point
decltype(auto) v12 = (pt); // Point
decltype(auto) v13 = 1+2+3+4; // Point



#include <string>
using std::string;
string lookup1();
string& lookup2();

string look_up_a_string_1(){return lookup1();} // value semantic
string& look_up_a_string_2(){return lookup2();}// reference semantic

//decltype(auto)
// return valuey 
decltype(auto) look_up_a_string_11(){return lookup1();}
decltype(auto) look_up_a_string_22(){return lookup2();}

                                                                //auto defination tyoe
decltype(auto) look_up_a_string_13(){auto str = lookup1();return str;}

                                                            //  auto () //lv expr 
decltype(auto) look_up_a_string_23(){auto str = lookup1();return (str);}
//reference a stack memory reference


struct AFunctionObj{
    double operator()(char, int);
    float operator()(int);
} f;

template<typename F, typename...Args>

using InvokeResultOfFunc = decltype( F{} (Args{}...));// could be asserted by ctor's fail
                                    //F{} instantiate a function obj
                                    //Args{}instantiate some args objs.

//equal to 

template<typename F, typename...Args>
                        // std::declval< F >() 
                        // return an F&& type
using InvokeResultOfFunc2  = decltype(std::declval<F>()  (std::declval<Args>() ... ) );
                            // decltype ()    // defination type
                            //F 's define type



using T31 = InvokeResultOfFunc2<AFunctionObj, char, int>; // double
using T32 = InvokeResultOfFunc2<AFunctionObj,  int>; // float

template<typename T> T&& declval();

int main()
{
    declval<AFunctionObj>();
}

