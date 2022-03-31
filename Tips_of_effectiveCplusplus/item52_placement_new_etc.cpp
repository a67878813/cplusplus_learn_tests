

// Write placement delte if you write placement new.

//placement new 
// placement delete
#include <new>
#include <iostream>

class Widget{};

Widget* pw = new Widget;  // 1. operator new
                        // 2. Widget default c'tor



class Widget2 {
    public:
    //placement version
    static void* operator new(std::size_t size, std::ostream& logStream) noexcept(false);   // unnormal new

    static void* operator new( std::size_t, void* pMemory) noexcept;

    static void operator delete(void* pMemory ,std::size_t size) noexcept; //nomal delete

    static void operator delete(void*, std::ostream&) noexcept;
};



int test(){

Widget2* pw = new (std::cerr) Widget2; //trans cerr,
                                    //here will leak memory when ~Widget2() throw error.



};
