#include "source.h"
#include <fstream>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>



int intArray[4][5];

int index,result = 0;


void samplefunction(int arg[]){
    std::cout << "address is :" << &arg<< std::endl;
    std::cout << arg[2] << std::endl;
}



int AddNumbers(int x, int y ){
    return (x+y);
}

int SubtractNumbers(int x, int y){
    return(x-y);
}

int operation(int x, int y , int(*functionToCall)(int, int)   ){
    int func;
    func= (*functionToCall)(x,y);
    return(func);
}



int main11() {

    int array_1[5];
    int array_2[5] = {0,10,20,34,40};
    int array_3[5] = {};
    int array_4[] = {50,60,70,80,9,100};
    int array_5[] =  {1,2,3,4,5};
    int array_6[]{6,7,8,9,};

    std::cout << sizeof(array_2) << std::endl;

    std::cout << array_2[3] << std::endl;
    
    intArray[2][3] = 6;

    samplefunction(array_2);
    std::cout << &array_2 << std::endl;






    return 0;
}

int main() {
    int a,b;

    int(*minus)(int,int) = SubtractNumbers;

    a = operation(7, 5, AddNumbers);
    b = operation(20,a, minus);

    std::cout << b << std::endl;
    return 0;
}