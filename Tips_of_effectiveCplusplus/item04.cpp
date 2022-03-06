#include <iostream>
#include <list>

class PhoneNumber{...};
class ABEntry{
public:
    ABEntry();
    ABEntry(const std::string& name, const std::string& address, const std::list<PhoneNumber>& phones);
    //     :theName(name),
    //     theAddress(address),
    //     thePhones(phones),
    //     numTimesConsulted(0)// initializations
    //     {};
private:
    std::string theName;
    std::string theAddress;
    std::list<PhoneNumber> thePhones;
    int numTimesConsulted;
};


ABEntry::ABEntry(const std::string& name, const std::string& address, const std::list<PhoneNumber>& phones)
        :theName(name),
        theAddress(address),
        thePhones(phones),
        numTimesConsulted(0)// initializations
{
    theAddress = address; //assignments
};

ABEntry::ABEntry()
        :theName(),
        theAddress(),
        thePhones(),
        numTimesConsulted(0)// initializations
{
    // theAddress = ; //assignments
};

/*  
c++ initialization order
base classes < derived classes

follow declaration's order,no matter what's order in Member initialization list

*/

/* 
Non-local static object
*/
//using reference-returning functions 

//uncertainty when using multithreading obj.
class FileSystem{};
FileSystem& tfs(){
    static FileSystem fs;
    return fs;
};
class Directory{};
Directory::Directory(params){
    std::size_t disks = tfs().numDisks();

};
Directory& tempDir(){
    static Directory td;
    return td;
};
