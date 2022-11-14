#include <iostream>
#include <chrono>

int main(){

    // std::cout <<std::chrono::weekday{std::chrono::June/21/2016};
    static_assert(std::chrono::weekday {std::chrono::June/21/2016}==std::chrono::Tuesday);
    static_assert(2020y/std::chrono::February/std::chrono::Tuesday[last] == std::chrono::February/25/2020);

    auto tp = std::chrono::system_clock::now();
    std::cout << tp << std::endl;
    std::cout << "zoned_time"<< tp{std::chrono::current_zone(),tp};
}