#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <list>
#include <deque>
#include <queue>
#include <set>
#include <unordered_set>
#include <functional>

using namespace std;

class Student{
public:

    int id;
    string name;
    bool operator==(const Student& s) const{
        return (this->id == s.id && this->name == s.name);
    }
    bool operator <(const Student& other) const{
        return (this->id >other.id );
    }
    void print_student() const {
        std::cout << "[ name =" << name << ", id = "<< id << "] \n" << std::endl;
    }  

};
class StudentHashFunction{
public:
    size_t operator()(const Student& s ) const {
        std::cout << "hash 2 : " << hash<string>{}(s.name) << std::endl;
        size_t ttemp;
        ttemp = hash<int>{}(s.id)+ hash<string>{}(s.name);
        std::cout << "ttemp"<< ttemp << std::endl;
        return ttemp ;
    }
};


int main(){
    /* size_t h1 = hash<string>{}("hello");
    size_t h2 = hash<string>{}("world");

    std::cout << h1 << std::endl;
    std::cout << h2 << std::endl;
    std::cout << hash<int>{}(1001) << std::endl;
    std::cout << hash<float>{}(100.5) << std::endl;
     */
    
    unordered_set<int> us = {5,10,4,20,5,5,15};
    for(int x: us)
        std::cout << x << " ";
    std::cout  << std::endl;
    std::cout << "size = "<< us.size() << std::endl;
    std::cout << "count(5) = "<< us.count(5) << std::endl;
    std::cout << "num erased(5)" << us.erase(5)<< std::endl;
    std::cout << boolalpha << "found 16 = "<< ( us.find(16) != us.end() ) << std::endl;
    std::cout << "num buckets =" << us.bucket_count()<< std::endl;
    std::cout << "load factor" << us.load_factor()<< std::endl;
    




    /* unordered_multiset<int> us2 = {5,10,4,20,5,5,15};
    for(int x: us2)
        std::cout << x << " ";
    std::cout  << std::endl; */
    std::cout << "==============" << std::endl;
    unordered_set<Student, StudentHashFunction> uss = {  {20,"simon"}, {50, "Test"}, {33,"Thomas"} };
    // std::cout << uss.size() << std::endl;
    for(auto&st:uss)
        st.print_student();
    return 0;
}