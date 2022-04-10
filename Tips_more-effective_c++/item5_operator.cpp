

#include <iostream>
#include <string>

// bit and    &
// bit or     | 
// bit yihuo   ^ 
// bit not   ~

// bit <<   left trans  
// bit >> right trans


// logic and     &&
//logic or     ||
// logic not    ! 



// <<= 
// >>=
// &=
// ^=
// |=
// condition  ?: X:Y



//implicit conversions


// char -> int 

// short -> double

// some lost information's trans
//  int -> short 
//  double ->char

class Name{
public:
    Name (const std::string& s);  //string ->- name
};

class Rational {
public:
    Rational (int numerator = 0, int denominator =1);  // int ->- Rational

    // operator double() const;  // Rational ->- double   // return double.
    double asDouble() const  ; //Rational ->- double
};


void test(){
    Rational r(1,2);
    double d = 0.5* r;  // r ->- double , and * 0.5 ;

    //
    

    std::cout << r << std::endl;

    std::cout << r.asDouble() << std::endl;
}


/* template<typename T>
class Array {
public:
    Array<T> (int lowBound, int highBound);
    explicit Array<T>  (int size); // it can be implicit trans.

    T& operator [](int index);
}; */



template<typename T>
class Array {
public:
    // add spcific class
    // here is   " proxy classes"
    class ArraySize{
        // it is only used for spicify the size of Array (int)
        public:
        ArraySize(int numElements) : theSize(numElements){}
        int size() const {return theSize;}
        private:
        int theSize;
    };
    Array<T> (int lowBound, int highBound);
    explicit Array<T>  (ArraySize size);  //there is no Array( int)
                                            // there is Array ( ArraySize)
                                                // there is implicit int ->- ArraySize
                                                // implicitly  Array  ( static_cast <ArraySize>(int ))
                                                // ctor success.

    T& operator [](int index);
};


bool operator == ( const Array<int>& lhs, const Array<int>& rhs);

void test2(){
    Array<int> a(10);  
    Array<int> b(10); 

    for (int i=0;i<10;++i)
        if(a ==b[i]) {  // here is   Array<int>    ==   int
                            // implicit  array<int>   ==   static_cast <Array<int> > (int)

                            // compiler can not do that   int ->-ArraySize ->- Array<int> implicitly.
            //fo something
            
        }
        else{
            //do something
            
        
        }
    

    if(a == Array<int>(b[3])){};

    if (a == static_cast< Array <int> >(b[3])  )  {} ;

    if (a == (Array <int> ) b[3]  )  {} ;  //c cast

}



int main()
{
    unsigned int a = 60;    // 60 = 0011 1100
    unsigned int b = 13;    // 13 = 0000  1101
    int c =  0;

    c = a&b;   // 12 = 0000 1100
    std::cout << "c = " << c << std::endl;

    return 0;
}