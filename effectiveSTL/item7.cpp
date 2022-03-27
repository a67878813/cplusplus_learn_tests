
#include <vector>
#include <iostream>
#include <memory>
using namespace std;

class Widget{};







template<typename T>
struct DeleteObject: public unary_function<const T*, void>{
    void operator()(const T* ptr) const{
    delete ptr;
    }
};


struct DeleteObject1{
    template<typename T>
    void operator()(const T* ptr) const {
        delete ptr;
    }
};


void doSomething(){
    vector<Widget*> vwp;
    for (int i=0; i< 100; ++i)
        {
            vwp.push_back(new Widget);
        };
    



    // for( vector<Widget*>::iterator i = vwp.begin(); i!= vwp.end(); ++i)
    //     {delete *i;}
    for_each(vwp.begin(), vwp.end(), DeleteObject<Widget>() );
};



#include <deque>
class SpecialString: public string{};


void doSomething1(){
    deque<SpecialString*> dssp;


    for_each(dssp.begin(),dssp.end(),
            DeleteObject<string>());    //wrong , delete direved class obj, via base class pointer
    for_each(dssp.begin(),dssp.end(),
            DeleteObject<SpecialString>());   
    for_each(dssp.begin(), dssp.end(),
        DeleteObject1());
};


void doSomething2(){
    using SPW = shared_ptr<Widget>;
    vector<SPW> vwp;

    for (int i = 0; i< 100; ++i)
        vwp.push_back(SPW(new Widget));// shared_ptr will not leak memory
};





int main(){



    doSomething();
    


    return 0;
};