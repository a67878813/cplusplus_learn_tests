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
};

//  template 实参推导
template<typename T>
const Rational<T> operator* (const Rational<T>& lhs,
                            const Rational<T>& rhs)
                            {}

int main(){

    Rational<int> oneHalf(1,2);

    Rational<int> result = oneHalf * 2;
    //template 实参推导
    //class templates 不依赖template实参推导




    return 0 ;
};