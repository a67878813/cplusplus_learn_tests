// replace op with complex op=


class Rational{
public:
    Rational();
Rational& operator +=(const Rational& rhs);
Rational& operator -=(const Rational& rhs);
};

const Rational operator+( const Rational& lhs, const Rational& rhs)
// if Rational operator+= is (public)
// this func has no need to be its friends func.
{
    return Rational(lhs) += rhs;
}





template<class T>
const T operator+(const T& lhs, const T& rhs)
{
    return T(lhs) += rhs;
    // T(lhs) // is c'tor 
    //is same as below

    T result(lhs);
    return result += rhs;
}


template<class T>
const T operator-(const T& lhs, const T& rhs)
{
    return T(lhs) -= rhs;
}

int main(){


Rational a,b,c,d, result;

// easy to write debug maintain, 80% acceptable performance
result = a+b+c+d;// there are 3 temp objs/


//there is no temp obj.
//high efficient
result = a;
result += b;
result += c;
result +=d;

    return 0;
};
