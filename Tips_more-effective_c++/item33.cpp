// design non-leaf classes to abstract classes


//RTTI   use dynamic cast

class Animal{
public:
protected:
    virtual Animal& operator = (const Animal& rhs);

};
class Lizard:public Animal{
    public:
    //only for dynamic cast
    virtual Lizard& operator = (const Animal& rhs);

    //for normal =
    Lizard& operator = (const Lizard& rhs);

};

//RTTI manner
Lizard& Lizard::operator = (const Animal& rhs)
{
    // const Lizard& rhs_liz = dynamic_cast<const Lizard&>(rhs);
    // if rhs is not a Lizard, broadcast exception of bad_cast


    // normal assignment of rhs_liz to*this;
    return operator=(dynamic_cast<const Lizard&>(rhs) );
};

// static 
Lizard& Lizard::operator = (const Animal& rhs)
{
    if(this== &rhs) return *this;

    Animal::operator=(rhs);

};


class Chicken:public Animal{
    public:
    virtual Chicken& operator = (const Animal& rhs);
};



void test(){
    Lizard liz1, liz2;
    Chicken chick;

    Animal *pAnimal1 = &liz1;
    Animal *pAnimal2 = &chick;

    *pAnimal1 = *pAnimal2;

}



//or make operator = is private: