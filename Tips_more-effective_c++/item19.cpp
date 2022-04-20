

#include <iostream>
#include <string>
#include <iomanip>

template<class T>
void swap( T& object1, T& object2)
{
    T temp = object1;
    object1 = object2;
    object2 = temp;
}

size_t countChar(const std::string str, char ch);

void uppercasify( std::string& str);
        // reference-to -non-const
        //  forbid implicit transform

class Number{};
const Number operator+( const Number& lhs, const Number& rhs);
        // this func return a anonymous obj.
        // there are c'tor d'tor 's costs.
const Number operator+=();


int main(){

char buffer[100];
char c;

// read char && string, using setw

std::cin >> c>> std::setw(100)>> buffer;

std::cout << "there are " << countChar(buffer, c)
                            // here call std::string ctor , make a anonymous obj
                            // implicit trans occurs on &-to-const || by-value
    << " occurrences of the character " << c
    << " in " << buffer << std::endl;



char subtleBookPlug[] = "Effective C++";
uppercasify(subtleBookPlug);


return 0;

};