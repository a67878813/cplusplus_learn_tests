#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <list>
#include <deque>
#include <queue>

using namespace std;
int main(){

    queue<int> Q;
    for(int i =1;i<=5; ++i)
        Q.push(i);
    
    std::cout << "front = " <<Q.front() << ", back = " << Q.back()<< std::endl;
    std::cout << "size  = " << Q.size() << std::endl;

    Q.pop();
    Q.pop();
    std::cout << "front = " <<Q.front() << ", back = " << Q.back()<< std::endl;
    std::cout << "size  = " << Q.size() << std::endl;
    std::cout << std::boolalpha<< Q.empty() << std::endl;
    return 0;
}