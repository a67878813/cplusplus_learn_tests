#include <iostream>


class Printer{
public:
class TooManyObjects{};

    Printer();
    ~Printer();
private:
    static size_t numObjects;
    Printer(const Printer& rhs);
};

size_t Printer::numObjects = 0;
Printer::Printer()
{
    if(numObjects >= 1){
        throw TooManyObjects();
    }
    // normal construction here;
    ++ numObjects;
}

Printer::~Printer()
{
    // normal destruction here;
    --numObjects;
}

//avoid inheritance of concrete class 
class ColorPrinter: public Printer{

};

// class CPFMachine{
// private:

// Printer p;
// FaxMachine f;
// CopyMachine c;
// };



int main(){

Printer p ;

ColorPrinter cp;// here would throw TooManyobjects;
 // cause of cp's base class contents/

};