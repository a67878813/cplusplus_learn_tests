#include <iostream>

// smart pointer 

// clint will get rights below

// Construction and Destruction
// Copyting and Assignment
// Dereferencing


// smart pointers built by templates
// smart pointers is " strongly typed"

// likes
class DataBaseID{};

template<class T>
// T is a pointer's raw type
class DBPtr {
public:
    //if have a dumb pointer then points to it
    DBPtr(T* realPtr =nullptr);
    DBPtr(DataBaseID id );

    DBPtr(const DBPtr& rhs); //copy
    ~DBPtr(); //destroy

    DBPtr& operator=(const DBPtr& rhs); // assignment

    T* operator->() const; // dereference to get a member object of pointer
    T& operator*() const; // dereference 

    // implicit convert
    operator T*() {return pointee;}

    
private:
    T* pointee; // dumb pointer to T
protected:
    
};

// a tuple of database
class Tuple {
public:
    Tuple();
    ~Tuple();
    void displayEditDialog();// a GUI input tuple
    bool isValid() const; // check *this 
    
private:
    
protected:
    
};

//do log entries when T was changed
template<class T>
class LogEntry {
public:
    LogEntry(const T& objectToBeModified); // log a  begin log
    ~LogEntry(); // log a end log
    
private:
    
protected:
    
};

void editTuple(DBPtr<Tuple>& pt)
{
    LogEntry<Tuple> entry(*pt); // do log


    //get some value
    do {
        pt->displayEditDialog();
        /* 
        (pt.operator->()  ) ->displayEditDialog();
        
        */

    } while (pt->isValid() == false);
}

// ========= a possible auto_ptr
template<class T>
class auto_ptr {
    
public:
    auto_ptr(T* ptr = 0) 
        : pointee(ptr){};
    ~auto_ptr(){delete pointee;};
    
    auto_ptr(auto_ptr<T>& rhs); //copy

    auto_ptr<T>& // operator =
        operator=(auto_ptr<T>& rhs) ;    

    T& operator*() const; // dereference 


    // operator ==

    //if dumb ptr is null return nullptr;
    //else return not 0;
    // operator void*();  // implicit convert
    // operator const void*();
    
    //make   if(ptn)     legal 
    explicit operator bool();

    // make if(!ptn) legal
    bool operator!() const ; //return true when ptr to null


private:
T* pointee;
    
protected:
    
};



template<class T>


auto_ptr<T>::auto_ptr(auto_ptr<T>& rhs) // when copy 
{
    pointee = rhs.pointee; //  onership was tranfered to left obj
    rhs.pointee = nullptr; // rhs nolonger own anything.
}

template<class T>
auto_ptr<T>& 
    auto_ptr<T>::operator=(auto_ptr<T>& rhs)  // when assignment
{
    if(this == &rhs)
        return *this;
    
    delete pointee;

    pointee = rhs.pointee;
    rhs.pointee = nullptr;

    return *this;
}


class TreeNode{};

void printTreeNode(std::ostream& s, const auto_ptr<TreeNode>& p)
{s << *p;}
void test_my_autoPtr(){
    
}




//======== if null of SmartPointers

void test54(){
    auto_ptr<TreeNode> ptn;
    if (ptn == 0){

    }
    if(ptn){};
    if(!ptn){};

}


void testinput(){
    std::ifstream inputFile("datafile.dat");//?
    if(inputFile){}
}


class Apple{};
class Orange{};
void test_compair(){
    auto_ptr<Apple> pa;
    auto_ptr<Orange> po;

    if(pa == po){}// grammarly right
}





void test2(){
    auto_ptr<TreeNode> ptn1(new TreeNode);

    auto_ptr<TreeNode> ptn2 = ptn1; // call copy ctor

    auto_ptr<TreeNode> ptn3 ;
    
    // call operator=
    ptn3 = ptn2;
}



void test(){


}

// dereferencing operators
template <class T>
T &SmartPtr<T>::operator*() const {
    // perform "smart pointer " processing;

    return *pointee;
}

// dereferencing operators
template <class T>
T *SmartPtr<T>::operator->() const {
    // perform "smart pointer " processing;

    return pointee;
};

// convert smart pointer to dumb pointer

void normalize(Tuple *pt); // this func using dumb pointer

void test123(){
    DBPtr<Tuple> pt;

    // no matching call
    // template add T*() ; make this func legal
    normalize(pt);

    normalize(&(*pt));
    normalize(&*pt);
    if(pt ==0){};
    if(pt){};
    if(!pt){};
}

void processTuple(DBPtr<Tuple>& pt)
{
    Tuple *rawTuplePtr = pt;

    // use raw tuple ptr
}

class TupleAccessors {
public:
    TupleAccessors(const Tuple *pt);
    ~TupleAccessors();
    
private:
    
protected:
    
};







