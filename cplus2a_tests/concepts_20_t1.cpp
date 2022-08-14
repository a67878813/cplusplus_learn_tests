#include <concepts>

class A{};
class B: public A{};

class C :private A{};
int main(){
    //std::dirived_from == true only for public inheritance or exact same class
    static_assert(std::derived_from<B,B> == true );
    static_assert(std::derived_from<int, int > == false );
    static_assert(std::derived_from<B, A > == true );
    static_assert(std::derived_from<C, A > == false );


    static_assert(std::is_base_of_v<B, B > == true );
    static_assert(std::is_base_of_v<int, int > == false );
    static_assert(std::is_base_of_v<A, B > == false );
    static_assert(std::is_base_of_v<A, C > == true );
}