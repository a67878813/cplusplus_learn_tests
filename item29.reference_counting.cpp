#include <iostream>
#include <cstring>

//========== self defined smart pointrt
template<class T>
class RCPtr {
public:
    //heap 
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

//ctor
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
template<class T>
T* RCPtr<T>::operator ->() const 
{return  pointee;}
template<class T>
T& RCPtr<T>::operator *()  const
{
    return *(pointee);
}


template<class T>
RCPtr<T>& RCPtr<T>::operator = (const RCPtr<T>& rhs)
{
    if(pointee != rhs.pointee){
        if(pointee) {
            pointee-> removeReference(); 
        }
        pointee = rhs.pointee;
        init();// share or make a copy
    }
    return *this;
}
template<class T>
RCPtr<T>::~RCPtr()
{
    if(pointee) pointee->removeReference();
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
    void addReference();
    void removeReference();
    void markUnshareable();

    bool isShareable() const;
    bool isShared() const;
private:
    int refCount;
    bool shareable;
    
protected:
    RCObject();
    RCObject(const RCObject& rhs);
    RCObject& operator=(const RCObject& rhs);
    virtual ~RCObject()=0;//virtual base
    
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



//  applying  layer

class String {
public:
    String(const char* initValue = "");
    // String(const String& rhs);

    String& operator =(const String& rhs);
    ~String();
    
    //only read
    const char& operator[](int index) const;
    //writeable
    char& operator[](int index);
private:
    // char* data;
    // reference counting
    struct StringValue:public RCObject{
        // int refCount;
        char *data;
        //heap
        StringValue(const char *initValue);
        //should deep copy
        StringValue(const StringValue& rhs);
        void init(const char *initValue);
        ~StringValue();    
    };
    // StringValue * value;

    //smart ptr test
    RCPtr<StringValue> value;

    //some direved class test
    // struct specialStringValue :public StringValue{};
};


// string value
void String::StringValue::init(const char* initValue)
    // :refCount(1)
{
    data = new char[strlen(initValue) +1];
    strcpy(data, initValue);
}

String::StringValue::StringValue(const char *initValue)
{
    init(initValue);
}

// deep copy
String::StringValue::StringValue(const StringValue& rhs)
{
    init(rhs.data);
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


//string ===================
String::String(const char* initValue )
:   value(new StringValue(initValue))
{} // call ctor of RCPtr::RCPtr(StringValue*)

// String::String(const String& rhs)//copy
// :value(rhs.value)
// {
//     ++value->refCount;
// }

// String::~String()
// {
//     if( --(value->refCount) ==0) 
//         delete value;
// }


// String& String::operator =(const String& rhs)

// {
//     if(value ==rhs.value){
//         return *this;
//     }

//     if(--value->refCount ==0){
//         delete value;
//     }

//     value = rhs.value;
//     ++value->refCount;

//     return *this;

// }

//copy-on-write

//read []
const char& String::operator[](int index) const
{
    return value->data[index];
}

//writeable []
char& String::operator[](int index)
{
    // if share value
    // create a copy
    if(value->isShared()){
        value = new StringValue(value->data);
        //call RCPtr::operator = (RCPtr&)
        // lhs sub ; rhs +
        value->markUnshareable();//cause it is writeable
        return value->data[index];

    }

    //return a reference
    return value->data[index];

}
