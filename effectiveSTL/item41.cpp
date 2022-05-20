#include <algorithm>
#include <functional>

#include <list>
#include <iostream>
#include <vector>
using std::vector;

using std::list;
using std::cout;


class Widget{
    public:
    void test();
};

// std::ptr_fun(_Result (*__x)(_Arg))
// std::mem_fun(_Ret (_Tp::*__f)() const)
// std::mem_fun_ref(_Ret (_Tp::*__f)() const)

//test
void test1 (Widget& w) {
    
};
vector<Widget> vw;
//test
void test2 () {
    std::for_each(vw.begin(), vw.end(), test1);

    std::for_each(vw.begin(), vw.end(), std::mem_fn(&Widget::test));

    list<Widget*> lpw;
    for_each(lpw.begin(), lpw.end(), &Widget::test);
     //wrapped with mem_fn // since 2011  //2020 constexpr
    for_each(lpw.begin(), lpw.end(), std::mem_fn(&Widget::test));
    // 1. call mem_fn(&Widget::test)(lpw...)
    //2. lpw_for_each->&Widget::test
};
// std::mem_fn(_Tp _Class::*__pm)  
// template< class M, class T >
// constexpr /*unspecified*/ mem_fn(M T::* pm) noexcept;

// M return_type   T class
//  

// (since C++20)

// Function template std::mem_fn generates wrapper objects for pointers to members, which can store, copy, and invoke a pointer to member. Both references and pointers (including smart pointers) to an object can be used when invoking a std::mem_fn.
// mem_fn 's result 's type 
std::result_of<decltype(pointer)(Args&&...)>::type
//declytype(pointer)(args&&) 保证 exp 的结果是有类型

std::invoke_result_t<decltype(pointer), Args&&...>

// and the value in noexcept specifier is equal to s
std::is_nothrow_invocable_v<decltype(pointer), Args&&...>)

//member function

// template<class... Args>
// constexpr /* see below */ operator()(Args&&... args) /* cvref-qualifiers */
//     noexcept(/* see below */);
// (since C++20)

// Let fn be the call wrapper returned by a call to std::mem_fn with a pointer to member pm. Then the expression fn(t, a2, ..., aN) is equivalent to INVOKE(pm, t, a2, ..., aN), 
//where INVOKE is the operation defined in Callable.


