


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

//sort

class Widget{};

bool qualityCompare(const Widget& lhs, const Widget& rhs)
{
    // return whether lhs > rhs
}


vector <Widget> widgets;

//  N* log(M)
// partial_sort
//unstable sort.
void test1 () {
    partial_sort(widgets.begin(),
                widgets.begin() + 20,
                widgets.end(),
                qualityCompare);
};


// nth_element  O(N); faster than partial_sort
//unstable sort
void test2 () {
    nth_element(widgets.begin(),  // put best 20 's elements in begin of widgets,
                                        //don't care them sort.
                widgets.begin() +19, // points to 20th.element.
                widgets.end(),
                qualityCompare);
};

// fast verible, 
vector<Widget>::iterator begin(widgets.begin());
vector<Widget>::iterator end(widgets.end());

vector<Widget>::iterator goalPosition;

//test
void test3 () {
    goalPosition = begin +widgets.size() /2;
    nth_element(begin, goalPosition, end,
                qualityCompare);
                //noew goalPosition points to element which has middle value

    vector<Widget>::size_type goalOffset = 
        0.25* widgets.size();
    nth_element(begin, begin+goalOffset, end, // find 75%'s value
                qualityCompare)

                //now begin+ goalOffset 's element has 75% 's value.
};

// range order
// { sort , stable_sort, partial_sort }
// find some position's element
// { nth_element}

// all sort 
        // means mass compare && swap


// partition Algorithum

bool hasAcceptableQuality( const Widget& w)
{
    // whether quality >= 2;
}


// to partition algo

//test
void test4 () {
    vector<Widget>::iterator goodEnd =  // sort all true element, swap it to front.
    //return a iter pointer first false element.
        partition(widgets.begin(),
                    widgets.end(),
                    hasAcceptableQuality);
    // goodEnd points to first bad element.
        // stable_partition // save relative position



};


/* 
{sort , stable_sort, partial_sort, nth_element} , require random_iterator,
could apply to {vector , string,  deque}

relative Container do not require sort(cause its always sorted)

list, need sort, but can't using std::algos

list.sort ( stable sort)
*/

/* 
lsit sort
copy to vector | sting |deque
sort

=======
create list::iterator container ?   use algo,  read list via iterator

===



*/

/* 
partition stable_partition ,needs double_iterator,
could used in all stl sequence container.
*/

//priority_queue