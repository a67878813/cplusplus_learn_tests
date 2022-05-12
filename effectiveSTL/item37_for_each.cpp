// accumulate  
// || for_each

//range algorithm
/* 
count
count_if
min_element
max_element




*/
#include <numeric>
/* 
accumulate
inner_product
adjacent_difference
partial_sum



*/


#include <algorithm>
// #include <cctype>
#include <cstdio>
// #include <fstream>
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
void print_v(vector<int> &v) {
    for (auto &i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}



//test
void test1 () {
    list<double> ld;
    double sum = accumulate( ld.begin(), ld.end(), 0.0);
};


//test
void test2 () {
    std::cout << "the sum of the ints on the standard input is "
    <<  std::accumulate(std::istream_iterator<int>(std::cin),
                        std::istream_iterator<int>(),
                        0.0)
    
    << std::endl;
};

std::string::size_type
stringLengthSum(string::size_type sumSoFar, const string& s)
{
    return sumSoFar + s.size();
}

//test
void test3 () {
    set<string> ss;
    string::size_type lengthSum = 
        accumulate(ss.begin(), ss.end(),
            static_cast<string::size_type>(0) ,
            stringLengthSum);
};

//test
void test4 () {
    vector<float> vf;
    // vf= {15,10,10};
    float product = 
        accumulate(vf.begin(), vf.end(),
                1.0f,
                std::multiplies<>());
std::cout << product << std::endl;

};

struct Point{
    Point(double initX, double initY) 
    :x(initX), y(initY) {}
    double x,y;
};

class PointAverage 
    //  :public std::binary_function<Point,Point,Point> 
    // removed in c++17
    {
public:
    PointAverage()
    :xSum(0),ySum(0), numPoints(0){} ;

    ~PointAverage();

    const Point
    operator() (const Point& avgSoFar, const Point& p)
    {
        ++numPoints;
        xSum += p.x;
        xSum += p.y;
        return Point(xSum/numPoints, ySum/numPoints);
    }

    
private:
    size_t numPoints;
    double xSum;
    double ySum;
protected:
    
};



//test
void test5 () {
    list<Point> lp;

    Point avg = 
        accumulate(lp.begin(),lp.end(),
                    Point(0,0),
                    PointAverage());
};


// for each


class PointAverage2
    : public std::unary_function<Point, void>
    //  :public std::binary_function<Point,Point,Point> 
    // removed in c++17
    {
public:
    PointAverage2()
    :xSum(0),ySum(0), numPoints(0){} ;

    ~PointAverage2();

    const Point
    operator() (const Point& avgSoFar, const Point& p)
    {
        ++numPoints;
        xSum += p.x;
        xSum += p.y;
        return Point(xSum/numPoints, ySum/numPoints);
    }

    void 
    operator() (const Point& p)
    {
        ++numPoints;
        xSum += p.x;
        ySum += p.y;
    }
    Point result() const 
    {
        return Point(xSum/numPoints, ySum/numPoints);
    }
    
private:
    size_t numPoints;
    double xSum;
    double ySum;
protected:
    
};


//test
void test6 () {
    list<Point> lp;

    Point avg = for_each(lp.begin(),lp.end(),
                        PointAverage2()).result();
    
};












int main()
{
  test4();
  return 0;
}
