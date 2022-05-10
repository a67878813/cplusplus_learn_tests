//C array should be relpaced with vector or string 
#include <algorithm>
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

//algorithum

int transmogrify( int x);// form new value


//test
void test1 () {

    vector<int> values;

    vector<int> results;

    transform(values.begin(), values.end(),
                // results.end(), // begin at results.end()// want append.
                back_inserter(results),// back_inserter call push_back()
                /* 
                allowed for vector string deque lsit

                front_inserter
                    call push_front
                    suit for {deque list}
                
                */
                transmogrify);


    list<int> results2;

    transform(values.begin(), values.end(),
            front_inserter(results2), // insert at head
            transmogrify);
            // 

    transform(values.rbegin(), values.rend(), // save order
            front_inserter(results2), // insert at head
            transmogrify);

    vector<int> values3;

    vector<int> results3;

    transform(values3.begin(), values3.end(),
            inserter(results3, results3.begin()+results3.size()/2  ),// insert at middle
            transmogrify);

};
/* 
back_inserter
front_inserter
inserter

// if obj's container is {vector , string } call reserve to get some performance.
*/

//test
void test3 () {
        vector<int> values;

    vector<int> results;
    results.reserve(results.size() + values.size());
    transform(values.begin(), values.end(),
            inserter(results, results.begin()+results.size()/2  ),// insert at middle
            transmogrify);

};

//test
void test4 () {
    vector<int> values;

    vector<int> results;
    results.reserve(results.size() + values.size());
    transform(values.begin(), values.end(),
            //wrong!!!
            // results.end(),// result will write to uninit memory
            back_inserter(results),
            transmogrify);

 
};

//test
void test5 () {
    vector<int> values;
    vector<int> results;
    if (results.size() <values.size()){
        results.resize(values.size());
    }

    transform(values.begin(), values.end(),
            results.begin(),  /// override
            transmogrify);


};

//test
void test6 () {
    vector<int> values;
    vector<int> results;
    results.clear(); //clear all elemenets in results
    results.reserve(values.size()); // reserve enough capacity

    transform(values.begin(), values.end(),
            results.begin(),  /// override
            transmogrify);


};
