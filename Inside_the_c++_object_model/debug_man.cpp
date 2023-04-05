#include <iostream>

struct Point{
    int x=  0;
    int y = 0;

};

Point pt;
Point* pPt = &pt;
const Point* cpPt = &pt;
Point& lrPt = pt;
Point&& rrPt = {};


//lv expr
using T1 = decltype((pt)); // Point&
using T2 = decltype((pPt)); // Point*  &
using T4 = decltype(cpPt);//const Point *  &
using T5 = decltype((lrPt));//Point&
using T6 = decltype(rrPt);
using  T7 = decltype((rrPt));
template<typename,typename...> struct [[deprecated]]  dump;


/* 

gcc /clang   _PRETTY_FUNCTION_

MSVC   _FUNCSIG_

*/

template<typename...Ts> void dump2()
{std::cout<< __PRETTY_FUNCTION__ <<std::endl;}

int main(int argc, const char** argv) {

    // dump<T7,T6>{};
    dump2<T1,T2,T6>();

    return 0;
}

