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

#include <set>
#include <map>



#include <chrono>

//vector string auto manage memory
//              is STL sequtial container ,
//              could use Sequential algrithum

using std::vector;
using std::string;
using std::set;
using std::multiset;
using std::map;
using std::multimap;


static 
std::chrono::time_point<std::chrono::system_clock, 
                        std::chrono::duration<long, 
                                            std::ratio<1, 1000000000> >
                        >
    begin_;

static 
std::chrono::time_point<std::chrono::system_clock, 
                        std::chrono::duration<long, 
                                            std::ratio<1, 1000000000> >
                        >
    end_;

inline void begin(){
    begin_ = std::chrono::high_resolution_clock::now();
    
}

inline void end(){
    end_ = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end_- begin_);
    // std::cout << "Time measured: "<< elapsed.count() * 1e-9  << " seconds."<< std::endl;
    std::cout << "Time measured: "<< elapsed.count()   << " nano"<< std::endl;
}
//=====================
//=====================

void t_speed(){

    for(int j=1;j<=10;++j) {

        // {
            begin();
            std::vector<int> v;
            v.reserve(1000);
            // v.push_back(1);
            for (int i =1;i<=1000;++i) {
                v.push_back(i);
            }
            end();
        // std::cout << v.size() << std::endl;
        // }

    // std::cout << v.capacity() << std::endl;
    }//end j 
    // std::cout << v.capacity() << std::endl;

}



class Widget{};

//===========ordered vector

void test1(){
vector<Widget> vw;
std::sort(vw.begin(), vw.end());


Widget w; // store searched obj

//binary_search
if (std::binary_search(vw.begin(), vw.end(), w)){

}

vector<Widget> ::iterator i =
    lowrt_bound(vw.begin() , vw.end() , w);  //lower_bound search

//                   w *i is not equivalent
if (i != vw.end() && !(w <*i  )) {

}


// equal_range search
std::pair<vector<Widget>::iterator,
            vector<Widget>::iterator>  range=
    std::equal_range(vw.begin(), vw.end(), w);

if(range.first != range.second){
    // end search , begin resize ...

}

sort(vw.begin(),vw.end());




}





//================
// in map's type
//================

using Data = std::pair<string, int>;

//compair class
class DataCompare{
public:
    //sort compare
    bool operator() (const Data& lhs, const Data& rhs)const  
    //
    {
        return keyLess(lhs.first, rhs.first);
    }

    //search compare
    bool operator() (const Data& lhs, const Data::first_type& k) const 
    {
        return keyLess(lhs.first, k);
    }
    //search compare 2
    bool operator() (const Data::first_type& k,const Data& lhs ) const 
    {
        return keyLess(lhs.first, k);
    }

private:
    bool keyLess(const Data::first_type & k1,
                const Data::first_type & k2) const 
    {
        return k1 <k2;
    }

};










void test2(){

}