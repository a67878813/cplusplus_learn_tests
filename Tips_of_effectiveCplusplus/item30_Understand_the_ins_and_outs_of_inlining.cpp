#include <string>


inline void f(){};

void (*pf)() =f;

class Base{
public:

private:
    std::string bm1, bm2;
};

class Derived: public Base{
public:
    Derived(){}//implicit inline
    /* 
    
    */
    inline int test(){};
private:
    std::string dm1,dm2,dm3;
};

int main(){
f(); //will be inlined
pf();//may not be inlined
};

//tips
//