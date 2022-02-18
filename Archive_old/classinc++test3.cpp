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


class SomeClass
{
public:
    static int someVariable;
    SomeClass(){someVariable++;}
};
int SomeClass::someVariable = 0;

int main()
{
    SomeClass a;
    SomeClass b[5];

    std::cout << a.someVariable << std::endl;

    SomeClass* c = new SomeClass;

    std::cout << SomeClass::someVariable << std::endl;
    delete c;

    return 0;
}