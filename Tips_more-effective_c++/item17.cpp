// consider using lazy evaluation


//Reference Counting

#include <iostream>
class String{};

void test(){
String s1 = "Hello";
String s2 = s1; // call string:: copy constructor
//eager evaluation
std::cout << s1 << std::endl;
std::cout << s2 << std::endl;
}

void test2(){


String s = "homer's Iliad";  // suppose s is reference-counted string

std::cout << s[3] << std::endl; // call operator [] to read s[3]
s[3] = 'x'; // call operator[] to write





}

// lazy fetching 
#include <string>
// class LargeObject{
// public:
//     using ObjectID =size_t;
//     LargeObject(ObjectID id);  // GET OBJ FROM HDD
//     const std::string& field1() const;
//     int field2() const ;
//     double field3() const;
//     const std::string& field4() const;
//     const std::string& field5() const;

// };

void restoreAndProcessObject(ObjectID id)
{
    LargeObject object(id);

    if (object.field2() ==0) {
        std::cout << "Object" << id << ": null field2.\n"<< std::endl;
    }
}

// demand-paged initial
class ObjectID{};


class LargeObject {
public:
    LargeObject(ObjectID id);
    const std::string& field1() const;
    int field2() const;
    double field3() const;
    const std::string& field4() const;

private:
    ObjectID oid;
    // keyword mutable : means it could be changed in any member functions(include const member-functions)
    mutable std::string * field1Value;
    mutable int * field2Value;
    mutable double * field3Value;
    mutable std::string * field4Value;
};

LargeObject::LargeObject(ObjectID id)
:oid(id), field1Value(0), field2Value(0), field3Value(0),field4Value(0)
// ctor' initalize pointers to null // means data has not been read.
{}

const std::string& LargeObject::field1() const
{
    if(field1Value == 0){
        //read the data for field 1 from the database 
        // 
        // and make field1Value point to it;
    }

    return *field1Value;//return value
}



//lazy Expression Evaluation


template<typename T>
class Matrix {};  // homogeneous matrix

Matrix<int> m1(1000,1000);
Matrix<int> m2(1000,1000);

Matrix<int> m3 = m1 + m2;

std::cout << m3[4] << std::endl; // m3  's 4th row
