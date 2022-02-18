#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
// #include <vector>
// #include <thread>
#include <array>

#include <cmath>
#include <random>
#include <ctime>
using namespace std;
// #include "scource.h"
//

// int aaa(int args, char** argv)




int main(int argc, char **argv) {
    std::cout << "beggin=====" << std::endl;

    while (true)
    {
        char choice;
        cin >> choice;
        switch (choice)
        {
        case '1' :
            cout << "choice 1 \n";
            break;
        case 2 :
            cout << "choice 2 \n";
            break;
        case 3 :
            cout << "choice 3 \n";
            break;


        default:
            cout << "not a choice \n";
            break;
        }
    }

}

