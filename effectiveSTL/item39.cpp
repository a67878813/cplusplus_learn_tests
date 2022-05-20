#include <iostream>
#include <vector>
using std::vector;
//make predicate is pure function


//predicate :
    // a function return bool type

//pure function
// is a function which 's return value is only depend on params.
// pure function's accessable data are limited to param and const value.

//predicate class 
// is class funtor
// it's operator() fun is a predicate(return bool type)


// in STL , where receives predicate could get predicate class obj.


// func param is pass_by_value;
// so it shall be designed act right be copying.

//if violate it

class Widget{};


class BadPredicate
{
public:
    BadPredicate():timesCalled(0) {}
    bool operator() (const Widget&) const 
    {
        return ++timesCalled ==3;// when called +1 ,==3 return true;
    }
private:
    size_t timesCalled;

};

//clients code
void test1 () {
    vector<Widget> vw;

    // remove (move unwanted value to back)
    // erase (erase them back unwanted values.)
    vw.erase( remove_if(vw.begin(),
                            vw.end(),
                            BadPredicate()), //
                            //create a anonymous
                            // BadP.. obj
                            // it's timesCalled =0;
/* 





*/
                vw.end() );
};


template<typename FwdIterator, typename Prediate>
FwdIterator
remove_if2(FwdIterator begin, FwdIterator end, Prediate p)//make a p(0)
{
    begin = find_if(begin, end, p);//make a p(0) copy
    if( begin == end) return begin;

    else {
        FwdIterator next = begin;
        return remove_copy_if(++next, end, begin, p);//make a p(0) copy
    }
}


bool anotherBadPredicate(const Widget& ,const Widget&)
{
    static int timesCalled = 0;// pure funtion has no status.
    return ++timesCalled ==3;
}