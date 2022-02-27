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
//ads
using fp = int (*)(int);
typedef int (*fp2)(int);

int test2(fp _in, int b){
    int c = _in(10) + b;
    return c;
};

class A{
private:
    int a =0 ;
public:
    A()
        :p1(&A::funa),p2(&A::funb){}
    A(int aa)
        :a(aa){}


    ~A()= default;;
    void setA(int aa =1){
        a =aa;
    }
    virtual void print(){
        std::cout << "A: "<< a << std::endl;
    }
    virtual void printa(){
        std::cout << "A1 : " <<a<< std::endl;
    }
    void funa(void){
        std::cout << "funaA" << std::endl;
    };
    static void funb(void){
        std::cout << "static funb B" << std::endl;
    };

    void (A::* p1)();
    using p1_ = void (A::*)();// tiny grammar difference


    void (*p2)();
    using p2_ = void(*)();


};

class B : public A{
    int b;
    public:
    B()
        :A(),b(0){}
    B(int aa, int bb)
        :A(aa),b(bb){}
    ~B()= default;
    
    virtual void print(){
        A::print();
        std::cout << "B: "<<b << std::endl;
    };
    virtual void printa(){
        A::printa();
        std::cout << "B:"<< b << std::endl;
    };


};



int main(){
    A a;
    B b;
    void (A::*ptr)(int) = &A::setA;
    using ptr2 = void (A::*)(int) ;
    
    std::cout << "ptr = " << ptr << std::endl;

    A* pa = &a;

    std::cout << "pa = " << pa << std::endl;
    printf("A::set: %p\n",&A::setA);
    printf("A::print: %p\n",&A::print);
    // std::cout << "ptr2 = " << (&A::print) << std::endl;
    // std::cout << "ptr3 = " << &A::printa << std::endl;
    a.print();
    (pa->* ptr)(1000);  //pa is Class pointer,it points to a instance,    operator ->* to use it's instace's/Class's??? function 
            //  &a->*ptr        *&a  *&A::setA    //     a    a::setA 
    a.print();
    (a.* ptr)(2000);    //a is instance ,operator .* to use its Class function .
        // a.     (*ptr)        a.*& A::setA      //     a   .  A::setA
    a.print();



    // using p = void (A::*)(void);    //define type-alias
    void (A::* p)();             //define p function pointer.
    //did not declared p pointer on first statement.

    (a.*a.p1)();
    p = a.p1;
    (a.*p)();


    A* ab  = &a;
    (ab->*p )();   // a.p1 ()

    // p = a.p2;
    void(*pp)();
    pp = &A::funb;
    pp();


    return 0;
}