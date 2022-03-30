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
#include <string>
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
    static std::new_handler set_new_handler(std::new_handler p) throw(); 
    // new_handler is func pointer
    static void* operator new(std::size_t size) throw(std::bad_alloc);

    private:
    static std::new_handler currentHandler;
};
void* Widget::operator new(std::size_t size) throw(std::bad_alloc){
    NewHandlerHolder
        h(std::set_new_handler(currentHandler));

    // alloc or throw error
    
    return ::operator new(size);   // call global operator new
    // when error   ,propergate bal-alloc &
    // NewhandlerHolder ~() reset handler
    
};

std::new_handler Widget::currentHandler =nullptr;
std::new_handler Widget::set_new_handler(std::new_handler p) throw(){
    std::new_handler oldHandler = currentHandler;
    currentHandler = p;
    return oldHandler;
};




// base template class 
// support class specific set_new_handler
// typename T ,used to 
//differ different direved class's static currentHandler.
template<typename T> 
class NewHandlerSupport{
public:
    static std::new_handler set_new_handler(std::new_handler p) noexcept;
    static void* operator new(std::size_t size) noexcept(false);
private:
    static std::new_handler currentHandler;
};

template<typename T>
std::new_handler
NewHandlerSupport<T>::set_new_handler(std::new_handler p) noexcept{
    std::new_handler oldHandler = currentHandler;
    currentHandler = p;
    return oldHandler;
}

template<typename T>
void* NewHandlerSupport<T>::operator new(std::size_t size) 
noexcept(false){
    NewHandlerHolder h(std::set_new_handler(currentHandler));
    // alloc or throw error
    return ::operator new(size);// call global operator new
    // when error ,propergate bad_aloc &
    // Holder 's ~(), will reset currentHandler
}
template<typename T>
std::new_handler NewHandlerSupport<T>::currentHandler =nullptr;
// initialize currentHandler


// curiously recurring template pattern;CRTP
// DO IT FOR ME
//using NewHandlerSupport
class Widget1: public NewHandlerSupport<Widget1>{
    //there is no need to declare set_new_handler or operator new
};
// this methord suply all function for "class's specific set_new_handler"



class Widget3{};
























int main(){


    

    // std::set_new_handler(outOfMem);

    // std:std::set_new_handler(nullptr);
    // int* pBigDataArray = new int[10000000000L];
    /* 
    error message:

        terminate called after throwing an instance of 'std::bad_alloc'
        what():  std::bad_alloc
     */


    void outOfmem();// declare func, used when bad alloc with  Widget obj
    Widget::set_new_handler(outOfMem);  // setting outOfMem as Widget's new-handling fuction
    Widget* pw1 = new Widget;   // if memory alloc failed , call out OfMem

    std::string* ps = new std::string; 
         // if mem alloc failed , call global new-handling function(if exist)

    Widget::set_new_handler(nullptr);  // set Widget 's new-handling func is NULL
    Widget* pw2 = new Widget;   //if mem alloc failed,  throw error
                    // there isnot class Widget  specific new-handling function.











    //using template NewHandlerSupport






    //some test
    Widget3* pww1 = new Widget3; // bad_alloc if error
    if ( pww1 ==nullptr) {}  // it must fall

    Widget3* pww2 = new (std::nothrow) Widget3;
    if ( pww2 == nullptr) {}// may success

    // new (std::nothrow) wiget3 
    //      1. call nothrow version of operator new, f error return nullptr
    return 0;
};