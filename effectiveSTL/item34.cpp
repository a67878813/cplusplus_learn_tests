/* 
require ordered range 's algorithm

binary_search
lower_bound
upper_bound
equal_range

set_union
set_intersection
set_difference
set_symmetric_difference

merge
inplace_merge

includes

unique
unique_copy



*/

/*    O(N)  need ordered range.
set_union
set_intersection
set_difference
set_symmetric_difference

*/

/*  O(logN) needs random iterator
binary_search
lower_bound
upper_bound
equal_range
//using (!< && !>)


O(N) (ordered range)
merge
inplace_merge


includes (ordered)


(ordered && unordered) behavier like remove( not real remove)
unique
unique_copy
// using operator = 

 */



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

//test
void test1 () {
    vector<int> v;
    //...
    sort(v.begin(), v.end(), std::greater<int>());

    bool a5Exists_wrong = 
        // wrong result !!
        binary_search(v.begin(), v.end(),5);// supposed less order.(operator <)
        // (is inconformity with v's order which is greater<int> )
    
    bool a5Exists = 
        binary_search(v.begin(), v.end(), 5, std::greater<int>());
    
};
