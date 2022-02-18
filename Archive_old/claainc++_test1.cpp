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

class Rectangle
{
    int width,height; 
public:
    //Rectangle();
    Rectangle(int x,int y) : width(x),height(y) {}

    Rectangle(std::string ,int );

    int CalculateArea(){return (width*height);} 
};


//Rectangle::Rectangle(int w ,int h){    width = w;    height = h;}
//Rectangle::Rectangle(int x,int y) : width(x),height(y) {}
//Rectangle::Rectangle(int x, int y ) : width(x) {height = y ;}


//int Rectangle::CalculateArea(){
    //return width*height;
//}

class Circle
{

    double radius;
public:
    Circle(double r) : radius(r){}

    double CalculateArea() {return (radius * radius * 3.14);}

};

class Cylinder
{
    Circle baseOfCylinder;
    double height;
public:
    Cylinder(double radius, double h): baseOfCylinder(radius), height(h) {}

    double CalculateVolume(){return (baseOfCylinder.CalculateArea() *height); }
};

int main(){
    Rectangle rect1(5,5),rect2(6,6);
    Rectangle rect3(5,5);  // Functional Form
    Rectangle rrr4 = {56,76};
    Rectangle rrr5{45,32}; //uniform Initialization

    int area = rect1.CalculateArea();
    std::cout << area << std::endl;

    Cylinder clinder1(10, 20);
    std::cout << "cylinder1's volume = " << clinder1.CalculateVolume()<< std::endl;

    
    Rectangle rec1(3,4);
    Rectangle *ptrRec_1,*ptrRec_2,*ptrRec_3;

    ptrRec_1 = &rec1;
    ptrRec_2 = new Rectangle(56,6);
    ptrRec_3 = new Rectangle[2]{  {2,5},{3,6}  };

    std::cout << "Rect1's area "<< rec1.CalculateArea() << std::endl;
    std::cout << "ptrRect1's area ="<< ptrRec_1->CalculateArea() << std::endl;
    std::cout << "ptrRec2 ' are "<< ptrRec_2->CalculateArea() << std::endl;
    std::cout << "ptrr 3 [0 's area  "<< ptrRec_3[0].CalculateArea() << std::endl;
    std::cout << "ptrr 3 [1  's area " << ptrRec_3[1].CalculateArea()<< std::endl;
    
    delete ptrRec_2;
    delete[] ptrRec_3;





    return 0;
}
