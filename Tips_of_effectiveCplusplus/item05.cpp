#include <iostream>

class Empty {};



// is equal to

class Empty2
{
public:
    Empty2();
    Empty2(Empty2 &&) = default;
    Empty2(const Empty2 &) = default;
    //copy
    //default is doing that copy every
    Empty2 &operator=(Empty2 &&) = default;
    Empty2 &operator=(const Empty2 &) = default;
    virtual ~Empty2(); //default is non-virtual func

private:
    
};

Empty2::Empty2()
{
}

Empty2::~Empty2()
{
}


template<typename T>
class NamedObject
{
public:
    NamedObject(const char* name,const T& value);
    NamedObject(const std::string&  name,const T& value);

    // NamedObject(NamedObject &&)  noexcept = default;
    NamedObject(const NamedObject &) = default;
    // NamedObject &operator=(NamedObject &&)  noexcept = default;
    NamedObject &operator=(const NamedObject &) = default;
    ~NamedObject();

private:
    std::string nameValue;
    T objectValue;
};



NamedObject<int> no1("Smallest prime number", 2);
NamedObject<int> no2(no1); // call copy instructor