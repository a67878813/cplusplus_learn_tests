#include <memory>

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


template<typename T> struct declval_protector 
{
    static constexpr bool value = false;
};
template<typename T> T&& declval()
{
    static_assert(declval_protector<T>::value, // alert when using wrong
    // static_assert (false) , //will always aleart
    " ====LEART!!  declval only used in decltype/sizeof");
}






int main()
{
    // declval<AFunctionObj>();
    return 1;

};

