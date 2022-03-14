// differentiate  between

//inheritance of interface 
//and
// inheritance of implementation.

#include <string>


/* 
public inheritance is made up of :
    1. function interfaces's inheritance
    2. fucntion implementations' inheritance.

*/


class Shape{
public:
    virtual void draw() const =0;
    virtual void error( const std::string& msg);
    int objectID() const;
};

class Rectangle: public Shape{
public:
    void draw() const  {};
};
class Ellipse: public Shape {
public:
    void draw() const  {};
};




int main(){
Shape* ps = new Shape;
Shape* ps1 = new Rectangle;
ps1->draw(); //Rectangle::draw

Shape* ps2 = new Ellipse;
ps2->draw(); //Ellipse::draw
ps1-> Shape::draw();//??
ps2->Shape::draw();//??


    return 0;
};