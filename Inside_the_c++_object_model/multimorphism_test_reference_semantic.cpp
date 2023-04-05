
#include <iostream>

#include <functional>
#include <vector>
#include <iterator>
#include <cmath>
#include <memory>

struct Shape
{
    virtual ~Shape() = default;
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
};

struct Circle: Shape{
    Circle(double r ): r_(r){};
    double getArea() const override{return M_PI * r_ * r_;}
    double getPerimeter() const override {return 2* M_PI * r_;}

private:
double r_;
};


struct Rectangle: Shape{
    Rectangle(double w,double h): w_(w), h_(h){}
    double getArea() const override {return w_ * h_;}
    double getPerimeter() const override {return 2* (w_ + h_) ;}

private:
    double w_;
    double h_;
};


#include <vector>
#include <benchmark/benchmark.h>
static void subtypePerf(benchmark::State& state){
    size_t len = state.range(0);
    for( auto _: state){
        std::vector<std::unique_ptr<Shape>> shapes;
        shapes.reserve(len);
        // create some shapes.
        for (size_t i =0; i<len; ++i){
            if( rand() %100> 50) shapes.emplace_back(
                std::make_unique<Rectangle>(rand() %10, rand() %10 ));
            else shapes.emplace_back(std::make_unique<Circle>(rand() %10));
        }

        for (const auto& shape: shapes){
            benchmark::DoNotOptimize(shape->getArea());
            benchmark::DoNotOptimize(shape->getPerimeter());

        }
    }
}




}



int main() {
    std::unique_ptr<Shape> shape = std::make_unique<Circle>(2);
    //shape areaa :12.56 perimeter: 12.56
    std::cout << "shape area:" << shape->getArea()
            <<" periemter:" << shape->getPerimeter()  <<std::endl;

    shape = std::make_unique<Rectangle>(2,3);

    std::cout << "shape area:" << shape->getArea()
            <<" periemter:" << shape->getPerimeter()  <<std::endl;
    return 0;
}




