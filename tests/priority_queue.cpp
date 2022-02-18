#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <list>
#include <deque>
#include <queue>

using namespace std;

class Student{
public:
    int age;
    int id = 0;
    Student(int a ):age(a) {};
    Student(int a ,int b ):age(a),id(b) {};

    friend ostream& operator<< (ostream& out, const Student& rhs){
        out<< "Student age: "<< rhs.age << " id:"<<rhs.id<<std::endl;
        return out;
    }
};


int main(){
/*     priority_queue<int> Q;
    vector<int> v= {8,1,6,5,0,7,2,9};
    for(int x: v) Q.push(x);

    while(!Q.empty()){
        std::cout << Q.top() <<" ";
        Q.pop();
    }
    cout<<std::endl;
 */


/*     // priority_queue<  class T , class container  , class compare    >
    priority_queue<int,vector<int> ,std::greater<int> > Q;
    vector<int> v= {8,1,6,5,0,7,2,9};
    for(int x: v) Q.push(x);

    while(!Q.empty()){
        std::cout << Q.top() <<" ";
        Q.pop();
    }
    cout<<std::endl;
 */
    // priority_queue<  class T , class container  , class compare    >
    auto cmp = [](int a, int b ){
        return a>b;
    };




    priority_queue< int,vector<int> ,decltype(cmp) >  Q;
    // priority_queue Q(cmp);
    vector<int> v= {8,1,6,5,0,7,2,9};
    for(int x: v) Q.push(x);

    while(!Q.empty()){
        std::cout << Q.top() <<" ";
        Q.pop();
    }
    cout<<std::endl;


    auto cmp2 = [](Student a , Student b){
        return a.age> b.age; 
        // return trus if first argument comes before its second argument in a weak ordering.

        // return true if first argument is right side order.
    };

    priority_queue< Student ,vector<Student> ,decltype(cmp2) >  Q2;
    // priority_queue Q(cmp);
    vector<Student> v2= {8,1,6,5,0,7,2,9};
    for(Student x: v2) Q2.push(x);

    while(!Q2.empty()){
        std::cout << Q2.top() ;//<<" ";
        Q2.pop();
    }
    cout<<std::endl;


    return 0;
}