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
/* 
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
        std::cout << "[ name =" << name << ", id = "<< id << "]" << std::endl;
    }  

};
class StudentHashFunction{
public:
    size_t operator()(const Student& s ) const {
        // std::cout << "hash 2 : " << hash<string>{}(s.name) << std::endl;
        
        size_t ttemp;
        ttemp = hash<int>{}(s.id)+ hash<string>{}(s.name);
        // std::cout << "ttemp"<< ttemp << std::endl;
        return ttemp ;
    }
};
 */

class MyClass
{
public:
    MyClass();
    MyClass(MyClass &&) = default;
    MyClass(const MyClass &) = default;
    MyClass &operator=(MyClass &&) = default;
    MyClass &operator=(const MyClass &) = default;
    ~MyClass();

private:
    
};

MyClass::MyClass()
{
}

MyClass::~MyClass()
{
}
class vector2 : private std::vector<int32_t>{
private:
    int* arr{nullptr};
public:
    vector2(int32_t size):
            

            }
};

int main(){
    return 0;
}