

#include <stdio.h>

int main(){
    int s =0;
    for(int i =0;i<10;i++){
        for(int j =0;j<5;j++){
            s += i*j- j*j;
            printf("inner loop %f\n",(float)s);

        }
    printf("outer loop %f\n",(float)s);
    }
    return 0;
}