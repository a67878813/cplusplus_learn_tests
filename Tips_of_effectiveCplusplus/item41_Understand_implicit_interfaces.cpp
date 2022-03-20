
// Understand implicit interfaces and compile-time polymorphism


//      explicit interfaces 
//      runtime polymorphism 
#include <string>
class Widget{
public:
    Widget();
    virtual ~Widget();
    virtual std::size_t size() const;
    virtual void normalize();
    void swap(Widget& other);


};//explicit interface
    // runtime polymorphism

void doProcessing(Widget& w)
{
    if(w.size() >10 && w !=someNastyWidget) {
        Widget temp(w);
        temp.normalize();
        temp.swap(w);
    }
}




/* *
Template

implicit interfaces 
compile-time polymorphism



*/


template<typename T>
void doProcessing(T& w)  //implicit interface 
                            //base on valid expressions.
{
if(w.size() >10 && w!= someNastyWidget) {  //T must have
                        // member-function of named "size" .
                        // returning type X obj
                        // this obj + int have ability to call operator>,
                        //  plus that there is  a  implicit tranform could do it.

                        //operator != receive type X and type Y.
                        // T could be trans to type X, someNastyWidget could to type Y either.
                        // and that could call operator!=

                        // if operator&& was overloaded, above will be complitely different.

                        //if( )  must compatible with bool
    T temp(w);
    temp.normalize();
    temp.swap(w);   //copy i'tor , normalize,swap should avalible to T type.
}
}//T 's implicit interface


/* 
implicit interface to template parameter ,as reality as  explicit interface to class.
They are both checking on compile time.
*/



