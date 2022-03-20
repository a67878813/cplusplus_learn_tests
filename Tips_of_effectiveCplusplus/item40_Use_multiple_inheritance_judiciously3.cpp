

// multiple inheritance MI
// single inheritance SI


// multiple inheritance coule inheritance more than one same name (e.g. function or typedef etc.)
// that could have some ambiguity.
#include <tr1/memory>
#include <string>
class IPerson{
    public:
    virtual ~IPerson();
    virtual std::string name() const = 0;
    virtual std::string birthDate() const =0;
};
class DatabaseID {};

// IPerson* makePerson(DatabaseID& dbid) {return 0};
std::tr1::shared_ptr<IPerson> makePerson(DatabaseID personIdentifier);

DatabaseID askUserForDatabaseID();
DatabaseID id(askUserForDatabaseID());

std::tr1::shared_ptr<IPerson> pp (makePerson(id));

#include <cstring>

class PersonInfo{
public:
    explicit PersonInfo(DatabaseID pid);
    virtual ~PersonInfo();
    virtual const char* theName() const;
    virtual const char* theBirthDate() const;
private:
    virtual const char* valueDelimOpen() const;
    virtual const char* valueDelimClose() const;


};
const char* PersonInfo::valueDelimOpen() const{
    return "[";
}
const char* PersonInfo::valueDelimClose() const{
    return "]";
}
const char* PersonInfo::theName() const{
    //buffer to return
    static char value[100];
    std::strcpy(value, valueDelimOpen());
    // add name

    std::strcat(value, valueDelimClose());
    return value;
}




int main(){

    // Mp3Player mp;
    // mp.BorrowableItem::checkOut();//ambiguity

return 0;
};