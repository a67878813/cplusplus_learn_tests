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

class Airport {
public:
    Airport();
};

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


//================================================

// cut interface and default implmantation 's connection
class Airplane2{
public:
    virtual void fly(const Airport& destination) =0 ;//pure virtual

protected:
    void defaultFly(const Airport& destination);//here must be non-virtuation.
                                            //cause there shouldn't be any redefining by derived class.
                                            //
                                            //if you make this func virual,
                                            //there should be consequences of fogotten redefining function at derived class.
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
    virtual void fly(const Airport& destination) override {} ;
};

//=======================================


//===========type 3==================


// cut interface and default implmantation 's connection
class Airplane3{
public:
    virtual void fly(const Airport& destination) =0 ;//pure virtual

protected:
    
};

void Airplane3::fly(const Airport& destination){
    //default implementation
    //合并fly和defaultFly，丧失了：让两个还能输享有不同保护级别, 的机会，习惯上被设为Protected的函数如今成了public
};

class ModelAAA: public Airplane3{
public:
    inline virtual  void fly(const Airport& destination)
    { Airplane3::fly(destination);}
};
class ModelBBB: public Airplane3{
public:
    inline virtual  void fly(const Airport& destination)
    { Airplane3::fly(destination);}
};
class ModelCCC: public Airplane3{
public:
    // inline virtual void fly(const Airport& destination){}
    virtual void fly(const Airport& destination) override {
        //合并fly和defaultFly，丧失了：让两个还能输享有不同保护级别的机会，习惯上被设为Protected的函数如今成了public
    } ;
};




int main(){
    Airport PDX=Airport();   // null param can not wrriten in    Airport PDX();
                                // it will be interapted as function PDX with Airport return typy.
    Airplane2* pa = new ModelCC;

    pa->fly(PDX); // call Airplane::fly

    return 0;
};