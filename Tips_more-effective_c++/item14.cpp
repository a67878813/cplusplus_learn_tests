//  exception specifications



#include <exception>
extern void f1(); // there is no exception specification
                // could throw anything

void f2() noexcept(false);



typedef void (*CallBackPtr)( int eventX,int eventY, void* dataToPassBack) noexcept;
using CallBackPtr2 = void (*)(int, int, void *) noexcept; //here func-type restrict exception;

class CallBack{
public:
CallBack(CallBackPtr2 fPtr, void* dataToPassBack)
: func(fPtr), data(dataToPassBack){}

void makeCallBack(int eventX, int eventY) noexcept  ;


private:
CallBackPtr func;
void* data;
};

void CallBack::makeCallBack(int eventX, int eventY) noexcept
{
    func(eventX, eventY,data);
};



void test(){

void callBackFcn1( int,int , void*) ;
void callBackFcn2(int , int, void*) noexcept;
void *callBackData;

CallBack c1(callBackFcn1, callBackData);//Fcn1 has no noexcept, restric regulation of 
//compiler will check exception restriction.

CallBack c2(callBackFcn2, callBackData);

}


//replace default unexpected exceptions

class UnexpectedException{};

void converUnexpected(){
    throw UnexpectedException();
}

// std::set_unexpected(convertUnexpected);

// std::unexpected();


