#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <list>
#include <deque>


using namespace std;

int main(){
    deque<int> d = { 1,2,3,4,5};
    std::cout << "Size =        "<< d.size() << std::endl;

    std::cout << "Third element = " <<d[2]<< std::endl;
    std::cout << d.front()<< ", " << d.back() << std::endl;
    for(deque<int>::iterator it = d.begin();it!= d.end();++it)
        std::cout << *it << "\t";

    std::cout  << std::endl;
    for(deque<int>::reverse_iterator it = d.rbegin();it != d.rend();++it)
        std::cout << *it << "\t";
    std::cout  << std::endl;
    d.push_back(100);
    d.push_back(200);

    d.push_front(-100);
    d.push_front(-200);
    for(deque<int>::iterator it = d.begin();it!= d.end();++it)
        std::cout << *it << "\t";
    cout<< endl;
    d.pop_back();
    d.pop_front();
    for(deque<int>::iterator it = d.begin();it!= d.end();++it)
        std::cout << *it << "\t";
    cout<<endl;
    return 0;
}