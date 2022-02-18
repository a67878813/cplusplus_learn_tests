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


class Polygon
{
protected:
    int width, height;
public:
    void InitializePolygon(int a, int b){width =a;height=b;}           
};

class Rectangle : public Polygon
{
public:
    int CalculateArea()
    {
        return width*height;
    }
};

class Triangle: public Polygon
{
public:
    int CalculateArea()
    {
        return (width*  height /2);
    }
};

int main()
{
    Rectangle Rect;
    Triangle Triangle_1;

    Rect.InitializePolygon(4,5);
    Triangle_1.InitializePolygon(4 , 5);

    std::cout << Rect.CalculateArea() << std::endl;
    std::cout << Triangle_1.CalculateArea() << std::endl;
    return 0;
}