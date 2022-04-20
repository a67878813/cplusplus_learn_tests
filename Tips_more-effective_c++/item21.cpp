// using overload to aovid implicit type conversions.


class UPInt {
public:
    UPInt();
    UPInt( int value);
};

const UPInt operator +( const UPInt& lhs, const UPInt& rhs);
const UPInt operator +( const UPInt& lhs, const int& rhs);
const UPInt operator +( const int& lhs, const UPInt& rhs);

int main(){

UPInt upi1, upi2;

UPInt upi3 = upi1 + upi2;

// c'tor a temp obj, convers int ->- UPInt
upi3 = upi1 +10;
upi3 = 10+ upi2;


    return 0;
};