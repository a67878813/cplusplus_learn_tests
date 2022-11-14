#include <iostream>

constexpr int isqrt( int n)
{
    int i =1;
    while (i*i<n) ++i;
    return i-  (i*i != n);// >n -1    == -0

}


constexpr int s1 = isqrt (9);
constexpr int s2 = isqrt (1234);

int main(){
    std::cout << "s1 = " << s1 << std::endl;
    std::cout << "s2 = " << s2 << std::endl;
}