#include <iostream>

template<class BeingCounted>
class Counted{
public:
    class TooManyObjects{};
    static int objectCount(){return numObjects;}
protected:
    Counted();
    Counted(const Counted& rhs);
    ~Counted(){--numObjects;}
private:
    static int numObjects;
    static const size_t maxObjects;
    void init(); // avoid c'tor 's code repeated.  ???

};

template<class BeingCounted>
Counted<BeingCounted>::Counted()
{init();}

template<class BeingCounted>
Counted<BeingCounted>::Counted(const Counted<BeingCounted>&)
{init();}

template<class BeingCounted>
void Counted<BeingCounted>::init()
{
    if(numObjects >= maxObjects) throw TooManyObjects();
    ++numObjects;
}








// using


class Printer:private Counted<Printer>{
public:
    //pseudo-constructors
    static Printer* makePrinter();
    static Printer* makePrinter(const Printer& rhs);
    ~Printer();
    void submitJob();
    void reset();
    void performSlefTest();


    using Counted<Printer>::objectCount;// make it public
    using Counted<Printer>::TooManyObjects;
    // typedef typename Counted<Printer>::maxObjects = 10;
private:
    Printer();
    Printer(const Printer& rhs);
    
};

class FileDescriptor{};

template<>
const size_t Counted<Printer>::maxObjects = 10;

template<>
const size_t Counted<FileDescriptor>::maxObjects = 14;



int main(){



    Printer* a(Printer::makePrinter());
    return 0;

    


}