// numeric.cpp by Bill Weinman <http://bw.org/>
// updated 2002-07-27
#include <cstdio>
#include <cstdlib>
#include <cmath>

int main()
{
    int neg = -47;
    int x = abs(neg);
    printf("x is %d\n", x);

    double y = log2(10);
    double y2 = pow(2,10);
    double y3 = sqrt(1024);
    const double pi = acos(-1);
    double t1 = sin(pi/2);
    double t2 = tan(pi/3);
    
    printf("t1 is %lf \n", t1);

    return 0;
}
