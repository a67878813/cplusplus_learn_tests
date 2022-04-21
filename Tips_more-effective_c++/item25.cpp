
// virualize "constructor "  && "non-member functions"
#include <iostream>
#include <list>
#include <ostream>

// abstract base class .
class NLComponent{
    public:
    virtual void at_least_pure_virtual_func() = 0;
};

// has no pure vitual f
class TextBlock: public NLComponent {
public:
};

class Graphic: public NLComponent{
public:
};




/* 
virtual constructor --
    is a function that generate different types objects based on inputs

virtual copyconstructor -- 
    return a pointer, points to copy of a objets.

*/

class NLComponent2{
    public:
    // NLComponent2(NLComponent2&);
    //virtual copy constructor
    virtual NLComponent2* clone() const =0;
    
    virtual std::ostream& print(std::ostream& s ) const = 0;
};

class TextBlock2: public NLComponent2{
    public:
    //virtual copy constrctor
    virtual TextBlock2 * clone() const override 
    {return new TextBlock2(*this);  }// call copy c'tor
    virtual std::ostream& print(std::ostream& s ) const override ;
};

class Graphic2: public NLComponent2{
    public: 
    //virtual copy constructor
    virtual Graphic2* clone() const override
    {return new Graphic2(*this);}
    virtual std::ostream& print(std::ostream& s) const override; 
};

// non-member functions call virtual function.
inline
std::ostream& operator<< ( std::ostream& s , const NLComponent2& c)
{
    return c.print(s);//call virtual function
}

// instant communication , constructed by series NLComponent
class NewsLetter{
public:
    NewsLetter( std::istream& str );
    NewsLetter(const NewsLetter& rhs);
private:
    std::list<NLComponent2*> components;
    //read next NLComponent's data from str
    //and return pointer to it
    static NLComponent2* readComponent(std::istream& str);
};

NewsLetter::NewsLetter(std::istream & str)
{
    while(str){
        // read the next component object from std;
        // add the object to the list of this newletter's components;
        components.push_back(readComponent(str));
        // add pointer from  readComponent to end of list.
    }
}

NewsLetter::NewsLetter(const NewsLetter& rhs)
{
    //
    for(auto it: rhs.components){
        //self.components
        components.push_back(it->clone());
    }

}




