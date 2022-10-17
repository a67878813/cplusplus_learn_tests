#include <iostream>










int main(){

    int[]  result = new int[55+1];
    for (int i=1; i<=5;++i){
    std::cout << result[i] << std::endl;
    }


    for (int i=1; i<=5;++i){
        result[i] = result[ i&(i-1)] +1;
    }
    std::cout << "dsfsdf " <<result << std::endl;
    for (int i=1; i<=5;++i){
    std::cout << result[i] << std::endl;
    }

}