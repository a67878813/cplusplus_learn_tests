// vector string

//C array should be relpaced with vector or string 
#include <algorithm>
#include <functional>
#include <iterator>
#include <memory>
#include <utility>
#include <vector>
#include <string>
#include <iostream>

#include <set>
#include <map>



#include <chrono>

//vector string auto manage memory
//              is STL sequtial container ,
//              could use Sequential algrithum

using std::vector;
using std::string;
using std::set;
using std::multiset;
using std::map;
using std::multimap;
using std::pair;


class Widget{
public:
    Widget();
    Widget(double weight);
    Widget& operator=(double weight);

};

void test(){
    map<int, Widget> m;
    using M_vtype = map<int, Widget>::value_type;
    // add new , insert is efficient
    m.insert(M_vtype(1,1.5));
    m.insert(M_vtype(2,1.5));
    m.insert(M_vtype(3,1.5));
    m.insert(M_vtype(4,1.5));
    m.insert(M_vtype(5,1.5));

    // change value, operator[] has efficience
    m[1] = 1.60;//m.operator[](1)
    m[2] = 2.70;
    m[3] = 3.80;
    m[4] = 4.90;
    m[5] = 5.90;

                                //pait<int,Widget>
    m.insert(map<int, Widget>::value_type(1, 1.50 ))  ;
        /* when call inser
            1 pair ctor and dtor
            1 Widget ctor and dtor
         */
    m[7] = 1.1;
        /* 
        when call oeprator []
            there is no ctor && dtor 
         */
    map<int, Widget>::mapped_type(1,1.5);
};

//for map<Kv V> m;

// m[k] = v;
/* 
means checking if k in map, else add (k ,v) in map




    m[1] = 1.50;//m.operator[](1)


    ===


    using IntWidgetMap = map<int ,Widget>;

    pair<IntWidgetMap::iterator , bool> result =
        m.insert(IntWidgetMap::value_type(i,Widget()  ));

    result.first->second = 1.50;


    //==========================
    //============should change to .insert

    m.insert(IntWidgetMap::value_type(1, 1.50 ))  ;


*/




template <typename MapType,
        typename KeyArgType,
        typename ValueArgType>

typename MapType::iterator
    efficientAddOrUpdate(MapType& m,
                        const KeyArgType& k ,// MapType::keyType
                        const ValueArgType& v) // MapType::mapped_type // may cause  unnecessary
{
    typename MapType::iterator lb =
        // (! <)  && (! >)    means equivalence
        m.lower_bound(k);// find ! <
    if (lb != m.end() &&
        !(m.key_comp()(k, lb->first) )) { // && ! >
            lb->second = v; // key in map
            return lb;
        }
    else{
        //key not in map
        using MVT = typename MapType::value_type;
        return m.insert(lb,  MVT(k,v));
    }
};

void test3(){
auto affectedPair = efficientAddOrUpdate(m,k,v);
Widget::value_type(10,1.5)



}


