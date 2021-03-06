// pointers.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>

int &  f(int& i ) { return ++i;}

int main()
{
    int x = 7;
    int y = 42;
    int * ip = &x;

    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    printf("The value of *ip is %d\n", *ip);
    int i =5;
    f(i);
    return 0;
}
