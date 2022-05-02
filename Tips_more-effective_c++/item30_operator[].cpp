#include <iostream>

//proxy class



/* 
read   --- rvalue usages
write   --- lvalue usages


lvalue means operator = 's left hand side
rvalue means ='s right hand side


    lhs = rhs
    write  = read 

    lvalue (changeable)
    rvalue (unchangeable)

*/
template<class T>
class RCPtr{
public:
    RCPtr(T* realPtr = 0);
    const T* operator ->() const ;
    const T& operator*() const;
    // need copy-on-write
    T* operator ->()  ;
    T& operator*() ;
private:
    T* pointee;
};

struct StringValue{
    char* data;
};

class String{
public:
    // String(char[]);
    class CharProxy{
    public:
        CharProxy(String& str, int index);
        // at lhs (lvalue usages)
        CharProxy& operator= (const CharProxy& ths);
        CharProxy& operator=(char c);

        // at rhs (rvalue usages)
        operator char() const;// return a char (by-value)
        // operator char&();
        // operator const String()const;

        char* operator&();  // & overload
        const char* operator&() const;
    private:
        String& theString;
        int charIndex;


    };

    // operator[] returning CharProxy object
    const CharProxy
        operator[](int index) const ; 
    CharProxy
        operator[](int index) ; 
    
    friend class CharProxy;

private:
    //smart pointer
    RCPtr<StringValue> value;

};


String::CharProxy::CharProxy(String& str, int index)
:theString(str), charIndex(index){};

//rvalue usage , read 
String::CharProxy::operator char() const 
{
    //                value is String's private
    // String should add " friend class CharProxy"
    return theString.value->data[charIndex];
};

String::CharProxy& String::CharProxy::operator=(char c)
{
    if(theString.value->isShared()){
        theString.value = new StringValue(theString.value->data);
    }
    theString.value->data[charIndex] = c;
    return *this;
};

// return const CharProxy, this could not be lhs of operator=
// can not be assign
// only readable
const String::CharProxy String::operator[](int index) const 
{
    return CharProxy(const_cast<String&>(*this), index);
}

String::CharProxy String::operator[](int index) 
{
    return CharProxy(*this, index);
}

//as lvalue ,writable 
String::CharProxy&
    String::CharProxy::operator = (const CharProxy&rhs)
{
    //if shared a real value
    // make a copy
    if (theString.value->isShared()){
        theString.value = new StringValue(theString.value->data);
    }
    //assignment to *this   ("this" is  a String* type)
    theString.value->data[charIndex] = 
        rhs.theString.value->data[rhs.charIndex];
    
    return *this;
}

const char* String::CharProxy::operator&()  const // & overload
{
    return *(theString.value->data[charIndex]);
}
char* String::CharProxy::operator&()  
{
    if(theString.value->isShared()){// if shared make copy
        theString.value = new StringValue(theString.value->data);
    }
    // unknow clint's behavior
    // make StringValue obj unShareable
    theString.value->markUnshareable();

    return *(theString.value->data[charIndex]);
}


void test(){
String s1, s2;

// CharProxy to char , call String::CharProxy::operator char();
// rvalue usage
std::cout << s1[5]; //read s1

s2[5] = 'x';  //write s2
/* 
CharProxy  = 

call CharProxy::operator =
this CharProxy as a lvalue

*/
s1[3] = s2[8]; // write s1, read s2


String ss1 = "asd";


}





template<class T>
class Proxy2:public T{
    Proxy2(Array<T>& array, int index);

};

template<class T>
class Array{
public:
    
    class Proxy  {
    public:
        Proxy(Array<T>& array, int index);
        Proxy& operator=(const T& rhs);
        operator T() const;
        operator T();
        
        // or manual T's member-functions
        T* pointer;

    };
    const Proxy operator[](int index) const;
    Proxy operator[](int index);

};


// void test3(){
//     Array<int> intArray;
//     intArray[5] = 22;
//     // need manual overload relative operator
//     intArray[5] += 22;
//     intArray[5] ++;


// }


class Rational {
public:
    Rational(int numarator = 0, int denominator = 1);
    ~Rational();
    int numerator() const;
    int denominator() const;
    
private:
    
protected:
    
};

void test4(){

    Array<Rational> array;
    // u must overload every Raional's member functions
    std::cout << array[4].numerator() << std::endl;
    int denom = array[22].denominator();
}

void swap(char& a,char& b);
void test5(){
    String s = "+C+";
    swap(s[0],s[1]);

}


/* 
proxy classes advantages:
1. distinguish read ||write
            (lvalue  rvalue)
2.multi dimention array

3. restrain implicit convert

4.normally could sustitute original obj.

disadvantages:
1. restrain implicit convert
2. temp obj need ctoring and dtoring
3. make more complexity
        more difficult to design accomplish retrive mantainance
4. proxy obj changes semantic
*/
