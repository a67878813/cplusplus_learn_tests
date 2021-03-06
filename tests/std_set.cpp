#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <list>
#include <deque>
#include <queue>
#include <set>


using namespace std;

class Student{
public:

    int id;
    string name;
    bool operator <(const Student& other) const{
        return (this->id >other.id );
    }
    void print_student() const {
        std::cout << "[ name =" << name << ", id = "<< id << "] \n" << std::endl;
    }
};


int main(){
    set<int> tset={1,2,3,5,7};
    std::cout << tset.size() << std::endl;
    tset.insert(5);
    tset.insert({10,12,144});
    std::cout << tset.size() << std::endl;
    for(auto& el:tset)
        std::cout << el << " ";
    std::cout << std::endl;

    auto it=tset.erase(tset.find(10));
    std::cout << *it << std::endl;
    int num_erased = tset.erase(122);
    std::cout << num_erased << std::endl;
    
    auto ub=tset.upper_bound(7);
    std::cout << "ub = " << *ub << std::endl;
    auto lb = tset.lower_bound(7);
    std::cout << *lb << std::endl;
    tset.insert({-10,- 30,-20});
    for(auto& el:tset)
        std::cout << el << " ";
    std::cout << std::endl;
    
    set<Student> sst = {{50,"Simon"},{20,"Thomas"}     };
    for(auto& st : sst)
        st.print_student();

    return 0;
}