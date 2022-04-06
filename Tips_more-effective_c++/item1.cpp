// procedual-based 
//objec0based/
// object-oriented

// generic paradigm


//notice the difference of pointers & references
#include <string>
#include <iostream>
#include <vector>

int test2j(){
char *pc =nullptr;
char & rc = *pc;//undefind action

};


int test3(){
    using namespace std;
    // string& rs;
    string s("sssss");
    string & rs = s ;
    string && r2 = s+s;

    string *ps;  // uninitialized pointerj

};


void printDouble (const double& rd){
    std::cout << rd << std::endl;  // no need for test rd
};


void printDouble(const double *pd){
    if(pd) { // check for not null
        std::cout << *pd << std::endl;
    }
}

void sss(){
    using namespace std;
    string s1("Nancy");
    string s2("clancy");

    string&rs = s1;
    string *ps = &s1;
    rs = s2;

    ps = &s2;

    vector<int> v(10);

    v[5] = 10;    // assignment 's obj is return value of operator[]
            // if operator[] return pointer

    // *v[5] = 10;
    // so taht oprator[] should return reference
    
}