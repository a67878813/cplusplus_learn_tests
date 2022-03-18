

class GameCharacter;
class HealthCalcFunc{
public:
    virtual int calc(const GameCharacter& gc) const 
    {}

};

HealthCalcFunc defaultHealthCalc;

class SlowHealthLoser : public HealthCalcFunc{
    virtual int calc(const GameCharacter& gc) const{}
};
SlowHealthLoser slowCalc;

class GameCharacter{
public:
    explicit GameCharacter(HealthCalcFunc* phcf = &defaultHealthCalc)
    : pHealthCalc(phcf)
    {}
    int healthValue() const 
    {return pHealthCalc->calc(*this);}
private:
HealthCalcFunc* pHealthCalc;
};


class EvilBadGuy: public GameCharacter{
public:
    explicit EvilBadGuy(HealthCalcFunc* phcf = &slowCalc    )
    :GameCharacter(phcf)
    {}
    
};



//Tips
// virtual functions's substitutes include:
//  1.NVI( non-virtual interface) strategy
//  2. trans to outer class funtion

//  3. tr1::function 

// 4. classic strategy .Two virtual class.