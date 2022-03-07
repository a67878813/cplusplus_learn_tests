#include <iostream>
#include <memory>


class Investment{
public:
    bool isTaxFree() const;

};

//factory function
Investment* createInvestment();// return pointer to Ivestment iheretance system's inner dynimic object.
                // It is user's responsibility to delete it.


std::shared_ptr<Investment>    pi1(createInvestment() );

bool taxable1 = !(pi1->isTaxFree() );  // access resources via ->





std::auto_ptr<Investment> pi2(createInvestment() );
bool taxable2 = !(   (*pi2).isTaxFree() );//using it via operator*




//when using
int days = daysHeld(  pi1.get())//.get return stored pointer );

//=====================
class FontHandle{};

FontHandle getFont();  //C API

void releaseFont(FontHandle fh);    //C API
// void changeFontSize(FontHandle fh , int size);
class Font{
public:
    explicit Font(FontHandle fh) //pass by value,   cause of C API
    : f(fh)
    {}
    ~Font(){releaseFont(f);}  //release resources

    [[nodiscard]] FontHandle get() const { return f;}// explicit conversion function.
    operator FontHandle() const  // implicit conversion
    // operator <typename>()   // implicit conversion grammar
    { return f;}
private:
    FontHandle f;   // raw resource
};


//when using

int main(){


void changeFontSize(FontHandle f, int newSize);  //C API
Font f(getFont());
int newFontSize;


changeFontSize(  f.get(),newFontSize);  //explicit conversion

changeFontSize(f, newFontSize);   //implicit conversion
//Its  makes some error
//============
Font f1(getFont() );
FontHandle f2 = f1;  // user's original intention is copy Font obj,
                // acctually , first,f1  was implicit consersed to FontHandle,
                //          then copy  to f2
                //when f1 is distroied, f2 is dangle.
Font f3 = f1;

}