// design non-leaf classes to abstract classes


class AbstractAnimal{
public:
    virtual ~AbstractAnimal() = 0;
protected:
    AbstractAnimal& operator=(const AbstractAnimal& rhs);

};

class Animal :public AbstractAnimal{
public:
    Animal& operator = (const Animal& rhs);

};
class Lizard:public AbstractAnimal{
public:
    Lizard& operator = (const Lizard& rhs);

};

class Chicken:public AbstractAnimal{
public:
    Chicken& operator = (const Chicken& rhs);
};



Lizard& Lizard::operator = (const Lizard& rhs)
{
    return operator=(dynamic_cast<const Lizard&>(rhs) );
};

void test(){
    Lizard liz1, liz2;
    Chicken chick;

    Lizard *pAnimal1 = &liz1;
    Lizard *pAnimal2 = &liz2;
    Lizard *pAnimal3 = &chick;

    *pAnimal1 = *pAnimal2;
}



//or make operator = is private: