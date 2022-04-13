

#include <cmath>
#include <iostream>
#include <stdexcept>

double sqrt(double);

int main(){

int i ;
i =100 ;
double sqrtOFi = std::sqrt(i);

std::cout << sqrtOFi << std::endl;



    return 0;
};


void f(int value)
{
    try{
        if (someFunction()) {   // if true 
            throw value;     // throw  a int
        }
    }
    catch(double d){    // only handle double 
                        //there is no there is not type transform

    }
    // in try ... catch
    /* 
    only two type transform

    1.
        inheritance-based conversions
    
    catch( base class )   could  manage catch(derived class)
    

    catch( runtime_error) coule catch :
            range_error
            underflow_error
            overflow_error


            could catch

            by-value
            by-reference
            by-pointer   // work only for pointer 
    




    2.

    pointer

    catch( const void*)   // could catch any pointer type exception

    exception catch in sequence ,( first fit)

    virtual function ( best fit) 
    */
    try{}
    catch( std::invalid_argument& ex){}
    catch (std::logic_error& ex){}

}


// std::logic_error 11;


/* 
1. exception objects always be copied

2.exceptions typetrans is restricted.

3.catch block will fit in sequence order
    // like case bloch

    while virtual function will fit to best match's





*/