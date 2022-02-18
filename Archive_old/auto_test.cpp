#include "source.h"
#include <fstream>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>

auto add(int x, int y){
    return (x+y);
}
auto Add(int x, int y) -> int;

int main(){
    auto var_1 = 50.0;
    auto int_var = 5+3;

    auto sum = add(10,13);

    return 0;
}