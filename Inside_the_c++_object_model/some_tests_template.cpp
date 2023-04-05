/*  编译时多态（编译时分支选择） （函数重载决策顺序）
可操控编译器的决策过程，选择预期的版本，也能实现编译时的分支判断能力。
在c++17引入 if cosntexpr 
c++20引入 concept约束后，技巧被替代。
*/

template<typename T, typename U = T&&> U declval_(int); // none void type
template<typename T> T declval_(long);// void type need implicit transform.
template<typename T> struct delval_protector
{static constexpr bool value = false;};

template<typename T>
auto declval() -> decltype(declval_<T>(0)) {
    static_assert(/*  */delval_protector<T>::value,"sdfsdfs");
    return declval_<T>(0);// only for avoid warnning
}

#include <iostream>
using T1 = int ;
int main(){
    std::cout << "size is "<<
    sizeof(decltype(declval<void>() )) << std::endl;;
}
