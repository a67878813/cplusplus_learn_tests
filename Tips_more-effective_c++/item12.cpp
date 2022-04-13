

#include <iostream>
class Widget{};

void f1(Widget w);
void f2(Widget& w);
void f3(const Widget& w);
void f4(Widget *pw);
void f5(const Widget *pw);
void test(){
try{

}
catch (Widget w) {};
catch(Widget& w){};
catch(const Widget& w);
catch(Widget *pw);
catch(const Widget *pw)
}

std::istream operator>>(std::istream& s , Widget & w);

void passAndThrowWidget()
{
    static Widget localWidget;

    std::cin >> localWidget;  // localWidget    to  operator >>;

    throw localWidget; // thow localWidget to a exception
}

/* 
Tips:
    when there is an exception, there is a copy.

    exception is slower than trans parameter. 

    copy c'tor based on static type

*/

class SpecialWidget :public Widget {};

void passAndThrowWidget2()
{
    SpecialWidget localSpecialWidget;

    Widget& rw = localSpecialWidget; //rw is a SpecialWidget  (dynimic type)
    throw rw;  // throw a Widget type exception // (static type)
}


catch(Widget&w)
{
    throw; // rethrow this exception
}

catch (Widget& w)
{

    throw w;  // throw copy exception
}


catch(Widget w);
catch(Widget& w);
catch(const Widget& w);



