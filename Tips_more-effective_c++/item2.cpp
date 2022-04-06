

//static_cast 
//const_cast
//dynamic_cast
//reinterpret_cast

//  (type) expression

//static_cast<type>(expression)

void fff(){
    int first, second;
    double result = ((double)first) / second;

    double result2 = static_cast<double>(first)/second;
}

class Widget{
    public:
    virtual ~Widget()= default;
};
class SpecialWidget: public Widget{};
void update(SpecialWidget *psw);


void tte(){
SpecialWidget sw;  // sw is non-const

const SpecialWidget& csw = sw;  // csw is reference of sw , and is const



update(&csw); 
update(const_cast<SpecialWidget*>(&csw)); // remove &csw 's constness


// old c cast
update( (SpecialWidget*)&csw);

Widget* pw = new SpecialWidget;
update(pw);
update(static_cast<SpecialWidget*>(pw)); 





};


void updateViaRef(SpecialWidget& rsw);

void ttt2(){
    Widget* pw;
    update(dynamic_cast<SpecialWidget*>(pw));

    updateViaRef(dynamic_cast<SpecialWidget&> (*pw));
};


void ttt3(){
    typedef void (*FuncPtr)();
    FuncPtr funcPtrArray[10];

    int doSomething();

    funcPtrArray[0] = &doSomething;//  incompatible function pointer    // int (*)()    // void (*)()

    funcPtrArray[0] =
        reinterpret_cast<FuncPtr>(&doSomething);// force to compile.

    


};