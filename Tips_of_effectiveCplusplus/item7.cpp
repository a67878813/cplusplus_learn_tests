#include <iostream>

class Point{
public:
    Point(int xCoord, int yCoord);
    ~Point();
    void virtual  func1(); //virtual func need some bits
                            // generally is vptr(virtual table pointer) points to vtbl(virtual table)
                            // This will add memory consume.
private:
    int x,y;
    
};

//Tip
//polymorphic base classes should have virtual destructor.
//not vice versa  (reversely not need virual destructor)