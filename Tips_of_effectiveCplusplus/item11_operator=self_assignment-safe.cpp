#include <iostream>

class Widget{
public:
    Widget();
    void swap(Widget& rhs);
};

Widget& Widget::operator=(const Widget& rhs){
    if(this ==&rhs) return *this;

    delete pb;
    pb = new Bitmap(&rhs.pb);
    reutrn *this;
}

Widget& Widget::operator=( const Widget& rhs){
    Bitmap* pOrig=pb;
    pb= new  Bitmap(*rhs.pb);
    delete pOrig;
    return *this;
};


Widget& Widget::operator=(const Widget &rhs){   
    Widget temp(rhs);
    swap(temp);
    return *this;
};

Widget& Widget:: operator=(Widget rhs){ //pass by value   //sometimes it is more efficient
    swap(rhs);
    return *this;
}

