#include "source.h"
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
    Rectangle(const Rectangle& other)  = default; //delete
    //                                   default;
                            //        : width(other.width),height(other.width){};
    Rectangle(const Rectangle&& other) = delete;

    int CalculaterArea(){return width* height;}


};

int main()
{
    Rectangle Rect1;
    Rectangle Rect2(10,20);
    Rectangle Rect3(Rect1);
    Rectangle Rect4 = Rectangle();
    

    std::cout << Rect2.CalculaterArea() << std::endl;
    return 0;
}