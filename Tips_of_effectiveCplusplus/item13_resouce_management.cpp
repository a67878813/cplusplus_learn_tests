#include <iostream>
#include <memory>
#include <vector>
class Investment{
public:


};


Investment* createInvestment();// return pointer to Ivestment iheretance system's inner dynimic object.
                // It is user's responsibility to delete it.



//rely on function to delete resouces is unreliable
void f1(){
    Investment* pInv = createInvestment();
    
    delete pInv;
};


//std:;auto_ptr 
// is a smart pointer that manages an object obtained via new expression
// and deletes that object when auto_ptr itself is destroyed.
// It may be used to provide exception sagety for dynamically allocated objects,
// for passing ownership of dynamically allocated objects into functions
// and for returning dynamically allocated objects from functions.
//
// copyting an auto_ptr copies the pointer and transfers ownership to the destination:
//both copy construction and copy assignment of auto_ptr modify their right-hand arguments,
//and the "copy' is not equal to the original.
//Because of these ususual copy semantics,
//auto-ptr may not be placed in standard containers.
//std::unique-ptr is preferred for this and other uses.
//
void f2(){
    std::auto_ptr<Investment> pInv( createInvestment() )  ;
                        // there is only () value Initializer
                        // operator= has not been assigned/overloaded.

}
// std::auto_ptr<Investment> pInv(createInvestment());



int main(){
std::auto_ptr<Investment> pMYTest(new Investment )  ;
                        // () initializer



int  here_is_function(int);
int  here_is_also_function(int*);
int  here_is_also_function_too(int&);
int here_is_also_function (const int& i);

int here_is_v2(int(5));
int here_is_v3(5);
// () as varible initilizer is easy to confuse 
    //when that one is not familier with names or that there are type of pointers.


int  (*here_is_func_pointer___varible)(int);
int* here_is_value_pointr2 = new int();
                    // =  int   (   (int)0  )

int* here_is_v1_1 = (int*)int(5);   //pessimization     //  pessimist is opposite of an optimist
int here_is_v1 = int(5);

int here_is_functioon1();
int* aaa = new int();
int here_is_varible_value_initilized_manner();


}
