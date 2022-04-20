//some benchmark

// #define STDIO


#ifdef STDIO
#include <cstdio>
// #include <iostream>
#else
#include <iostream>

#include <iomanip>
#endif

// 
// ideal program repository is
//      small swift powerful elasticity expandable  
        // perceptual intuition 
        //      


// you must tread-off

const int VALUES = 30000;

int main()
{
    double d;

    for(int n =1; n<= VALUES; ++n){
        #ifdef STDIO
            std::scanf("%1f", &d);
            std::printf("%10.5f",d);



        #else
        std::cin >>d;
        std::cout << std::setw(10)
                    << std::setprecision(5)
                    <<std::setiosflags(std::ios::showpoint)
                    <<std::setiosflags(std::ios::fixed)
                    <<d;


        #endif


        if (n%5 ==0){
        
        #ifdef STDIO
        std::printf("\n");

        #else
        std::cout << '\n'; 

        #endif
        }

    }
    #ifdef STDIO
    #else
    std::cout<< std::endl;
    #endif



    return 0;
}