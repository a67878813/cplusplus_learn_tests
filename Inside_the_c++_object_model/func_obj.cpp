#include <iostream>

template<typename T>
struct plus{
    T operator() (T x, T y ) { return x + y;}
};

struct plus2{
    int operator() (int x, int y ) { return x + y;}
};



struct plusN{
    plusN(int N): N(N){}
    int operator()(int x)
    {return x+ N;}
private:
    int N;

};

#include <functional>
//bind
auto plus6 = std::bind(plus<int>{}, 6, std::placeholders::_1);
//                                    _1 bind to 6 to plus<int>{}





#include <vector>


#include <iterator> //ostream_iterator

// #include <chrono>

int main(){
    
    // auto start = std::chrono::high_resolution_clock

    std::cout << plus<double>{}(2.2,3.3) << std::endl;

    auto plus5 = plusN{5};
    // std::cout << plus5.N << std::endl;
    std::cout << plus5(2) << std::endl;
    std::cout << plus5(5) << std::endl;
    std::cout << plus6(3) << std::endl;
std::cout << "=======" << std::endl;
std::vector<int> nums = {5,3,2,5,6,1,7,4};
nums.push_back(42);
nums.push_back(23);
std::copy_if(nums.begin(), nums.end(),
    std::ostream_iterator<int>(std::cout, ",")
    //                      (  outstream ,  delimiter 分隔符)
    ,
    [](auto && PH1) { return std::greater<int>{}(std::forward<decltype(PH1)>(PH1), 4); }
    //                                                          //std::greater<>(PH1 ph1, 4)
    //          bool  greater<int>{}(n,4)

    //std::bind(std::greater<int>{}, std::placeholders::_1,4)

);
std::cout<<std::endl;

}