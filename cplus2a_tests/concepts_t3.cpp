#include <concepts>
#include <iostream>
#include <string>
#include <type_traits>
#include <vector>
#include <cmath>


template <typename Vec>
using Scalar = typename std::decay<decltype(Vec()[0]) > ::type;


template<typename Vec>
concept FloatVec = 
std::floating_point<Scalar<Vec>> &&
requires(Vec vec){
    {vec.size() } ;//-> std::integral;  //depict type
    requires std::integral<decltype(vec.size())>;//force restrict
};


// template <typename Vec>
// requires FloatVec<Vec>
template <FloatVec Vec>
auto norm(const Vec &vec) //-> Scalar<Vec> 
{
    Scalar<Vec> result = 0;
    using Size = decltype(vec.size());

    for (Size i = 0; i < vec.size(); i += 1) {
        result += vec[i] * vec[i];
    }
    return std::sqrt(result);
}

FloatVec auto Add(FloatVec auto a,FloatVec auto b)
{
return a;
}

struct Point2{
    float x;
    float y;

    auto size() const -> int{
        return 2;
    }
    auto operator[] (int i )  const ->float {
        return i==0 ? x: y;
    }
};

int main() {
    std::vector<double> a = {1, 2,2};
    std::cout << "norm a : " << norm(a) << std::endl;

    Point2 b = {3, 4};
    std::cout << "norm b: " << norm(b) << std::endl;

    // std::vector<std::string> c = {"hi", "the"};
    // std::cout << "norm string: " << norm(c) << std::endl;
}