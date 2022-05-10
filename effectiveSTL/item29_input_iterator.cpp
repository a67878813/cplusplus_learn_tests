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

//istreambuf_iterator

//formatting inputs   // isteram_iterator
void test1 () {
    std::ifstream inputFile("interestingData.txt");
    inputFile.unsetf(std::ios::skipws);
    string fileData(       (   std::istream_iterator<char>(inputFile)),
                    std::istream_iterator<char>() //means end
                    );
    //istream_iterator using
        // operator >>
                // has ::sentry
                //ios::  flags
                // read errors
                // throw exceptions


    std::cout << fileData << std::endl;
};
//fast  sitreambuf_iterator (  40%)
void test2 () {
    std::ifstream inputFile("interestingData.txt");

    string fileData(       (   std::istreambuf_iterator<char>(inputFile)),
                    std::istreambuf_iterator<char>() //means end
                    );
    //istreambuf_iterator using
        // s.rdbuf()->sgetc()


    std::cout << fileData << std::endl;
};



/* 
// istreambuf_iteraotr   istream_iterator

// ostreambuf_iterator    ostream_iterator
// fast but has not formate


*/

int main()
{
    test2();
  return 0;
}