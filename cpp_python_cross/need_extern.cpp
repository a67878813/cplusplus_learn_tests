#include <iostream>
#include <string>

extern "C"{

int hehe(){
std::cout << "/* message */" << std::endl;
return 0;
}

int cm(int n){
    int cm=0;
    int i;
    for(i=1;i<=n;++i){
        cm +=i;

    }
    return(cm);
}


void show_matrix( int *matrix, int rows, int columns)
{
    int i,j;
    for(i=0; i<rows;i++){
        for (j=0; j<columns; j++){
            std::cout << matrix[i*columns +j] << "\t";
        }
        std::cout  << std::endl;
    }
}



}