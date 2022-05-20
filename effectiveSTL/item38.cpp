#include <deque>
using std::deque;

template<class InputIterator,
        class  Function>
Function  // return-by-value
for_each1(InputIterator first, 
        InputIterator last,
        Function f); // pass-by-value



//explicit

class DoSomething
    // : public unary_function<int, void> {
{        
public:
    void operator() (int x) {}



};

using DequeIntIter = deque<int>::iterator;
//test
void test1 () {
    deque<int> di;

    DoSomething d;// create function obj
    //explicitly pass-by-reference
    for_each1<DequeIntIter,
            DoSomething&> (di.begin(), di.end(), d);
};

//expanded as
DoSomething&  // return-by-value
for_each1(DequeIntIter first, 
        DequeIntIter last,
        DoSomething& f); // pass-by-value

//=========
// big polymorphic functor class
//=========

class Widget{};

// template<typename T>
// class BPFC// Big Polymorphic Fuctor class
// {
// public:
//     virtual void operator () (const T& val) const;
// private:
//     Widget w;
//     int x;
// };




