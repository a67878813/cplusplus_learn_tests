
// return value optimization
class  Rational{
public:
    Rational( int numerator = 0 , int denominator = 1);

    int numerator() const ;
    int denominator() const;

};
inline const Rational operator* (const Rational& lhs,
                            const Rational& rhs)
{
    //return c'tor arguments
    return Rational(lhs.numerator() * rhs.numerator(), lhs.denominator() * rhs.denominator());
        // call Rational 's c'tor
    
    // func will copy    this temp obj as return value

    /* 
    // now same as

    Rational result(lhs.numerator() * rhs.numerator(), lhs.denominator() * rhs.denominator());
    return result;

    
    
    */

};

int main() {
    Rational a = 10;
    Rational b(1,2);
    Rational c = a* b;


    return 0;
}