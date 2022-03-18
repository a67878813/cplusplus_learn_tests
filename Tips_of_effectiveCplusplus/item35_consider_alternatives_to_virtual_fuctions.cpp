

class GameCharacter{
public:
    virtual int healthValue() const;

};


//other design types

//Non-Virtual interface
        //Template Method


//indirect call private virtual-function through public non-virtual member-function
class GameCharacter2{
public:
    //NVI methord (non-virtual interface)
    int healthValue() const{ //virtual function's wrapper
        // do some pre works
        //  may contains locking a mutex, making log entry 
        // verifying class's constrains etc.
        int retVal = doHealthValue(); // do some true works
        // so some post works.
        //  may contains unlocking a mutex, verify post constrains etc.
        
        return retVal;
    }
private:
    //allows derived classes redefine virtual-function, to give control ability of how to accomplish func.
    //this funcstion could be public or protected
    virtual int doHealthValue() const { 
        //default algrithum.
    };
};

//use Function Pointers to Strategy model
class GameCharacter3; //forward declaration

int defaultHealthCalc(const GameCharacter3& gc);

class GameCharacter3{
public:
    typedef int (*HealthCalcFunc)(const GameCharacter3&);

    explicit GameCharacter3(HealthCalcFunc hcf = defaultHealthCalc)
    : healthFunc(hcf)
    {}
    int healthValue() const {
        return healthFunc(*this);}
    int setHealthCalculator(HealthCalcFunc hcf){return 0;}


private:
    HealthCalcFunc healthFunc;
    friend int loseHealthQuickly(const GameCharacter3&);//when it need this class's non-public parts.
    friend int loseHealthSlowly(const GameCharacter3&);
};



//============
//derived class of GameCharacter3
class EvilBadGuy: public GameCharacter3{
public:
    explicit EvilBadGuy(HealthCalcFunc hcf = defaultHealthCalc)
    : GameCharacter3(hcf)
    {}
};
int loseHealthQuickly(const GameCharacter3&);
int loseHealthSlowly(const GameCharacter3&);



#include<tr1/functional>
//==================================

// tr1::function
class GameCharacter4;
int defaultHealthCalc4(const GameCharacter4& gc);
class GameCharacter4{
public:
    //HealthCalcFunc could be any callable entity,
    //return any type competible with int
    typedef std::tr1::function
        <int (const GameCharacter4&) >  HealthCalcFunc4;
    // tr1::function's instantiations 's target signature
    //this target signature means:
            // receive a reference pointed to GameCharacter4, return int.
        //                                           here  is typedef 
                                                    //like normol func-pointer
    // and this Type 's obj can hold any compatible callable entity.
    // Compatible means that callable entity's paragram could be implicitly transform to const GameCharacter4&,
    // and its returning type could be transformd either.
    explicit GameCharacter4(HealthCalcFunc4 hcf = defaultHealthCalc4)
    : healthFunc(hcf){}

    int set_healthFunc(HealthCalcFunc4 hcf){
        healthFunc = hcf;
        return 0;
    }

    int healthValue()  const {return healthFunc( *this);}


private:
    HealthCalcFunc4 healthFunc;
};

class EvilBadGuy4: public GameCharacter4{
public:
    explicit EvilBadGuy4(HealthCalcFunc4 hcf = defaultHealthCalc4    )
    : GameCharacter4(hcf)
    {}

};



short calcHealth(const GameCharacter4&);  // non-int returning type

//fun_obj designed for calculate health
struct HealthCalculator_4{
    int operator()(const GameCharacter4&) const
    {return 0;}
};


class GameLevel{
public:
    float health(const GameCharacter&) const;// mem func for calcu health

};



class EyeCandyCharacter: public GameCharacter4{
public:
    explicit EyeCandyCharacter(HealthCalcFunc4 hcf = defaultHealthCalc4    )
    : GameCharacter4(hcf)
    {}
};
















int main(){


EvilBadGuy ebg1(loseHealthQuickly);
EvilBadGuy ebg2(loseHealthSlowly);//1.  differect instance could have others calculate func.
ebg1.setHealthCalculator(loseHealthSlowly);
//2. it can be changed during running.

//this methord could deficit class's encapsulation.

GameCharacter4 cc_4;




EvilBadGuy4 ebg3_1(calcHealth); // character1, use func 
EyeCandyCharacter ecc1 ((HealthCalculator_4())); 
EvilBadGuy4 ebg2_0(
    std::tr1::bind(&GameLevel::health,
                currentLevel,
                _1)
);


return 0;

};