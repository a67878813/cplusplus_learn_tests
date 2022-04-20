// know the costes of 

    // virtual functions
    // multiple inheritance
    // virtual base classes
    // runtime type identification

    // 

#include <string>
class C1{
public:
    C1();
    virtual ~C1();
    virtual void f1();
    virtual int f2(char c) const;
    virtual void f3(const std::string& s);

    void f4() const;
};
/* 

C1 's vtbl
    C1:
        C1::~C1
        C1::f1
        C1::f2
        C1::f3

 */

class C2: public C1{
public:
    C2();
    virtual ~C2() override;
    virtual void f1() override;
    virtual void f5(char *str);

};
/* 
C2's vtbl
    C2::~C2
    C2::f1
    C1::f2
    C1::f3
    C2::f5



*/


void makeACall(C1 *pC1)
{
    pC1->f1();
    // 
    (*   pC1->vptr[i])  (pC1);
    // function(pC1)

    //  pC1 was trans to this function as "this pointer"



    // could be C1::f1 or C2::f1
}