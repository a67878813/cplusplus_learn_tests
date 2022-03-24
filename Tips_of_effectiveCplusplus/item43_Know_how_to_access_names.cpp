#include <string>
//Know how to access names in templatized base classes.

class CompanyA{
public:
    void sendCleartext(const std::string& msg);
    void sendEncrypted(const std::string& msg);
};

class CompanyB{
public:
    void sendCleartext(const std::string& msg);
    void sendEncrypted(const std::string& msg);
};

class CompanyZ{
public:
    void sendEncrypted(const std::string& msg);
};



class MsgInfo{}; // save messages


template<typename Company>
class MsgSender{
public:
    void sendClear(const MsgInfo& info)
    {
        std::string msg;
        // making information with info

        Company c;
        c.sendCleartext(msg);
    }
    void sendSecret(const MsgInfo& info)
    {
        std::string msg;
        // making information with info

        Company c;
        c.sendEncrypted(msg);
    }
};

template<> //total template specialization
class MsgSender<CompanyZ>{ //if template param is CompanyZ , there are not others param.
    public:
    void sendSecret(const MsgInfo& info)//承诺未被实现
    {}
};


//add some logger
template<typename Company>
class LoggingMsgSender : public MsgSender<Company> {
public:
void sendClearMsg(const MsgInfo& info)
{
    //before logger
    // sendClear(info); //?    if Company == CompanyZ , it is not exist.


    //承诺  baseclass template 的任何特化版本都将支持一般版本所提供的接口
    this->sendClear(info);   // suppose sendClear  inherited.
    using MsgSender<Company>::sendClear;// suppose sendClear in base class
    sendClear(info);

    // explicit qualification
    MsgSender<Company>::sendClear(info); // suppose sendClear was inherited
    //this will close virtual function binding.

    //after loggerj
}
// using MsgSender<Company>::sendClear;// suppose sendClear in base class
};
// when we are in Template C++ from Object Oriented C++, inheritance is not as same as before.




int main(){
LoggingMsgSender<CompanyZ> zMsgSender;
MsgInfo msgData;

zMsgSender.sendClearMsg(msgData);

    return 0;
};

/* 
Tips:
    Factor parameter-independent code out of templates.

    In derived class templates,
        we could use "this->" to refers to base class templates's member name,
        or use explicit baseclass::...
*/