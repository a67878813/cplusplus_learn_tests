
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

int main()
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
