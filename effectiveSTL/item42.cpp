#include <algorithm>

#include <functional>

#include <list>
#include <iostream>
#include <vector>
#include <set>

using std::multiset;
using std::vector;

using std::list;
using std::cout;


class Widget{
public:
    size_t weight() const;
    size_t maxSpeed() const;
};

bool operator<(const  Widget& lhs, const Widget& rhs)
{
    return lhs.weight() <rhs.weight();
}


// violate the priciple of least astonishment

// template<>
// struct std::less<Widget>
// {
// public:
//     bool operator () (const Widget&lhs, const Widget& rhs) const 
//     {
//         return lhs.maxSpeed() <rhs.maxSpeed();                                                                                                                                                                                                                                                                                                                                                                                                      
//     }
// };

struct MaxSpeedCompare
{
bool operator () (const Widget& lhs, const Widget& rhs) const 
{
    return lhs.maxSpeed() <rhs.maxSpeed();
}
};

multiset<Widget, MaxSpeedCompare> widgets; 
//test
void test1 () {
    
};
