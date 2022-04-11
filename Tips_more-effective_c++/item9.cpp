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



void displayInfo(const Information& info)
{
    WINDOW_HANDLE w(createWindow());
    //display info in window corresponding to w;
    destroyWindow(w);
}

class WindowHandle{
public:
    using WINDOW_HANDLE = size_t;
    WindowHandle(WINDOW_HANDLE handle) : w(handle) {}
    ~WindowHandle() {destroyWindow(w);};

    operator WINDOW_HANDLE() {return w;}  // implicit trans  WindowHandle ->- WINDOW_HANDLE

private:
    WINDOW_HANDLE w;

    // disble multiple WINDOW_HANDLE
    WindowHandle(const WindowHandle&); // disable copy
    WindowHandle& operator=(const WindowHandle&); //disable assignment

};

void displayInfo_(const Information& info)
{
    WindowHandle w(createWindow());

    // display window corresponding to w;
}
