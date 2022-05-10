

/* 
algorithum
sort

    partition
    stable_partation
    nth_element
    partial_sort
    sort
    stable_sort

 */
#include <algorithm>
#include <cstdio>
#include <fstream>
#include <functional>
#include <iterator>
#include <memory>
#include <utility>
#include <vector>
#include <string>
#include <iostream>
// #include <stdio.h>
#include <set>
#include <map>

#include <unordered_map>
#include <unordered_set>

#include <list>
#include <deque>


#include <chrono>

#include <memory>
//vector string auto manage memory
//              is STL sequtial container ,
//              could use Sequential algrithum

using std::vector;
using std::string;

using std::pair;

//RBtree
using std::set;
using std::multiset;
using std::map;
using std::multimap;

//hash
using std::unordered_map;
using std::unordered_set;


//list
using std::list;
using std::deque;

//=================
void print_v(vector<int> &v){
    for (auto &i: v){
        std::cout << i<< " ";
    }
    std::cout  << std::endl;
}

//algorithm
// template< class ForwardIt, class T >
// ForwardIt remove( ForwardIt first, ForwardIt last, const T& value );


class Widget{
public:
    bool isCertified() const;
    bool isnotCertified() const;
};

//test
void test1 (){
vector<Widget*> v;
v.push_back(new Widget);
//...

v.erase(remove_if   (v.begin(),v.end(),
                    not1(std::mem_fn(&Widget::isCertified))
                    ),
        v.end());
} 

void delAndNullifyUncertified(Widget* & pWidget)
{
    if( ! pWidget-> isCertified()) {
        delete pWidget;
        pWidget = nullptr;
    }
}

//test
void test2 () {
    vector<Widget*> v;
    v.push_back(new Widget);

    // all uncertified pointer = nullptr;
    for_each(v.begin(), v.end(), delAndNullifyUncertified );// 

    v.erase(remove(v.begin(), v.end(),
                nullptr) ,
            v.end());


};


//test
void test3 () {
    vector<std::shared_ptr<Widget> > v;
    v.push_back(std::shared_ptr<Widget>(new Widget)) ;


    v.erase( remove_if(v.begin(), v.end(),
                    // not1(std::mem_fn(&Widget::isCertified))
                    // std::not1 is removed in C++20;
                    // std::mem_fn(&Widget::isnotCertified)
                    std::not_fn(&Widget::isCertified) // c++17
                    ),
            v.end());
        
    


};


/* 

if container has dynamic pointer, do not use { remove, remove_if unique}

could use partition

*/
int main()
{
    test3();
  return 0;
}