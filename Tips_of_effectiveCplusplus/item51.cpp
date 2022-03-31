

// operator new
// 1. return right value
//call new-handling function to cope with zerou-memory.
//3. avoid to cover raw new.



// request 0 bytes.


// pseudocode

#include <memory>
#include <new>

void* operator new(std::size_t size) noexcept(false)
{
    using namespace std;
    if (size ==0){
        size = 1;
    }
    while (true) {
        //try alloc size bytes
        if(success)
            return (pointer)

        //bad alloc
        //call new-handling
        new_handler globalHandler = set_new_handler(0);
        set_new_handler(globalHandler);

        if(globalHandler)  (*globalHandler) ();
        else throw std::bad_alloc();

    }
}


class Base {
    public:
    static void* operator new(std::size_t size) noexcept(false);

    static void operator delete(void* rawMemory, std::size_t size) noexcept;
};
//operator new[]     (array new) 


void* Base::operator new(std::size_t size) noexcept(false)
{
    if( size != sizeof(Base)) // if bytes error 
        return ::operator new(size); // use operator new
    // do normal here
}

class Derived: public Base  // suppose that derived un declare operator new
{
        

};

// operator delete

void operator delete(void* rawMemory) noexcept
{
    if( rawMemory ==0) return;    // if will delete null pointer , do nothing
    // get back *rawMemory 's memory
}

void Base::operator delete(void* rawMemory, std::size_t size) noexcept
{
    if( rawMemory ==0) return ; //check null pointer

    if(size != sizeof(Base)){
        ::operator delete(rawMemory);  // if size error ,call global operator delete
        return;
    }

    //get back *rawMemory 's memory 
    return;

}

Derived* p = new Derived ; // here call Base:: operator new


