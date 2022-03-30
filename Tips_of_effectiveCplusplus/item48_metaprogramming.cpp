// Be aware of template metaprogramming.

// Template metaprogramming(TMP), is write template-based C++ program and 
//  running on compile time.


//when TMP is done, the output, c++ source  code , will be compile normally.



//TMP circulation


// recursive template instantiation.
// (for circulation)


#include <iostream>

template<unsigned n>
struct Factorial {
    enum{ value = n* Factorial <n-1>::value};
};

template<>
struct Factorial<0> {
    enum{value =1};
};





int main(){

std::cout << Factorial<25>::value << std::endl;


    return 0 ;
};


