// differentiate  between

//inheritance of interface 
//and
// inheritance of implementation.

#include <string>


/* 
public inheritance is made up of :
    1. function interfaces's inheritance
    2. fucntion implementations' inheritance.

*/

class Airport {};

class Airplane{
public:
    virtual void fly(const Airport& destination);
};

void Airplane::fly(const Airport& destination){
    //default ,to destination
};

class ModelA: public Airplane{};
class ModelB: public Airplane{};

class ModelC: public Airplane{

};

// cut interface and default implmantation 's connection
class Airplane2{
public:
    virtual void fly(const Airport& destination) =0 ;//pure virtual

protected:
    void defaultFly(const Airport& destination);

};

void Airplane2::defaultFly(const Airport& destination){
    //default implementation
};

class ModelAA: public Airplane2{
public:
    inline virtual  void fly(const Airport& destination)
    { defaultFly(destination);}
};
class ModelBB: public Airplane2{
public:
    inline virtual  void fly(const Airport& destination)
    { defaultFly(destination);}
};
class ModelCC: public Airplane2{
public:
    // inline virtual void fly(const Airport& destination){}
};



int main(){
    Airport PDX();
    Airplane* pa = new ModelC;

    pa->fly(PDX); // call Airplane::fly

    return 0;
};