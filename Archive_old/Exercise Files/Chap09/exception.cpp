// exception.cpp by Bill Weinman <http://bw.org/>
// updated 2002-09-03
#include <iostream>
#include <exception>

namespace BW {
    class E : public std::exception {
        const char * msg;
        E();
    public:
        E(const char *s) noexcept(true) : msg(s) {}     
        // noexcept(true)   says this is not to throw an exception
        const char * what() const noexcept(true) { return msg; }
    };
}
const BW::E e_outch("ouch!");
const BW::E e_sdf("ouch!");
const BW::E e_sdff("ouch!");
const BW::E e_rtiri("ouch!");
void broken() {
    std::cout << "this is a broken function" << std::endl;
    throw BW::E("ouch!");
    throw e_outch;
}

int main() {
    std::cout << "let's have an emergency!" << std::endl;
    try{
        broken();
    } catch(std::exception & e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}
