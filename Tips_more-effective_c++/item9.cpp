#include <iostream>

#include <memory>
/* #include <setjmp.h>

void f(){

    label:

    label2:
    goto label;

} */


// ALA = Adorable Little Animal
class ALA {
public:
    virtual void processAdoption() =0;
    virtual ~ALA() =default;
private:
};

class Puppy: public ALA{
    virtual void processAdoption () override;
};
class Kitten: public ALA{
    virtual void processAdoption () override;
};


ALA* readALA(std::istream& s);


void processAdoptions_exception_leak(std::istream& dataSource)
{
    while (dataSource){     // if there a data 
        ALA *pa = readALA(dataSource); // get next animal 
        pa->processAdoption(); // do adoption
        delete pa; // delete readALA return obj

    }
};

void processAdoptions_(std::istream& dataSource)
{
    while (dataSource){     // if there a data 
        ALA *pa = readALA(dataSource); // get next animal 
        try{
        pa->processAdoption(); // do adoption
        }
        catch(...){ //  ... =  catch all 
            delete pa; // delete readALA return obj
            throw;  // exception broadcast to caller side;

        }
        delete pa; //  there is no exception
                    //delete readALA return obj


    }
};

void processAdoptions(std::istream& dataSource)
{
    while (dataSource){     // if there a data 
        std::shared_ptr<ALA> pa(readALA(dataSource));    // auto release
        pa->processAdoption(); // do adoption

    }
};

