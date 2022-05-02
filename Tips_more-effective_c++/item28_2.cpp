#include <iostream>

class CD{
public:
    CD(std::string);
};

void test(){
    CD goodCD("Flood");

    const CD *p; // p is non-const pointer ; points to const CD obj.
    
    CD * const p2 = &goodCD; // p2 is const pointer, points t oCD obj;
                                // const pointer must has a init value

    const CD * const p3 = &goodCD; // const pointer ,const CD obj;



    SmartPtr<const CD> pp = &goodCD; //non-const sptr; const obj
    
    SmartPtr<CD> pp2; //nonconst obj,pointer

    const SmartPtr<CD> p =&goodCD; // const pointer; non-const obj

    const SmartPtr<const CD> p = &goodCD; // const obj, const pointer
}




