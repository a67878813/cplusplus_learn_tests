// new-delete.cpp by Bill Weinman <http://bw.org/>
// updated 2020-06-24
#include <cstdio>
#include <new>
#include <unistd.h>


const long int count = 4000000000;

int main() {
    printf("allocate space for %lu long int at *ip with new\n", count);
    
    // allocate array
    long int * ip;
    try {
        ip = new long int [count];
    } 
    catch (std::bad_alloc & ba) {
        fprintf(stderr, "Cannot allocate memory (%s)\n", ba.what());
        return 1;
    }
/*     ip = new long int [count];
    if (!ip){
        fputs("Cannot allocate memory (%s)\n", stderr);
        return 1;
    } */
    printf("allocated\n");
    
    // initialize array
    for( long int i = 0; i < count; i++ ) {
        ip[i] = 0;
    }
    printf("Initialized\n");
    sleep(5);
    // deallocate array
    delete [] ip;
    puts("space at *ip deleted\n");
    
    return 0;
}
