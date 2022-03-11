#include <string>
#include <memory>

class Date{};
class Address{};
class PersonImpl;
/* 
class Person{
public:
    Person(const std::string& name,
        const Date& birthday,
        const Address& addr);
    std::string name() const;
    std::string birthDate() const;
    std::string address() const;

private:
    std::string theName;
    Date theBirthDate;
    Address theAdderss;
};
 */

class Person{
public:
    Person(const std::string& name,
        const Date& birthday,
        const Address& addr);
    std::string name() const;
    std::string birthDate() const;
    std::string address() const;

private:
    std::shared_ptr<PersonImpl> pImpl;    // pointer to implementation class
    //this design typs called pimpl idiom(pointer to implementation)
};

class PersonImpl{
public:
    PersonImpl(const std::string& name,
        const Date& birthday,
        const Address& addr);
    std::string name() const;
    std::string birthDate() const;
    std::string address() const;
};





Person::Person(const std::string& name, const Date& birthday, const Address& addr)
:pImpl(new PersonImpl(name,birthday,addr)){}

std::string Person::name() const 
{
    return pImpl->name();
}




int main()
{
    int x;
    Person p();   //in java , it actuially 
                //Person* p;

};