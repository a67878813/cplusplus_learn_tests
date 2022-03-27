// serial :
    // vector string deque list

//relative
    //set multiset map multimap

//
    // slist rope

//hash_set hash_multiset hash_map hash_multimap


// vector<char>     string

//vector

//array bitset valarray stack queue priority_queue

//contiguous-memeory container
    //vector string deque rope

//node-based container
    //list slist
#include <vector>
class Widget;
using std::vector;
// using WidgetContainer = vector<Widget>;
// WidgetContainer cw;
// Widget bestWidget;

// WidgetContainer::iterator i = find(cw.begin(),cw.end(),bestWidget);


class Widget;

template<typename T>
SpecialAllocator{};

using WidgetContainer = vector<Widget, SpecialAllocator<Widget> >;
WidgetContainer cw;
Widget bestWidget;

WidgetContainer::itertor i = 
    find(cw.begin(), cw.end(), bestWidget);



#include <map>
using std::map;
#include <string>
using std::string;

map<string, vector<Widget>::iterator, CIStringCompare>
//const_iterator
map<string, vector<Widget>::iterator, CIStringCompare>::const_iterator

#include <list>
using std::list;
class Customer{};
class CustomerList{
private:
    using CustomerContainer = list<Customer>;
    using CCIterator = CustomerContainer::iterator;

    CustomerContainer custors;
public:



};



