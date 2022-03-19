

// inherited a virtual function with default value

// virtual function  (dynamically bound)  ( late binding)
// default value (statically bound) ( early binding)

class Shape{
    public:
    enum ShapeColor{ Red, Green, Blue};
    // all shape must define a function to draw itself. 
    virtual void draw(ShapeColor color = Red) const = 0;

};

class Rectangle: public Shape{
    public:
    virtual void draw(ShapeColor color = Green) const;// there is different default value
};


class Circle:public Shape{
    public:
    virtual void draw(ShapeColor color) const; 

};

//==============

//NVI
class Shape1{
    public:
    enum ShapeColor {Red, Green,Blue };
    void draw(ShapeColor color = Red) const { // non-virtual 
        doDraw(color);   // call virtual
    }
private:
    virtual void doDraw(ShapeColor color) const =0;   //real work
};

class Rectangle1 : public Shape1{
    public:
    private:
    virtual void doDraw(ShapeColor color) const; // do not define default value
}


int main(){
Shape* ps;
Shape* pc= new Circle;
Shape* pr = new Rectangle;

ps = pc;
ps = pr;
pc->draw(Shape::Red);  // call Circle::draw(Shape::Red)
pr->draw(Shape::Red); // call Rectangle::draw(Shape::Red)

pr->draw(); // cal Rectangle::draw(Shape::Red)    //pr static type is Shape* , ti's default value coms from Shape.


};


