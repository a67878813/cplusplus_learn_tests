#include <iostream>
#include <memory>

class FSA{
public:
    // pseufo constructors
    static FSA* makeFSA();
    static FSA* makeFSA(const FSA& rhs);

private:
    FSA();
    FSA(const FSA& rhs);
};

FSA* FSA::makeFSA()
{return new FSA();  }

FSA* FSA::makeFSA(const FSA& rhs)
{return new FSA(rhs);  }
















int test() {
    // call default FSA c'tor
    std::shared_ptr<FSA> pfsa1(FSA::makeFSA());

    // caoo FSA copy c'tor
    std::shared_ptr<FSA> pfsa2(FSA::makeFSA(*pfsa1));

    return 0;
};


//=== object-counting && pseudo-constructors

class Printer{
public:
    class TooManyObjects{};
    //pseudo-constructor
    static Printer* makePrinter();
    ~Printer();
    void submitJob(const PrintJob& job);
    void reset();
    void  performSelfTest();

private:
    static size_t numObjects;
    Printer();
    Printer(const Printer& rhs) ; 

};
size_t Printer::numObjects = 0;

Printer::Printer()
{
    if(numObjects >= 1){
        throw TooManyObjects();
    }
    // proceed with normal c'tor
    ++numObjects;
}

Printer* Printer::makePrinter(){
    return new Printer;
}


class ColorPrinter   : public Printer{

};
int main(){
    
    // Printer p1; 

    Printer *p2 = Printer::makePrinter();

    // Printer p3 = *p2; // 

    p2->performSelfTest();
    p2->reset();

    delete p2;

    std::shared_ptr<Printer> p4(Printer::makePrinter()) ;
    p4->performSelfTest();
    p4->reset();

    // ColorPrinter * pp1 = ColorPrinter::makePrinter();


    return 0;
};