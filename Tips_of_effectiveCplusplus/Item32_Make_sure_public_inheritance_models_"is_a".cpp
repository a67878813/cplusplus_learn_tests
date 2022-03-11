//public inheritance  == "is a"
#include <assert.h>
#include <string>


class Person{};// base ,more common

class Student: public Person{};  //derived, more special form.

void eat(const Person& p);

void study(const Student& s);

Person p;
Student s;

class Bird{};
class FlyingBird: public Bird{
public:
    virtual void fly();

};

class Penguin: public Bird{

};

//another process manner.
void error(const std::string& msg);

class Penguin2: public Bird{
public:
    virtual void fly() { error("Attempt to make a penguin fly!");}
    //running error.
};


class Rectangle{
public:
    virtual void setHeight(int newHeight);
    virtual void setWidth(int newWidth);
    virtual int height() const;
    virtual int width() const;

};

void makeBigger(Rectangle& r){//this func can not be applied to Square. 
                    // so that It is wrong that using public inheritance to model Square and Rectangle.
    int oldHeight= r.height();
    r.setWidth(r.width() +10);
    assert(r.height() == oldHeight);
};

class Square: public Rectangle{};
Square ss;
assert(ss.width() ==    ss.height()    );


int main(){
eat(p);
eat(s);
study(s);
study(p);

Penguin p;
p.fly(); //compile error.
        //It is a good interface design.
    return 0;
};



//Tips
// classes relation include:
    // is-a
    // has-a
    // is-implemented-in-terms-of

