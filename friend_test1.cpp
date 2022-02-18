#include <fstream>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <new>
#include <ostream>
#include <string>
#include <fstream>
#include <vector>
#include <array>
#include <algorithm>
#include <tuple>

using namespace std;


class Rectangle{
    int width,height;
public:
    Rectangle(int x, int y ): width(x),height(y) {}
    Rectangle() = default;
    int CalculaterArea(){return width* height;}

    friend Rectangle Duplicate(const Rectangle&);
};

Rectangle Duplicate(const Rectangle &param)
{
    Rectangle tempRect;
    tempRect.width = param.width*2;
    tempRect.height = param.height*2;
    return tempRect;
}

int main(){
    Rectangle rect1;
    Rectangle rect2(2,3);

    rect1 = Duplicate(rect2);
    std::cout << rect1.CalculaterArea() << std::endl;


    return 0;
}