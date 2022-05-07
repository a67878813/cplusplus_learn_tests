// vector string

//C array should be relpaced with vector or string 
#include <algorithm>
#include <functional>
#include <iterator>
#include <memory>
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

//custom compare type
struct StringPtrLess:
    public std::binary_function<const string*, 
                                const string*,
                                bool>
    {
        bool operator()(
            const string* ps1,
            const string* ps2) const 
        {
            return *ps1 <*ps2;
        }
        
    };


//custom dereference compare template
struct DereferenceLess:
    public std::binary_function<const string*, 
                                const string*,
                                bool>
    {
        template<typename PtrType>
        bool operator()(
            const PtrType ps1,
            const PtrType ps2) const 
        {
            return *ps1 <*ps2;
        }
        
    };

void print(const string * ps)
{
    std::cout << *ps << std::endl;
}

struct Dereference {
    template<typename T>
    const T& operator ()(const T* ptr) const {
        return *ptr;
    }
};
void test2(){
    // set<string*> ssp;
    // set<string*, std::less<string*>, std::allocator<string*> > ssp1;
    set<string*, StringPtrLess> ssp1;
    
    //template dereference
    set<string*, DereferenceLess> ssp;
    
    ssp.insert(new string("Anteater"));
    ssp.insert(new string("Wombat"));
    ssp.insert(new string("Lemur"));
    ssp.insert(new string("Penguin"));


    for(auto i: ssp){
        std::cout << *i << std::endl;
        std::cout << i << std::endl;
    }

    
    // for (set<string*, StringPtrLess>::const_iterator i = ssp.begin();
    //     i!= ssp.end();
    //     ++i){
    //         std::cout << **i << std::endl;
    //     }

    //, for every element in ssp, call print
    std::for_each(ssp.begin(), ssp.end(), print);

    // transform
    std::transform(ssp.begin(), ssp.end(),
                std::ostream_iterator<string>(std::cout,"\n"),
                Dereference() );
}

void test3(){
    map<int,string> m;
    m.begin()->first = 10; // map key is unchangeable

    multimap<int,string> mm;
    // element type is 
    //   pair<const int , string>
    mm.begin() ->first = 20;// multimap key is unchangeable
}

class Employee {
public:
    const string&
        name() const;

    void setName( string& name);

    const string&
        title() const;

    void setTitle(const string& title);

    int idNumber() const;
};

struct IDNumberLess:
    public std::binary_function<Employee, Employee, bool>{
    bool operator()(const Employee& lhs,
                    const Employee& rhs) const 
        {
            return lhs.idNumber() < rhs.idNumber();
        }
};
using EmpIDSet = set<Employee, IDNumberLess> ;


void test4(){
    EmpIDSet se;// ordered by IDNumberLess, set

    Employee selectedID;

    set<Employee, IDNumberLess>::iterator i = se.find(selectedID);
    if ( i != se.end() ) {
        // create a temp object
        // static_cast<Employee>(*i).setTitle("Corporate Deity");

        i->setTitle("Corporate Deity");

    }

}



// safe method of changing elements of {set multiset map multimap}

//1 . find elemnt
//2. make a copy
//3. change thiscopy
//4.erase the element in container
//5. insert new element

void test5_safe_change(){
    EmpIDSet se;// ordered by IDNumberLess, set

    Employee selectedID;

    auto i = se.find(selectedID);
    if ( i != se.end() ) {
        Employee e(*i);
        e.setTitle("Corporate Deity");
        se.erase(i++); // using post ++, make useablity of iter
        se.insert(i, e); // insert new element . hints origin position.


    }


}

int main(){

    // t_speed();
    test2();
}