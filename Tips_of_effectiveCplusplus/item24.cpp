#include <iostream>

// on Object_Oriented C++ 
//  Declare non-member functions when type conversions should apply to all parameters.



class Rational {
public:
    Rational( int numerator =0, int denominator =1);  // explicit deny f 
    // explicit Rational( int numerator = 0);
    int numerator() const;
    int denominator() const;

    // const Rational operator* (const Rational& rhs) const;

};
const Rational operator*(const Rational& lhs, const Rational& rhs)

int main(){
    Rational oneEighth(1,8);
    Rational oneHalf(1,2);
    Rational result = oneHalf* oneEighth;
    result = result * oneEighth;

    result = oneHalf * 2;
    result = 2 * oneHalf;


    return 0;
}