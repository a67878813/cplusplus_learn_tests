// cast undermine c++ 's type system.

#include <iostream>
#include <memory>
#include <vector>
#include <iterator>


class Window{
public:
    virtual ~Window() = default; //the easiest way of makeing the hierarchy polymorphic is to 
            //ake the destructor of the base calss  VIRTUAL
};
class SpecialWindow: public Window{
public:
    void blink();
};



class Window2{
public:
    virtual void blink(){}

};

class SpecialWindow2:public Window2{
public:
    void blink() override {};//override incase of undefined in base class
};







int main(){


// do not do this

typedef
std::vector< std::shared_ptr<Window> > VPW;    
//base class pointer 's vector_container



VPW winPtrs;
for(VPW::iterator iter = winPtrs.begin();
    iter != winPtrs.end(); 
    ++iter)
    {
    
    if( SpecialWindow*  psw = dynamic_cast<SpecialWindow*>(iter->get() ) )  
                                                        // shared_ptr::get  return the stored pointer
                                                        // is  shared_ptr<Windos>
                                                        // aka Window*   (base class's pointer)
        
        psw->blink();
        
    };
//=============================================

//here is better
typedef std::vector<std::shared_ptr<SpecialWindow> > VPSW;
VPSW winPtrs2;
for(VPSW::iterator iter = winPtrs2.begin();
    iter != winPtrs2.end();
    ++iter){
        (*iter)->blink();
        // *iter     is  shared_ptr<SpecialWindow>'s 
                        //SpecialWindow* 
        //call SpecialWindow->blink()
    }

//这种做法使无法在同一个容器内存储指针"指向所有可能的而各种Window派生类“
//如果要处理多种窗口类型，可能需要多个容器，他们都必须具备类型安全性


//1
typedef std::vector<std::shared_ptr<Window2> > VPW2;
VPW2 winPtrs3;
for( VPW2::iterator iter = winPtrs3.begin();
    iter!= winPtrs3.end();
    ++iter)
    (*iter)->blink();   //there is no dynamic_cast





};


/* 
    //c++_stype casts
    const_cast<T>(expression2(5));  // cast away the constness


    dynamic_cast<T>(expression); // safe downcasting


    reinterpret_cast<T>(expression);   // low level cast


    static_cast<T>(expression); // implicit conversions */