//polymorphism
#include <iostream>

class X{
public:
virtual void  rotate() const {
    std::cout << "X::rotate" << std::endl;
}
};
class Z: public X{
public:
virtual void rotate() const override {
    std::cout << "Z::rotate" << std::endl;
}
};

void rotate(
    X  datum,
    const X* pointer,
    const X& reference)
{
    std::cout << "size of "<< sizeof(datum) <<"|" <<sizeof(pointer)<<"|" << sizeof (reference)  << std::endl;
    (*pointer).rotate();
    reference.rotate();
    //always call X::rotate()
    datum.rotate();

}

#include <unistd.h>

int main(){
    pid_t pid = getpid();
    std::cout << "PID:"<< pid << std::endl;
    Z z;
    rotate(z,&z,z);
    return 0;
}