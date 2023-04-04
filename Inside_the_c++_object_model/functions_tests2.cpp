
#include <iostream>
#include <functional>
#include <vector>
#include <iterator>

enum class Op {ADD, MUL};

std::function<int(int,int)> OperationFactory(Op op){
    switch(op){
        case Op::ADD: return [](int a, int b) {return a+b;};
        case Op::MUL: return std::multiplies<int>{};
    }
}






