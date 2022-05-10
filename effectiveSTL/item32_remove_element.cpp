

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


//test
void test1 () {
    vector<int> v;
    v.reserve(10);
    for(int i = 1 ; i<= 10; ++i){
        v.push_back(i);
    }
    print_v(v);
    std::cout << v.size() << std::endl;
    v[3] = v[5] = v[9] = 99;
    print_v(v);

    // vector<int>::iterator newEnd(
    // remove(v.begin(), v.end(), 99)
    // );
    // std::cout << v.size() << std::endl;
    // print_v(v);


    // erase
    v.erase(remove(v.begin(), v.end(), 99), v.end());
    // v.unique()//Eliminates all except the first element 
    print_v(v);
    std::cout << v.size() << std::endl;

    list<int> li(v.begin(), v.end());
    li.remove(7);
    for (auto i :li){
        std::cout << i;
    }
    std::cout  << std::endl;

};
/* 
remove don't delete element.
as to { remove_if , unique } either



*/
int main()
{
    test1();
  return 0;
}