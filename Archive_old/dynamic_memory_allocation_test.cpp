#include "source.h"
#include <fstream>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <new>
#include <string>
#include <fstream>
#include <vector>

void printsome(){
    int *pointer_1 = new int;
     
}
int main(){
    // int array[100000];
    int somevariable = 10;
    int* pointer_1 = new int;
    delete pointer_1; //  !!!
    pointer_1 = &somevariable;



    pointer_1 = new int;
    pointer_1 = nullptr;
    return 0; 
}