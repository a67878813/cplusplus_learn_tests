#include "source.h"
#include <fstream>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <new>
#include <string>
#include <fstream>
#include <vector>
#include <array>
#include <algorithm>
#include <tuple>

using namespace std;

void terribleCountdownTime(int  countIndex){
    std::cout << "current value "<< countIndex << std::endl;
    terribleCountdownTime(countIndex -1);
}
void countdownTimer(int countIndex, int stopIndex){
    std::cout << "push  " << countIndex << std::endl;
    if(countIndex> stopIndex){
        countdownTimer(countIndex -1, stopIndex);
        std::cout << "current " << countIndex << std::endl;
    }
    std::cout << "pop"<< countIndex << std::endl;
}

int calculateSum(int sumTo){

    if(sumTo <=0)
        return 0;
    else if ( sumTo == 1)
        return 1;
    else
        return calculateSum(sumTo - 1) + sumTo;
}
int main(){
    calculateSum(5 );
    std::cout << calculateSum(5) << std::endl;
    return 0 ;
}