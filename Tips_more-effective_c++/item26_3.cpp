#include <iostream>
#include <memory>






45656



45656
//=== object-counting && pseudo-constructors

class Printer{
public:
    class TooManyObjects{};
    //pseudo-constructor
    static Printer* makePrinter();
    //copy ctor
    static Printer* makePrinter(const Printer& rhs);
    ~Printer();
    void submitJob(const PrintJob& job);
    void reset();
    void  performSelfTest();

private:
    static size_t numObjects;
    static const size_t maxObjects = 10;
    Printer();
    Printer(const Printer& rhs) ; 


    //for old compiler
    enum{maxObjects2 = 10 };


};
size_t Printer::numObjects = 0;
// const size_t Printer::maxObjects;


Printer::Printer()
{
    if(numObjects >= maxObjects){
        throw TooManyObjects();
    }
    // proceed with normal c'tor
    ++numObjects;
}
Printer::Printer(const Printer& rhs)
{
    if(numObjects >= maxObjects){
        throw TooManyObjects();
    }
}

Printer* Printer::makePrinter(){
    return new Printer;
}

Printer* Printer::makePrinter(const Printer& rhs){
    return new Printer(rhs);
}



class ColorPrinter   : public Printer{

};
int main(){
    
    // Printer p1; 

    Printer *p2 = Printer::makePrinter();

    // Printer p3 = *p2; // 

    p2->performSelfTest();
    p2->reset();
    // std::cout << p2->maxObjects2 << std::endl;

    delete p2;

    std::shared_ptr<Printer> p4(Printer::makePrinter()) ;
    p4->performSelfTest();
    p4->reset();

    // ColorPrinter * pp1 = ColorPrinter::makePrinter();


    return 0;
};