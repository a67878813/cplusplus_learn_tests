#include <string>
#include<iostream>
#include <memory>

class Date{};
class Address{};
class PersonImpl;


//example of Interface class
class Person{
public:
    virtual ~Person();
    virtual std::string name() const =0;
    virtual std::string birthDate() const =0;
    virtual std::string address() const =0;

    static std::shared_ptr<Person>
        create(const std::string& name,
            const Date& birthday,
            const Address& addr);
private:
    // std::shared_ptr<PersonImpl> pImpl;    // pointer to implementation class
    //this design typs called pimpl idiom(pointer to implementation)
};

//Person 's derived class
class RealPerson: public Person{
public:
    RealPerson(const std::string& name, const Date& birthday, const Address& addr)
    : theName(name),theBirthDate(birthday),theAddress(addr)
    {}
    ~RealPerson() override= default;
    std::string name() const;
    std::string birthDate() const;
    std::string address() const;
private:
    std::string theName;
    Date theBirthDate;
    Address theAddress;
};


//interface class's example, i.e.
//Person::create
std::shared_ptr<Person>
    Person::create(const std::string& name,
                const Date& birthday,
                const Address& addr)
    {
        return 
            std::shared_ptr<Person>(new RealPerson(name, birthday,addr));
    }

/* class PersonImpl{
public:
    PersonImpl(const std::string& name,
        const Date& birthday,
        const Address& addr);
    std::string name() const;
    std::string birthDate() const;
    std::string address() const;
};


 */



int main()
{
std::string name;
Date dateOfBirth;
Address address;

//create a obj which support Person interface
std::shared_ptr<Person> pp(Person::create(name, dateOfBirth,address));

std::cout << pp->name() 
    <<" was born on "
    << pp->birthDate()
    <<" and now lives at "
    << pp->address()
    << std::endl;
//when pp leaves this area, it will be deleted automatically
};