// working.cpp by Bill Weinman <http://bw.org/>
// updated 2002-06-24
#include <cstdio>

int main()
{
    fputs("Hello, World!\n",stdout);
    const int bufsize = 256;
    static char buf[bufsize];
    fputs("promt: ",stdout);

    fgets(buf,bufsize,stdin);
    puts("output:");
    fputs(buf, stdout);
    fflush(stdout);

    return 0;
}
