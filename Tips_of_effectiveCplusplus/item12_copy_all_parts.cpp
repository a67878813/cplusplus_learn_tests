#include <iostream>
#include <string>


int logCall(std::string);
class Date{};
class Customer{
private:
    std::string name;
    Date lastTransaction;

};


class PriorityCustomer: public Customer{

public:
    PriorityCustomer(const PriorityCustomer& rhs);
    PriorityCustomer& operator=(const PriorityCustomer& rhs);
private:
    int priority;
    int init();//some common processes.
};

PriorityCustomer::PriorityCustomer(const PriorityCustomer& rhs)
    :priority(rhs.priority)
    {
        logCall("PriorityCustomer copy constructor");
    }
PriorityCustomer&
PriorityCustomer::operator=(const PriorityCustomer& rhs){
    logCall("PriorityCustomer copy assignment operatot");
    priority = rhs.priority;
    return *this;
}
//============================
PriorityCustomer::PriorityCustomer(const PriorityCustomer& rhs)
    :Customer(rhs),  //calllll base class 's copy function
                    //in multi inheritance ,call all father's relative function.
    priority(rhs.priority)
    {
        logCall("right version of PriorityCustomer copy constructor");
        init();
    } 
PriorityCustomer&
PriorityCustomer::operator=(const PriorityCustomer &rhs)
{
    logCall("right version of PriorityCustomer copy assignment operator");
    Customer::operator=(rhs);  // call base class's operator=
    priority=rhs.priority;
    init();
    return *this;    //reference type usually  return *this;
}



/* 
copying function should
    1.
    copying all local member-variable
    2.
    call base classes' copying funtion.

*/