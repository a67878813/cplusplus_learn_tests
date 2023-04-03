#include <cmath>
int foo = std::max(1,2); // implicity
/* 
  man<int>
 */
double bar = std::max<double>(1,2.0); // explicitly
// different type in (),
// compiler can not deduct a < >     // template argument
//

#include <vector>

std::vector<int> foo2{1,2,3,4,};
std::pair<int,double> bar2{1, 2.0};

// before c++17
auto bar33 = std::make_pair(1,2.0);

//after c++17
template<typename T, typename U>
struct Pair{
    Pair();
    Pair(T,U);
};

Pair foo3{1,2};
// Pair foo4{};


template<typename T, typename U>
struct Pair_V2{
    template<typename A, typename B>
// Pair_V2(T,U) ->Pair_V2<T,U>;
    Pair_V2(A&&,B&&);
};

template<typename T, typename U>
Pair_V2<T,U>::Pair_V2(T&&,U&&)
{

};

// template<typename T, typename U>
// Pair_V2(T, U) -> Pair_V2<A,B>;

int main(){
Pair_V2 foo5{1,2};

}
