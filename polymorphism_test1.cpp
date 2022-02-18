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
    Polygon(int a,int b): width(a),height(b){}
    void InitializePolygon(int a, int b){width =a;height=b;}
    // virtual int CalculateArea(){return 0;}
    //if not virtual 
    // virtual keyword;
    // allows a member of direved class with the same name 
    //as one of the base class to be propertly get called from 
    //a pointer to the base class.

    //the class that declares or inherits a morpho function 
    //is also called watching function

    virtual int CalculateArea() = 0;  //abstract base class. it can not be instantiated.
    //pure virtual function
    //abstract class.
    void PrintArea()
    {
        std::cout << this->CalculateArea() << std::endl;
    };
};


class Triangle: public Polygon
{
public:
    Triangle(int a, int b):Polygon(a,b){}
    int CalculateArea()
    {
        return (width*height/2);
    }
};

class Rectangle: public Polygon
{
public:
    Rectangle(int a,int b):Polygon(a,b){}
    
    int CalculateArea()
    {
        return (width*height);
    }
};

int main()
{
    Polygon *ptrPolygonRect = new Rectangle(4,5);
    Polygon *ptrPolygonTriangle = new Triangle(4,5);

    
    ptrPolygonRect->PrintArea();
    ptrPolygonTriangle->PrintArea();

    return 0 ;
};