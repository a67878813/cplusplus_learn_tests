
/* 
ad-hoc multimorphism
//better performance than reference multimorphism
 */
#include <iostream>

#include <functional>
#include <vector>
#include <iterator>
#include <cmath>
#include <memory>

#include <variant>

struct Circle{ double r;};
double getArea(const Circle& c) {return M_PI * c.r * c.r;}
double getPerimeter(const Circle& c) {return 2* M_PI * c.r;}



struct Rectangle{double w; double h;};
double getArea(const Rectangle& r) {return r.w * r.h;};
double getPerimeter(const Rectangle& r) {return 2* (r.w + r.h);} 

using Shape = std::variant<Circle, Rectangle>;
// uni type Shape
double getArea(const Shape& s)
{return std::visit([](const auto& data) {return getArea(data);}, s);}
double getPerimeter(const Shape& s)
{return std::visit( [](const auto& data) {return getPerimeter(data);}, s);}



#include <vector>
#include <benchmark/benchmark.h>

static void adhocPerf(benchmark::State& state){
    // using namespace Adhoc;
    size_t len = state.range(0);
    for (auto _: state){
        std::vector<Shape> shapes; shapes.reserve(len);
        for(size_t i=0; i<len; ++i){
            if(rand() %100 >50) shapes.emplace_back(
                Rectangle{rand() %10 * 1.0, rand()% 10 * 1.0} );
            else shapes.emplace_back(Circle{rand() %10 * 1.0});
        }
        for (const auto& shape: shapes){
            benchmark::DoNotOptimize(getArea(shape));
            benchmark::DoNotOptimize(getPerimeter(shape));

        }
    }
};





BENCHMARK(adhocPerf);
BENCHMARK_MAIN();


// int main() {
    // Shape shape = Circle{2};

    // std::cout << "shape area:" << getArea(shape)
    //         <<" periemter:" << getPerimeter(shape)
    //         << std::endl;

    // shape = Rectangle{2,3};


    // std::cout << "shape area:" << getArea(shape)
    //         <<" periemter:" << getPerimeter(shape)
    //         << std::endl;
    
    // return 0;
// }




