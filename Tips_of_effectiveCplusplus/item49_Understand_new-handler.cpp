//customizing new and delte

//allocation and deallocation routines

//operator new    operator delete
//new-handler

// heap     (global resource)
//race conditions
//  thread-aware
//  synchronization
//  lock-free           concurrent access

// operator new         operator new[]
//operator delete    operator delte[]


//STL container 's memory managed with allocator objects.
//                          NOT new delete!!!!




//Understand the behavior of the new-handler.

#include <cstdlib>
#include <new>
#include <iostream>

namespace std{
    typedef void (*new_handler) ();

            // new_handler   declare a function pointer,
            //  have no return  nor parameter
    new_handler set_new_handler(new_handler p) throw();
            // declare a function(set_new_handler) ,
            //return new-handler
            //   get a new-handler
                                //throw 异常明细 ，表示该函数不抛出任何异常
}



void outOfMem(){

    std::cerr <<"Unaable to satisfy request for memory\n"<< std::endl;
    std::abort();
    std::exit(1);
}


class X{
    public:
    static void outOfMemory();
};

class Y{
    public:
    static void outOfMemory();
};



std::new_handler Widget::currentHandler =nullptr;
std::new_handler Widget::set_new_handler(std::new_handler p) throw(){
    std::new_handler oldHandler = currentHandler;
    currentHandler = p;
    return oldHandler;
};

class NewHandlerHolder{
    public:
    explicit NewHandlerHolder(std::new_handler nh) // get now new-handler
    :handler(nh){}

    ~NewHandlerHolder()
    {std::set_new_handler(handler);}
private:
    std::new_handler handler;

    NewHandlerHolder(const NewHandlerHolder&); // block  copying
    NewHandlerHolder&
    operator=(const NewHandlerHolder&);    
};
class Widget{
    public: 
    static std::new_handler set_new_handler(std::new_handler p) throw(); // new_handler is func pointer
    static void* operator new(std::size_t size) throw(std::bad_alloc);

    private:
    static std::new_handler currentHandler;
};
void* Widget::operator new(std::size_t size) throw(std::bad_alloc){
    NewHandlerHolder
        h(std::set_new_handler(currentHandler));
    return ::operator new(size);   // call // when error  reset global new-handler
};

int main(){


    

    // std::set_new_handler(outOfMem);

    // std:std::set_new_handler(nullptr);
    int* pBigDataArray = new int[10000000000L];


    return 0;
};