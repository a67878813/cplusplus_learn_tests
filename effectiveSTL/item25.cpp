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

  template<typename _Value,
	   typename _Hash = hash<_Value>,//
	   typename _Pred = equal_to<_Value>,
	   typename _Alloc = allocator<_Value>>
class hash_set{};


void test(){
	hash_set<int> intTable;
}