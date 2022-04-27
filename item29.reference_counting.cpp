#include <iostream>
#include <cstring>

//========== self defined smart pointrt
template<class T>
class RCPtr {
public:
    RCPtr(T* realPtr = 0);
    RCPtr (const RCPtr& rhs);
    ~RCPtr();
    RCPtr& operator = (const RCPtr& rhs);
    T* operator ->() const ;
    T& operator*() const;

    // need copy-on-write
    T* operator ->()  ;
    T& operator*() ;

    
private:
    // if there dirived sub_T
    T* pointee; // such as RCObject* pointee
    void init();
    void makeCopy();
};

template<class T>
RCPtr<T>::RCPtr(T* realPtr )
    :pointee(realPtr)// 
{
    init();
}

template<class T>
RCPtr<T>::RCPtr (const RCPtr& rhs)
:pointee(rhs.pointee)
{
    init();
}

template<class T>
void RCPtr<T>:: init()
{
    if(pointee ==nullptr){
        return;

    }
    if (pointee->isShareable() == false){ // if not shareable ,
            // Wrong!! 
        pointee = new T(*pointee);  // make a copy
        /* 
        if there is dirived T    sub_T
        here  could become 

        pointee = new sub_T(*pointee);

        shoud use sub_T 's stor
        which could be assured by
            virtual ctor    

        
        */

    }
    pointee->addReference();
}
template<class T>
void RCPtr<T>::makeCopy()
{
    // copy-on-write
    if(pointee->isShared()){
        /* 
        1.make a temp oldValue pointer
        2. call  -> removeReference() // if delete olds.
        3. make new CountHolder;
        4. make a copy pointee 
        5.call -> addReference()
        */
    }
}
template<class T>
T* RCPtr<T>::operator ->()  
    {makeCopy(); return pointee;}

template<class T>
T& RCPtr<T>::operator *()  
{
    makeCopy(); return *(pointee);
}

void test1(){

String a,b,c,d,e;
a=b=c=d=e= "Hello";


}







// reference-counting


//

//make referenc counting
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





class String {
public:
    String(const char* initValue = "");
    String(const String& rhs);

    String& operator =(const String& rhs);
    ~String();
    
    const char& operator[](int index) const;
    char& operator[](int index);
private:
    // char* data;
    // reference counting
    struct StringValue:public RCObject{
        int refCount;
        char *data;

        StringValue(const char *initValue);
        //should deep copy
        StringValue(const StringValue& rhs);
        ~StringValue();    
    };
    StringValue * value;

    //smart ptr test
    RCPtr<StringValue> value2;

    //some direved class test
    // struct specialStringValue :public StringValue{};
};
String::StringValue::StringValue(const char* initValue)
    // :refCount(1)
{
    data = new char[strlen(initValue) +1];
    strcpy(data, initValue);
}

// deep copy
String::StringValue::StringValue(const StringValue& rhs)
{
    data = new char[strlen(rhs.data)+1];

    strcpy(data, rhs.data);
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
