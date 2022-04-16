
//an object distinction
/* 
paradigm
    A model or wxample of the environment and methodology
     in which systems and software are developed and operated.
    For one operational paradign there could be 
    several alternative development paradigms.
    Examples are functional programming,
    logic programming , semantic data modeling, 
    algebraic computing, numerical computing
    numerical computing ,object oriented design,
    prototyping, and natural language dialogue.



*/
// procedual model 

#include <cstring>
void test1(){
    char boy[] = "Danny";
    char * p_son;

    p_son = new char[std::strlen(boy)+1];
    std::strcpy(p_son, boy);

    if( !std::strcmp(p_son, boy))
        take_to_disneyland(boy);
};


// abstract data type model , ADT
#include <string>
void test2(){
    std::string girl = "aaaa";
    std::string daughter;
    // String::operator= ();
    daughter = girl;

    //String:operator== ()
    if(girl == daughter)
        take_to_disneyland(girl);

}
//object-oriented model
//
class Library_materials{
    public:
    void check_in(Library_materials* pmat);
    virtual ~Library_materials();
};

void Library_materials::check_in(Library_materials *pmat)
{
    if(pmat->late())
        pmat->fine();
    pmat->check_in();

    if(Lender *plend = pmat->reserved())
        pmat->notify(plend);

}

//
Library_materials thing1;
// to polymorphism
class Book: public Library_materials{};

Book book;

thing1 = book; // change thing1 dynimic type to Book 

thing1.check_in(); // call static type's check_in()
            //which is Library_materials :: check_in()


// thing2
Library_materials& thing2 = book;

// & type use dynimic type

//call Book::check_in()
thing2.check_in();


//throw pointer || reference , pepple could use OO programe's polymorphism.


class Librar_materials {};
// depict objects : unsure type
Librar_materials * px = retrivesome();
Librar_materials &rx = *px;
// unsure px && rx 's type



// depict known things
Librar_materials dx = *px;
// we could sure that , dx could only be Librar_materials's obj.


