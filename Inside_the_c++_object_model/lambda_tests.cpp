#include <iostream>
#include <functional>
#include <vector>
#include <iterator>

/* 
[capture]  (args list) -> return type {function body}

[capture] (args list) {function body}

[capture] {function body}
*/

//simplest lambda
//  []{}
constexpr auto add= [](auto a, auto b ) { return a+b;};

/* 
//anonymous class 
struct _lambda_7_26
{
template<typename t0,typename t1>
constexpr auto operator()(   ) const {return a+b;}
};
constexpr const _lambda_7)26 add = _lambda_7_26{};
*/


using IntAddFunc = int(*)(int,int);

template<typename T>
T add2(T a, T b ){return a+b;}

constexpr auto add3 =
[]<typename T>(T a,T b )
{
    return a+b;
};

// std::bind a lambda obj
//auto plus5 = std::bind(plus<int>{},5,std::placeholder::_1);

// plus5(n)    -->     plus(5,n)




int main(int argc, const char** argv) {

constexpr auto add5 = [](auto x) {return add(x,5);};
                    // capture list
                    // & by reference
                    // = by copy

                    //*this can be implicitly captured,   as if captured by reference.
                    // the implicit capture of *this when the capture default is = is deprecated (since C++20)


                    // [& identifier]
                    // simple by-reference capture
                    
                    //[& identifier ...]
                    // simple by-reference capture that is a pack expansion

                    //[this]
                    //by-reference capture of the current object

                    //[*this]
                    // by-copy capture of the current object

                    //[... identifier initializer]
                    //by-copy capture with an initializer that is a pack expansion

                    //[& ... identifier initializer]
                    // by-reference capture with an initializer that is a pack expansion

std::cout<< add5(2) << "done" << std::endl;
constexpr auto assign =
[](int& x, int y){x = y ;};
int x = 0;
auto assignX = [assign,&x](int y){assign(x,y);};
assignX(5);;
std::cout << x << std::endl;
auto assignX2 = std::bind(assign,x,std::placeholders::_1);
assignX2(6);
std::cout << x << std::endl;
auto assignX3 = std::bind(assign,std::ref(x),std::placeholders::_1);
//                      assign( &  x,  n      )
assignX3(7);
std::cout << x << std::endl;
    return 0;
}


