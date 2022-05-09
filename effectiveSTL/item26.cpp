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
// #include <stdio.h>
#include <set>
#include <map>

#include <unordered_map>
#include <unordered_set>

#include <list>
#include <deque>


#include <chrono>

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



//=========
//iterator
//=========


// iterator;



//const_iterator

//reverse_iterator
//const_reverse_iterator

iterator insert(iterator position, const T& x);
iterator erase(iterator position);
iterator erase(iterator rangebegin, iterator rangeEnd);








void test2() {
using IntDeque = deque<int>;
using Iter = IntDeque::iterator;
using ConstIter = IntDeque::const_iterator;

Iter i;
ConstIter ci;

if (i== ci){ //compare iter & const_iter

}

if (ci== i){ //compare iter & const_iter

}

if(i - ci >=3){} 

if(static_cast<ConstIter>(i) - ci >=3) {}



}
















