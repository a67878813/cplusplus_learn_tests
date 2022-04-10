// #include <string>
#include <cstring>
#include <iostream>

void test(){
    char *p;
    // quickly dead , when p!0 is false , there is no call strlen.
    if ((p!=0)  && (strlen(p)>10)) {

    }
}


// if you overloaded operator &&

if (expression1 && expression2) {};

//will be 
// operator && is member function
if (expression1.operator && (expression2)){};

//or 
//operator && is global function
if (operator&&(expression1, expression2)) {};


void reverse(char s[])
{
    for (int i= 0 , j = strlen(s) -1;
        i <j;
        ++i, --j)
        // there is , expression
        /* 
        compiler will do {
            ++i;
            --j;
            return value of --j;

        }
        
        
        */
        {
            int c = s[i];
            s[i] = s[j];
            s[j]= c;
        }
}



/* 
un overloaded  
.   .*   ::  ?:

new  delete sizeof  typeid

static_cast   dynamic_cast   const_cast   reinterpret_cast







*/


/* 
overloadable

operator new        operator delete
operator new[]          operator delete[]

+   -   *   /   %   ^   &   |   ~

!   =   <   >   +=  -=  *=  /=  %=

^=  &=  |=  <<  >>  <<= >>= ==  !=

<=  >=  &&  ||  ++  --  ,   ->* ->

()  []





*/