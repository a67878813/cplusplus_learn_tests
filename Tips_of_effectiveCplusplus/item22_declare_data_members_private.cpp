#include <iostream>

class AccessLevels{
public:
    int getReadOnly() const { return readOnly;}
    int setReadWrite(int value)  { return readWrite = value;}
    int getReadWrite() const { return readWrite;}
    int setWriteOnly(int value)  { return writeOnly= value;}


private:
    int noAccess;
    int readOnly;
    int readWrite;
    int writeOnly;
};