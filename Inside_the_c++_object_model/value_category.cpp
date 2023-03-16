#include <iostream>
#include <vector>
#include <cassert>

void foo (int&)
{
    std::cout << "/* message1 */" << std::endl;
};
void foo(int&&)// only for rvalue expre
{
    std::cout << "/* message2 */" << std::endl;

};



int main2()
{
    //vector(vector&& other ) noexcept;
    std::vector<int> x{1,2,3,4};
    std::vector<int> y (std::move(x)); // before c++11, call swap(y,x) to move;
    assert(x.empty());

    assert(y.size() ==4);
    return 0;
    

};

// reference parameter
// value&
// const value&
// value&&

class Value()
{

};
//value& version

int f(Value& v){};

// usage Value v;
//auto res = f(v);

//const Value&
// Result f(const Value& v){};

//usage 
// auto res - f{Value{});
// auto res = f(FunctionReturnValue()};

//Value&&
// result f(Value&& v){};

// usage
//auto res = f(Value{});
//auto res = f(FunctionReturnValue())



uint32_t main3(){

};



int  main()
{
    int&& value = 5;
    foo(value);// lvalue

    foo(6); //pure rvalue// prvalue

    foo(static_cast<int&&>(value));//  xvalue
    // glvalue ==< lvalue + xvalue
    main2();

};
