// cast undermine c++ 's type system.

#include <iostream>
//c fashion cast
typedef    int32_t  T;




const int64_t  expression2  () const {
    
    return 5;
};

int64_t expression;



class Widget{
    public:
    explicit Widget(int size);
};

void doSomeWork(const Widget&w);



class Window{
public:
    virtual void onResize();
};

class SpecialWindow: public Window{
public:
    virtual void onResize(){
        //static_cast<Window>(*this).onResize();//wronw , static_cast creat a copy of *this.
        Window::onResize();
    };
};








int main(){

    // int expression;

    (T)expression;
    T(expression);//?






    //c++_stype casts
    const_cast<T>(expression2(5));  // cast away the constness


    dynamic_cast<T>(expression); // safe downcasting


    reinterpret_cast<T>(expression);   // low level cast


    static_cast<T>(expression); // implicit conversions

doSomeWork(Widget(15));
doSomeWork(static_cast<Widget>(15) );

};