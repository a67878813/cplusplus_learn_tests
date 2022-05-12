
#include <algorithm>
#include <cctype>
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

// mismatch   lexicographical_compare 
// to compare string wiout capital

int ciCharCompare( char c1, char c2)
{
    int lc1 = tolower(static_cast<unsigned char>(c1));
    int lc2 = tolower(static_cast<unsigned char>(c2));

    if (lc1 < lc2) return -1;
    if (lc1 >lc2) return 1;
    return 0;
} 


int ciStringCompareImpl(const string &s1,
                        const string &s2);

int ciStringCompare(const string& s1, const string& s2){
    if (s1.size() <= s2.size()) return ciStringCompareImpl(s1,s2);
    else return -ciStringCompareImpl(s2,s1);
}
int ciStringCompareImpl(const string &s1,
                        const string &s2)
{
    using PSCI = pair<string::const_iterator, string::const_iterator>;

    PSCI p = mismatch(
            s1.begin(), s1.end(),
            s2.begin(),
            std::not_fn(ciCharCompare)
            //> c++ 17
    );

    if( p.first ==s1.end()) {
        if(p.second ==s2.end()) return 0;
        else return -1;
    }
    return ciCharCompare( *p.first, *p.second);
}
//=============
//copy if
//=================

/* 
copy copy_backward
replace_copy
reverse_copy
replace_copy_if
unique_copy
remove_copy
rotate_copy
remove_copy_if
partial_sort_copy
uninitialized_copy





*/

class Widget{};

//judge func // predicate
bool isDefective(const Widget& w);

//test
void test1 () {
    vector<Widget> widgets;

    copy_if(widgets.begin(), widgets.end(),
            std::ostream_iterator<Widget>(std::cerr, "\n"),
            isDefective);
};

/* 
//   std::copy, std::copy_if
Copies the elements in the range, defined by [first, last), to another range beginning at d_first.

1) Copies all elements in the range [first, last) starting from first and proceeding to last - 1. The behavior is undefined if d_first is within the range [first, last). In this case, std::copy_backward may be used instead.
3) Only copies the elements for which the predicate pred returns true. The relative order of the elements that are copied is preserved. The behavior is undefined if the source and the destination ranges overlap.

*/

//some wrong implelement
template<typename InputIterator,
    typename OutputIterator,
    typename Predicate>
OutputIterator copy_if2( InputIterator begin,
                        InputIterator end,
                        OutputIterator destBegin,
                        Predicate p)
{
// return remove_copy_if(begin, end, destBegin, std::not_fn(p) );
}

template<typename InputIterator,
    typename OutputIterator,
    typename Predicate>
OutputIterator copy_if3( InputIterator begin,
                        InputIterator end,
                        OutputIterator destBegin,
                        Predicate p)
{
while( begin != end) {
    if( p(*begin))  {
        *destBegin++ = *begin;
        ++begin;
    }
    return destBegin;
}
}



