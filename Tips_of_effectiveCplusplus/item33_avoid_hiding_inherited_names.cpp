//name-hiding rules

class Base{
private:
    int x;
public:
    virtual void mf1() = 0;
    virtual void mf1(int);
    virtual void mf2();
    void mf3();
    void mf3(double);

};


class Derived: public Base {
public:
    using Base::mf1;
    using Base::mf3;   // make Base :: mf1 public
    void mf1() override;
    void mf3();
    void mf4() ;
};

//forwarding function
class Derived2: private Base{
public:
    virtual void mf1()   // forwarding function
    { Base::mf1();}    //implicit inline
    //here compiler can not see 
    // virtual void mf1(int)
};



int main(){
Derived d;
int x;

d.mf1();  //derived::mf1
d.mf1(x); //Base::mf1
d.mf2(); //Basse::mf2
d.mf3(); //Derived::mf3
d.mf3(x);// Base::mf3




Derived2 d2;
int x2;
d2.mf1(); // call Derived::mf1
d2.mf1(x2);   // Base:: mf1 () is masked.


    return 0;
};


//Tips


//1. public inheretance means is-a relation.
//2. one is not willing to see that derived classes' name masked those in base classes.
//3. one could do 
    // using 
    //or 
    // forwarding functions.