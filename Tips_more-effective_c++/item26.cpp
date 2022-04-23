// limit maxmium class's obj.

// allow 0 or 1 object
#include <string>
class CantBeInstantiated{
    private:
    CantBeInstantiated();
    CantBeInstantiated(const CantBeInstantiated& );
};



// encapsulation
class PrintJob; //forward declaration
class Printer {
public:
    void submitJob(const PrintJob& job);
    void reset();
    void performSelfTest();
    static Printer& thePrinter();

friend Printer& thePrinter();

private:
    Printer();
    Printer(const Printer& rhs);
};

// It will be c'tor && d'tor even if it unused
// we can not guarantee it's initialize time.
Printer& Printer::thePrinter(){
    static Printer p; //  only one priter object
    return p;
}

//when call check static funcs whether should be created
// initialized when it was firstly called
Printer& thePrinter(){
    static Printer p; //  only one priter object
    return p;
}

class PrintJob{
public:
    PrintJob(const std::string & whatToPrint);

};

int main(){
    std::string buffer;
    Printer::thePrinter().reset();
    Printer::thePrinter().submitJob(buffer);
}






//-============ counter





