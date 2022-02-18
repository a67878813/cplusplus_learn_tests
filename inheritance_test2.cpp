// #include <fstream>
// #include <cstdint>
// #include <cstdio>
#include <iostream>
// #include <iomanip>
// #include <new>
// #include <ostream>
#include <string>
// #include <fstream>
#include <vector>
#include <array>
// #include <algorithm>
// #include <tuple>

using namespace std;



class Mother
{
    public:
    Mother() { std::cout << "Mother class : no parameters" << std::endl;}
    Mother(int a ){std::cout << "mother class with parameters" << std::endl;}
};

class Daughter: public Mother
{
    public:
    
    Daughter(int a ) { std::cout << "Daughter class with parameters(int)" << std::endl;}
    // the Mother constructer gets called , when Daughter class has been created.
    // first ,it comes over the mother class , with no parameters,
    // and then , it comes back Daughter class with parameter.
}; 

class Son: public Mother 
{
    public:
    Son(int a) : Mother(a) {std::cout << "son class with parameters(int ) " << std::endl;}
};



int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    //std::cout.tie(nullptr);

    Daughter fff(0);
    Son ttt(0);
    
    return 0;
}