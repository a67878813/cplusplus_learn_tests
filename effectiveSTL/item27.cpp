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

//=================

using IntDeque = deque<int>;
using Iter = IntDeque::iterator;
using ConstIter = IntDeque::const_iterator;

//test
void test1 () {
ConstIter ci;
Iter i (ci); // no implicit convert from const to non-const

Iter i(const_cast<Iter>(ci)); // cannot const_iterator from const-iter
};
//test
void test2 () {
    IntDeque d;
    ConstIter ci;

    Iter i(d.begin()); // i ->> d begin

    // create new iter , + distance of i - c_iter
    advance( i, distance<ConstIter>(i, ci));
    // advance +
    // distance -
    // for {vector string deque} O(n)
    // for{hash ...} O(1)



};

// template<typename InputIterator>
// typename Iterator_traits<InputIterator>::difference_type
//     distance(InputIterator first, InputIterator last);

