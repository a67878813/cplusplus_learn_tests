#include <iostream>
#include <cstring>
class String {
public:
    String(const char* initValue = "");
    String(const String& rhs);

    String& operator =(const String& rhs);
    ~String();
    
    const char& operator[](int index) const;
    char& operator[](int index);
private:
    char* data;
    // reference counting
    struct StringValue:public RCObject{
        int refCount;
        char *data;

        StringValue(const char *initValue);
        ~StringValue();    
    };
    StringValue * value;
protected:
    
};
String::StringValue::StringValue(const char* initValue)
    // :refCount(1)
{
    data = new char[strlen(initValue) +1];
    strcpy(data, initValue);
}

String::StringValue::~StringValue()
{
    delete[] data;
}

// String& String::operator =(const String& rhs)
// {
//     if (this == &rhs) return *this;
//     delete [] data;
//     data = new char[strlen(rhs.data) +1];
//     strcpy(data, rhs.data);
//     String(const String& rhs);

//     return *this;
// }


String::String(const char* initValue )
:   value(new StringValue(initValue))
{

}

String::String(const String& rhs)//copy
:value(rhs.value)
{
    ++value->refCount;
}

String::~String()
{
    if( --(value->refCount) ==0) 
        delete value;
}


String& String::operator =(const String& rhs)

{
    if(value ==rhs.value){
        return *this;
    }

    if(--value->refCount ==0){
        delete value;
    }

    value = rhs.value;
    ++value->refCount;

    return *this;

}

//copy-on-write

const char& String::operator[](int index) const
{
    return value->data[index];
}

char& String::operator[](int index)
{
    // if share value
    // create a copy
    if(value->refCount >1){
        -- value->refCount;
        value = new StringValue(value->data);
    }

    //return a reference
    return value->data[index];

}

void test1(){

String a,b,c,d,e;
a=b=c=d=e= "Hello";


}







// reference-counting


//

class RCObject {
public:
    RCObject();
    RCObject(const RCObject& rhs);
    RCObject& operator=(const RCObject& rhs);
    virtual ~RCObject()=0;
    void addReference();
    void removeReference();
    void markUnshareable();
    bool isShareable() const;
    bool isShared() const;
private:
    int refCount;
    bool shareable;
    
protected:
    
};

// RCOpject mush burn in heap
RCObject::RCObject()
:refCount(0), shareable(true){};

RCObject::RCObject(const RCObject& rhs)
:refCount(0), shareable(true){};


RCObject& RCObject::operator=(const RCObject& rhs)
{
    return *this;
}

RCObject::~RCObject(){};
void RCObject::addReference(){
    ++refCount;
}
void RCObject::removeReference()
{ if (--refCount ==0) delete this;}

void RCObject::markUnshareable()
{shareable = false;}

bool RCObject::isShareable() const
{ return shareable ;}

bool RCObject::isShared() const 
{ return refCount >1;}
