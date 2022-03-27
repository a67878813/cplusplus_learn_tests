// parser mechanism

#include <fstream>
#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <list>
using namespace std;









int main(){
ifstream dataFile("ints.dat");

// list<int> data(istream_iterator<int>(dataFile),
//             istream_iterator<int>());

int f(double d);
int f(double);
int f(double (d));

int g(double(*pf)());
int g(double pf());   // pf is implicitly function pointer

int g(double () );
list<int> data1(  (istream_iterator<int>(dataFile) ),
            istream_iterator<int>());

ifstream dataFile1("insts.dat");
istream_iterator<int> dataBegin(dataFile);
istream_iterator<int> dataEnd;
list<int> data (dataBegin, dataEnd);
    return 0;
};