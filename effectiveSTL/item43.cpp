#include <algorithm>

#include <functional>

#include <list>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <deque>

using std::deque;

using std::multiset;
using std::vector;

using std::list;
using std::cout;


class Widget{
public:
void redraw() const;
};

//test
void test1 () {
    list<Widget> lw;

    //redraw all
    for(auto i = lw.begin(); i!=lw.end(); ++i){
        i->redraw();
    }

    //range_based for
    for(auto & i : lw){
        i.redraw();
    }

    // or use for_each
    for_each(lw.begin(),lw.end(), 
                std::mem_fn(&Widget::redraw));



};

// std::bind2nd(const _Operation &__fn, const _Tp &__xnd)
// std::bind(, _BoundArgs &&__args...)


//test
void test2 () {
    deque<double>d;
    double data[10];

    auto insertLocation = d.begin();
    for(size_t i = 0;i <10;++i){
        insertLocation = d.insert(insertLocation, data[i] +41);
        ++insertLocation;

    }

    transform(data, data +10,
                inserter(d, d.begin()),
                [&](double a ){return a+41;}
                
                );
};


//test
void test3 () {
    vector<int> v;
    int x,y;

    auto i =  v.begin();
    for(;i !=v.end(); ++i){
        if( *i >x && *i <y) break;
    }
    if( i != v.end()){
// find i
    }


    auto i2 = 
        find_if(v.begin(), v.end(),
                [&](int a ){return a>x && a<y;}  );
    // logical_and
    // greater<int>
    // less<int>

};

template<typename T>
class BetweenValues
{
    public:
    BetweenValues(const T& lowValue, const T& highValue)
    :lowVal(lowValue), highVal(highValue)
    {}
    bool operator() (const T&val) const 
    {
        return val> lowVal && val <highVal;
    }

private:
    T lowVal;
    T highVal;
};

//test
void test4 () {
    vector<int> v;
    int x,y;
    auto i3 = find_if(v.begin(), v.end(),
                    BetweenValues<int>(x,y));
};



