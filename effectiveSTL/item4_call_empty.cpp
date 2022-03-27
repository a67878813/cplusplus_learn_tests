



// if (c.seze() == 0 )

// if (c.empty())        //   time C



#include <list>
#include <iostream>
#include <numeric>
#include <algorithm>

// using std::list;
using namespace std;

list<int> list1(10,5);
list<int> list2;


int main(){


list1.push_back(4);
list1.push_back(5);
list1.push_back(6);
list1.push_back(7);





list2.push_back(4);
list2.push_back(5);

list2.push_back(6);
list2.push_back(7);
list2.push_back(8);
list2.push_back(9);
list2.push_back(10);



std::cout << "lsit1.begin  list1.end" << std::endl;
list<int>::iterator i;
for(i = list1.begin(); i!=list1.end(); ++i)
    std::cout << *i << " ";
cout<< endl;





list1.splice(
    list1.end(),list2,
    find(list2.begin(), list2.end(),5),
    find(list2.rbegin(), list2.rend(),10).base()
);



};