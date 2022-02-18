#include "source.h"
#include <fstream>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

typedef int number;
typedef double* DP;

#define DEBUG

#ifdef DEBUG

#endif //DEBUG

// #ifndef 1 

// #endif // !1

#define USEGPU


constexpr double cc = constants::mass ;



void testFun(const int &number){
    std::cout << number << std::endl;
    constexpr double gravity{9.8};
    constexpr float pi{3.14f};
    constexpr int addnn{10+5};
    // constexpr int constnjn = number;

    constexpr int maxAmmo{500};
   
}
int main() {
    //rules:

    //address cannot have a special character in it
    string name;
    ifstream input("data.txt");
    if (input.is_open())
    {
        std::cout << "Could open!" << std::endl;
    }
    else {
        std::cout << "not open" << std::endl;
    }

    int size = 0;
    int *num;
    int dummy;
    int i =0;

    while (input >> dummy ) {
    
        size ++;
        i++;
    
    }
    const double gravity{9.8};
    float const pi{3.14f};
    const double pi2 = 3.44f;


    std::cout << size << std::endl;


    ofstream output("data.csv");

    // for (size_t j = 0; j <= size; j++)
    // {
    //     output<< num[j]<< ',';

    // }
    output.close();
    input.close();


    char t1;
    short int t2;
    short t3;
    int t4;
    long int t5 ;
    long t6;
    long long int t7;
    long long t8;

    signed char r1;
    signed short r2;
    signed int r3;
    signed long r4;
    signed long long r5;

    unsigned char y1;
    unsigned short y2;
    unsigned int y3;
    unsigned long y4;
    unsigned long long y5;

    float f1; // 4bytes     1.18e-38  to 3.4e38       6-9 significant digits
    double f2; //8bytes     2.23e-308 to 1.80e308    15-18 significant digits
    long double f3; //8 12 or    **16 bytes    3.36e-4932 to 1.18e4932  
                                                    // 33-36 significant digits


    int a(10);
    double b(5.0);
    long double c(1.0f);

    double v1(2.5e4);
    double v2(52.54);
    double v3(2e-2);
    long double e;
    e= c/3;
    char c1(97);
    char c2('a');

    int8_t ss;
    // static_cast<type>(expression)

    // cin.ignore();
    std::cout<<std::setprecision(16);
    std::cout << sizeof(e) << std::endl;
    std::cout << static_cast<int>(e) << std::endl;
    // std::cout << c/3 << std::endl;
    std::cout << e << std::endl;
    std::cout << (float)e << std::endl;
    
    double v_zero = 0.0;
    double v_inf = 5.0/v_zero;
    std::cout << v_inf << std::endl;
    
    double NaN = v_zero/v_zero;
    std::cout << NaN << std::endl;
    char16_t  cc161;
    char32_t  char321;

    return 0;
}