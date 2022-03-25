//define non-member functions inside templates when type conversions are desired.

//template
// Rational 
// operator* 


template<typename T>
class Rational{

public:
    Rational (const T& numerator=0,
            const T& denominator =1);
    
    const T numerator() const;
    const T denominator() const;

    friend
    const Rational operator*(const Rational& lhs,
                            const Rational & rhs);// declare

    // //above is equal to
    // friend
    // const Rational<T> operator*(const Rational<T>& lhs,
    //                         const Rational<T> & rhs)
    // {return Rational(lhs.numerator() *rhs.numerator(),
    //                     lhs.denominator() * rhs.denominator()) ;  };// declare & define

    friend 
    const Rational<T> operator*(const Rational<T>& lhs,
                            const Rational<T>& rhs)
                            {return doMultiply(lhs,rhs);  }   // friend call helper
    // friend func supports hybrid multiply
};

//  template 实参推导
// template<typename T>
// const Rational<T> operator* (const Rational<T>& lhs,
//                             const Rational<T>& rhs)
//                             {} //define


// declare helper template
template<typename T>
const Rational<T> doMultiply(const Rational<T>& lhs,
                        const Rational<T>& rhs);

template<typename T>
const Rational<T> doMultiply(const Rational<T>& lhs,
                        const Rational<T>& rhs)
    {
        return Rational<T>(lhs.numerator() * rhs.numerator(),
                        lhs.denominator() * rhs.denominator()); //define  in .h\.hpp if necessary 
    };



int main(){

    Rational<int> oneHalf(1,2);

    Rational<int> result = oneHalf * 2;//declare friend in type class
    //template 实参推导
    //class templates 不依赖template实参推导




    return 0 ;
};



//Tips

// if we need class template related function supporting all parameters implicitly type conversion,
// wee need declare & define class template's inner friend function.