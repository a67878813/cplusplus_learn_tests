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


class Polygon
{
    protected:
    int width,height;
    public:
    Polygon(int a, int b ): width(a), height(b){}

};
class Output 
{
    public:
    static void PrintToScreen(int content);
};

void Output::PrintToScreen(int content)
{
    std::cout << content << std::endl;
}

class Triangle: public Polygon, public Output
{
    public:
    Triangle(int a,int b): Polygon(a,b){}
    int CalculateAreA()
    {
        return (width*height/2);
    }
};


class Rectangle: public Polygon, public Output
{
    public:
    Rectangle(int a,int b): Polygon(a,b){}
    int CalculateAreA()
    {
        return (width*height);
    }
};

int main(){
    Rectangle Rect(4,5);
    Triangle Triangle1(4,5);

    Rect.PrintToScreen(Rect.CalculateAreA());
    Triangle1.PrintToScreen(Triangle1.CalculateAreA());
    return 0;
};