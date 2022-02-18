#include "source.h"
#include <fstream>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <new>
#include <ostream>
#include <string>
#include <fstream>
#include <vector>
#include <array>
#include <algorithm>
#include <tuple>

using namespace std;


class Vector2D
{
public:
    int x,y;
    Vector2D(){};
    Vector2D(int a, int b ): x(a),y(b){}
    // Vector2D operator + (const Vector2D&);

};

//menber function
// Vector2D Vector2D::operator+(const Vector2D &param)
// {
//     Vector2D tempVector;
//     tempVector.x=x+param.x;
//     tempVector.y=y+param.y;

//     return tempVector;
// }

//none menmber function
Vector2D operator+(const Vector2D& lhs, const Vector2D& rhs)
{
    Vector2D tempVector;
    tempVector.x = lhs.x + rhs.x;
    tempVector.y = lhs.y+rhs.y;
    return tempVector;
}


class SomeClass
{
public:
    bool CheckFroSelf(SomeClass &param);
    bool operator==(const SomeClass &);

private:
    
};
bool SomeClass::operator==(const SomeClass&param)
{
    if(&param == this)
        return true;
    else
        return false;
}

bool SomeClass::CheckFroSelf(SomeClass &param)
{
    if(&param == this)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    Vector2D v1(3,1);
    Vector2D v2(1,2);
    Vector2D resultVector;

    resultVector = v1+v2;
    // Vector2D resultvector2 = v1.operator+(v2);
    std::cout << resultVector.x << std::endl;
    

    SomeClass a;
    SomeClass* b = &a;
    // if(b->CheckFroSelf(a))
    // {
    //     std::cout << "yes &a is b" << std::endl;
    // }
    if (b == &a)
    {
        std::cout << "&a is b" << std::endl;
    }

    return 0;
}