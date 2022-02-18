#include "source.h"
#include <fstream>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <new>
#include <ostream>
#include <string>
#include <fstream>
#include <vector>
#include <array>
#include <algorithm>
#include <tuple>

using namespace std;

template<class T>

class Container
{
    T element;
public:
    Container(T arg) {element = arg;}
    T Incremetn(){return ++element;}

};

template<>
class Container<char>
{
    char element;
public:
    Container(char arg){ element = arg;}

    char ToUpperCase()
    {
        if((element >= 'a') && (element <='z') )
        {
            element += 'A' -'a';
            return element;
        }
    }
};

int main()
{

    Container<int> intContainer(7);
    Container<char> charContainer('j');

    std::cout << intContainer.Incremetn() << std::endl;
    std::cout << charContainer.ToUpperCase() << std::endl;
    return 0;
}