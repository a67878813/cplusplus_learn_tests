#include <iostream>
// equality  &&equivalence
#include <functional>
#include <algorithm>

// equivalence
#include <set>
#include <string>
std::set<int> c;
using std::string;
using std::set;


void test(){
    int x = 1;
    int  y =2;
    ! c.key_comp() (x,y) && ! c.key_comp()(y,x);// if equivalence
    auto i = c.key_comp();// return compair_, default std::less<type>
}


//test compaire

struct CIStringCompare:
    public 
    std::binary_function<string,string,bool>{
        bool operator()(const string& lhs,const string& rhs) const 
        {
            return ciStringCompare(lhs,rhs);

        }
    };


void test2(){
// set of un-distinguishable Capital letter
set<string, CIStringCompare> ciss;
ciss.insert("Persephone");
ciss.insert("persephone");

std::cout << ciss.size() << std::endl;



// set's find function()
if(ciss.find("persephone") != ciss.end() ) {
    //serch seccess.
}


// std::find will not retrive
// cause "persephone" and "Persephone" is equivalent, but not equal.
if ( std::find(ciss.begin(), ciss.end(),
        "persephone") 
    != ciss.end()   ){
        // 
    }
else {

}

        
}


int main(){
    test2();
}


/* 
Tips:

relative Container need 
    1.compare
    2.equal_to

when insert && un_multi_  Container,
    1, when compare falire, do not indert

when find, (call equal_to)

Usually
member.find call equal_to
std::find call operator== || !=



*/