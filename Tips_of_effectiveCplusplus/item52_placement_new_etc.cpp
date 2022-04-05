

// Write placement delte if you write placement new.

//placement new 
// placement delete
#include <cstddef>
#include <new>
#include <iostream>
#include <utility>

class Widget{};

Widget* pw = new Widget;  // 1. operator new
                        // 2. Widget default c'tor



class Widget2 {
    public:
    //placement version
    static void* operator new(std::size_t size, std::ostream& logStream) noexcept(false);   // unnormal new
    
    static void operator delete(void* pMemory,  std::ostream& logStream) noexcept; // placement version's operator delete
    // 

    static void* operator new( std::size_t, void* pMemory) noexcept;
    static void operator delete(void* pMemory ,std::size_t size) noexcept; //nomal delete

};




int test(){

auto* pw = new (std::cerr) Widget2; //trans cerr,
                                    //here will leak memory when ~Widget2() throw error.

auto* pw2 = new(std::cerr) Widget2;  //
//call static void* operator new(std::size_t size, std::ostream& logStream) noexcept(false)
// if falled when c'tor,  it will automatically call 
                // static void operator delete(void* pMemory,  std::ostream& logStream) noexcept;
// there is no memory leak


delete pw2;  // call normal operator delete

};


class Base{
    public:
    static void* operator new(std::size_t size, std::ostream& logStream) noexcept(false); // mask normal global new
    
};


class Derived: public Base{
    public:
    static void* operator new(std::size_t size) noexcept(false);// redeclare normal new
    using Base::operator new;//
    

};

void test2(){
    Base* pb = new Base;// normal operator new was masked.
    Base * pb2 = new(std::cerr) Base; 

    Derived* pd = new (std::clog) Derived; // Base's placement new was maked
    Derived* pd2 = new Derived;



};

/* 
on default , C++ has new on global :



*/
void* operator new(std::size_t) noexcept(false); // normal new

void* operator new(std::size_t, void*) noexcept; //placement new

void* operator new(std::size_t, const std::nothrow_t&) noexcept;  // nothrow new

class StandardNewDeleteForms {
    public:
    // normal new/ delte
    static void* operator new(std::size_t size) noexcept(false)
    {return ::operator new(size);}

    static void operator delete(void* pMemory) noexcept
    {:: operator delete(pMemory);}

    //placement new/delete
    static void* operator new(std::size_t size, void* ptr) noexcept
    {return ::operator new(size, ptr);}

    static void operator delete(void* pMemory, void* ptr) noexcept
    {::operator delete(pMemory, ptr); }

    //nothrow new/delete
    static void* operator new(std::size_t size, const std::nothrow_t& nt) noexcept
    {return ::operator new(size, nt);}

    static void operator delete(void *pMemory, const std::nothrow_t&) noexcept
    {::operator delete(pMemory); }

};

class Widget3: public StandardNewDeleteForms{
    public:
    using StandardNewDeleteForms::operator new;
    using StandardNewDeleteForms::operator delete;

    static void* operator new(std::size_t size, std::ostream& logStream) noexcept(false); // add placement new

    static void operator delete(void* pMemory, std::ostream& logStream) noexcept; // add placement delete
    
};

void* 
Widget3::operator new(std::size_t size, std::ostream& logStream) noexcept(false)
{


}

void
Widget3::operator delete(void* pMemory, std::ostream& logStream) noexcept
{
    
}


/* 
Tips:
1. When writting placement operator new, make sure to write placement operator delete to avoid memory leak

2. pay attention to 



*/