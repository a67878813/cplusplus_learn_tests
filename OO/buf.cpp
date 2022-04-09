#include <iostream>
#include <istream>

class X
{
    friend std::istream&
        operator >> (std::istream& , X&);    
    public:
    X(int sz = 1024) {ptr = new char[sz];}

    private:
    char *ptr;
    
};

X buf;

int main(){

    // buf must be construct before main()

    std::cin >> std::setw(1024) >> buf;
};

// object lessons

// the semantics of constructors

//the semantics of data

//the semantics of function

// semantics of construction, destruction, and copy

//runtime semantics

//on the cusp of the object model
//  exceotion handling, template support , runtime type identification.


