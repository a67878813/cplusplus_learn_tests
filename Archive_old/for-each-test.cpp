#include "source.h"
#include <fstream>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <new>
#include <string>
#include <fstream>
#include <vector>

int main(){
    const int numPlayers = 5;
    int scores[numPlayers] = {10,20,30,50,40};
    int highestScore = 0;

    for (int player = 0; player < numPlayers; player++)
    {
        if(scores[player] > highestScore)
        {
            highestScore = scores[player];
        }
    }
    int highestScore2 = 0;



    for(const auto &score  : scores){   //const auto &     read ONLY
                                        // we have to use references & or (const & ) for performance reasons.
        if(score > highestScore2){
            highestScore2 = score;
        }
    }

    std::cout << "the top score is " << highestScore << std::endl;
    std::cout << highestScore2 << std::endl;


    // for(auto player_score : scores)
    // {
        
    // }
    std::vector<int> fibonacciSeries = {0,1,1,2,3,5,8,13,21,34,55,89};

    for(const auto &currentNumber : fibonacciSeries)
    {
        std::cout << currentNumber << std::endl;
    }
    return 0 ;
}