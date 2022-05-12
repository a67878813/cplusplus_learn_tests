
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
//using stl judge
//=================

//lexicographical_comapre
bool ciCharLess(char c1, char c2)
{
    tolower(static_cast<unsigned char>(c1));
    tolower(static_cast<unsigned char>(c2));
}

bool ciStringCompare2(const string& s1, const string &s2)
{
    return std::lexicographical_compare(s1.begin(), s1.end(), s2.begin(), s2.end(),
                                        ciCharLess);
}

