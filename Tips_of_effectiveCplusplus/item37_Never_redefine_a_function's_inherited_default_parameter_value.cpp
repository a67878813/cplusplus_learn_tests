

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


