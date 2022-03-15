

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
    int healthValue() const 
    {return healthFunc(*this);}

private:
    HealthCalcFunc healthFunc;
};



//============
