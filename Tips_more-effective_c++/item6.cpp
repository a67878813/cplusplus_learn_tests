
class UPInt{
public:
    UPInt& operator++();
    const UPInt operator++(int);

    UPInt& operator--();
    const UPInt operator--(int);

    UPInt& operator +=(int);

};

// increment and fetch)
UPInt& UPInt::operator++(){   // ++i
    *this +=1; // increment 
    return *this; //fetch
}

const UPInt UPInt::operator++(int ){   // i++
    UPInt oldValue = *this; // fetch
    ++(*this);  // increment
    return oldValue;
}

void test(){
    UPInt i;


    ++i;   // call i.operator ++();
    i++;  // call i.operator ++(0);

    --i; // call i.operator --();
    i--; // call i.operator --(0);

    // i++++;

}