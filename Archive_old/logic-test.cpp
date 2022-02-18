#include "source.h"
#include <fstream>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

int main11(){
    std::string userText;
    do
    {
        std::cout << "Enter some text :" << std::endl;
        std::cin >> userText;

        std::cout << " you have entered: " << userText<< std::endl;
    } while(userText != "exit");



    std::cout << "LAUNCH!" << std::endl;
    return 0 ;
}

int main22(){

    for (size_t i = 0; i < 10; i++)
    {
        std::cout << "1" << std::endl;

    }
    std::cout << "end" << std::endl;

    std::string myString("hello world");
    for (char c : myString) {
        std::cout << c << std::endl;
    }

    return 0;
}

int main() {
    int myNumber{3};

    switch (myNumber)
    {
    case 1 :
        break;
    case 2:
        std::cout << myNumber << std::endl;
        break;
    case 3:
        break;

    default:
        std::cout << "no case found!" << std::endl;
        break;
    }


    return 0;
}