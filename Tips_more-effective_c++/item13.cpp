// catch exceptions by reference.

// class exception{};
#include <iostream>
class exception{
    public:
    virtual const char* what() noexcept; //return resume of exception
};

class runtime_error: public exception{};

class Validation_error: public runtime_error{
    public:
    virtual const char * what() noexcept; // redefine

};

void someFunction2(){

    if ( __test_fall) {
        throw Validation_error();
    }
}

void doSomething2(){
    try{
        someFunction2();
    }
    catch (exception  ex){ // catch-by-value 

                            // it will slice obj
        std::cerr << ex.what();  // call exception::what(),
                                //  not Validation_error::what()
    }

    catch(exception& ex){
        //1 time copy
        // there is no slicing
        std::cerr << ex.what();  // call Validation_error::what(),
        

    }
}









void someFunction(){
    static exception ex;

    throw & ex; // throw pointer

    exception ex2;  //local obj
    throw & ex2;
}

void doSomething(){
    try{
        someFunction();
    }
    catch( exception *ex){    // no obj was copied

    }
}


/* 
bad_alloc
bad_cast
bad_typeid
bad_exception

will not worked by-pointer


*/