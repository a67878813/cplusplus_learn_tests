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
void print_v(vector<int> &v){
    for (auto &i: v){
        std::cout << i<< " ";
    }
    std::cout  << std::endl;
}
//test
void test1 () {// there is offset of iter && reverse_iter;

    vector<int> v;
    v.reserve(5);

    for(int i =1; i<=5; ++i){
        v.push_back(i);
        // std::cout << i << " " ;
    }
    // std::cout  << std::endl

    vector<int>::reverse_iterator ri = // r points to 3
        find(v.rbegin(), v.rend(), 3);
    

    vector<int>::iterator i(ri.base()); // make i same as ri's base
    std::cout << " i " << *i << std::endl;

    // v.insert(i,55);
    // print_v(v);

    // ri = // r points to 3
    //     find(v.rbegin(), v.rend(), 3);
    v.insert(i,99);
    print_v(v);

    vector<int>::iterator i2 = find(v.begin(), v.end(), 3);
    v.insert( i2+1, 333);
    print_v(v);



};

//test
void test2 () {
    vector<int> v;
    v.reserve(5);

    for(int i =1; i<=5; ++i){
        v.push_back(i);
        // std::cout << i << " " ;
    }
    // std::cout  << std::endl

    vector<int>::reverse_iterator ri = // r points to 3
        find(v.rbegin(), v.rend(), 3);
    

    vector<int>::iterator i(ri.base()); // make i same as ri's base
    std::cout << " i " << *i << std::endl;
    print_v(v);
    // v.erase(--ri.base());    // -- (ri.base())
    //or
    v.erase(   (++ri).base()); 
    print_v(v);
};

int main()
{
    // test1();
    test2();
    return 0;
}

