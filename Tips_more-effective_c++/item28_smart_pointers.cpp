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

class MusicProduct;
class Cassette;
// ========= a possible auto_ptr
template <class T>
class auto_ptr {
public:
    auto_ptr(T *ptr = 0) :
        pointee(ptr){};
    ~auto_ptr() {
        delete pointee;
    };
    // if auto_ptr<musicProduct> has 
            //auto_ptr( auto_ptr<Cassette>& ptr) //
    // auto_ptr( auto_ptr<Cassette>& ptr) ;
    auto_ptr(auto_ptr<T> &rhs); // copy
    // auto_ptr( auto_ptr<Cassette>& ptr) ;
    auto_ptr<T> & // operator =
    operator=(auto_ptr<T> &rhs);
    T &operator*() const; // dereference

    // operator ==

    // if dumb ptr is null return nullptr;
    // else return not 0;
    //  operator void*();  // implicit convert
    //  operator const void*();

    // make   if(ptn)     legal
    explicit operator bool();

    // make if(!ptn) legal
    bool operator!() const; // return true when ptr to null

    //===========================
    // hand write version
    // implicit type convert
    operator auto_ptr<MusicProduct>() {
        return auto_ptr<MusicProduct>(pointee);
    }

    // template  version
    // contain     const
    template <class newType>
    operator auto_ptr<newType>() {
        return auto_ptr<newType>(pointee);
    }
    // No matching conversion for functional-style cast from
    //  'dumbtest *' to 'auto_ptr<MusicProduct>'
                        // initialize ctor
                        // auto_ptr(MusicProduct *ptr = 0)
                        // : pointee(ptr){};
    //   there is no conver of dunbtest* to MusicProduct *
private:
T* pointee;
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

// all clints that has done some tuple
class TupleAccessors {
public:
    // tuple* to TupleAccessors
    TupleAccessors(const Tuple *pt);
    //
    //this to   Tuple();
    // operator Tuple();




    ~TupleAccessors();
private:
    
protected:
    
};

TupleAccessors merge(const TupleAccessors& ta1, 
                const TupleAccessors& ta2);
    

void test33(){
    Tuple *pt1, *pt2;

    merge(pt1,pt2);

    DBPtr<Tuple> ppt1, ppt2;
    merge(ppt1,ppt2);
}

// smart pointers and "inheritance " type convert

// MusicProduct
// cassette     cd

class MusicProduct{
public:
    MusicProduct(const std::string& title);
    virtual void play() const=0;
    virtual void displayTitle() const = 0;
private:
    MusicProduct* pointee;
};

class Cassette:public MusicProduct{
public:
    Cassette(const std::string& title);
    virtual void play() const;
    virtual void displayTitle() const;

private:
    Cassette* pointee;
};
// class auto_ptr<Cassette>{
//     operator auto_ptr<MusicProduct>(){
//         return auto_ptr<MusicProduct>(pointee);
//     }
// }

class CD:public MusicProduct{
public:
    CD(const std::string& title);
    virtual void play() const;
    virtual void displayTitle() const;
private:
    CD* pointee;

};
class dumbtest{};
// template<> 
// class auto_ptr<Cassette>{
//     public:
//     operator auto_ptr<MusicProduct>(){
//         return auto_ptr<MusicProduct>( 
//             auto_ptr<Cassette> pointee);
//     }
// };
void displayAndPlay(const MusicProduct* pmp,int numTimes)
{
    for(int i=1; i<= numTimes; ++i){
        pmp->displayTitle();
        pmp->play();
    }
}
void displayAndPlay(const auto_ptr<MusicProduct>& pmp,int numTimes)
{
    // smart pointer obj to Cassette -------- funMusic
    auto_ptr<Cassette> funMusic(new Cassette("Alapalooza"));
    auto_ptr<CD> nightmareMusic(new CD("Disco ..."));

    displayAndPlay(funMusic, 10); //no matching call
    // compiler need convert auto_ptr<Cassette>   to auto_ptr<MusicProduct>
    /*  
    compiler will do :

    1.looking for class auto-ptr whether has matched operator convert .
    not find any.

    2.looking for member fuction template to initialize, for convert
            find a template getting type of newType
                        template <class newType>
                        operator auto_ptr<newType>() {
                            return auto_ptr<newType>(pointee);
                        }
    3. so initialize this template to: (matched newType = MusicProduct)

                        operator auto_ptr<MusicProduct>(){
                            return auto_ptr<MusicProduct>(pointee);
                        }
                        which is
                        auto_ptr(MusicProduct * ptr)    (c'tor)

    // make some func code like:
                                        // implicit convert to auto_ptr<MusicProduct>    
        auto_ptr<Cassette>::operator auto_ptr<MusicProduct>(){
            return auto_ptr<MusicProduct>(pointee);
        }

    4. for compile , it must legal that (dumb T pointer) pointee convert to
        (MusicProduct *)   (this is auto_ptr<MusicProduct> 's initialized c'tor)
    5. which is legal.  could be compiled
    6. success implicit convert [auto_ptr<direved_class>  ,  to auto_ptr<base_class>]
    
    */







    displayAndPlay(nightmareMusic, 0);
    auto_ptr<dumbtest> fff(new dumbtest);

    // error message displayed on template<  >
    // displayAndPlay(fff, 10);// wrong??? raw pointer has no inheritance
    //
}


void test_music(){
    //dump pointer virsion
    Cassette *funMusic = new Cassette("Alapalooza");
    CD* nightmareMusic = new CD("Disco Hits of the 70s");
    displayAndPlay(funMusic, 10);
    displayAndPlay(nightmareMusic, 0);


}

void test_music2(){
    // smart pointer obj to Cassette -------- funMusic
    auto_ptr<Cassette> funMusic(new Cassette("Alapalooza"));
    auto_ptr<CD> nightmareMusic(new CD("Disco ..."));

    displayAndPlay(funMusic, 10); //no matching call
    displayAndPlay(nightmareMusic, 0);
    //compiler cannot convert 
        // auto-ptr<CD> || <Cassette> ->> to autoptr<MusicProduct>
    
    // compiler see 3 differect classes
}




// class musicProduct

//class Cassette    class CD
//class CasSingle

class CasSingle:public Cassette{
public:
    CasSingle(const std::string& title);
    virtual void play() const;
    virtual void displayTitle() const;
private:
    CasSingle* pointee;

};




//there is ambiguous
void displayAndPlay(const auto_ptr<Cassette>& pmp,int numTimes);

void test3334(){
    auto_ptr<CasSingle> dumbMusic(new CasSingle("Achy breaky Heart"));
    displayAndPlay(dumbMusic, 1)    ;
}










//==========================

template<class T>
class SmartPtrToConst{
public:

protected:
    union{
        const T* constPointee; // for SmartPtrToConst
        T* pointee;// for SmartPtr
    };
};

template<class T>
class SmartPtr:public SmartPtrToConst<T> {

};

// class CD;
void test5(){
    SmartPtr<CD> pCD = new CD("famous move");

    SmartPtrToConst<CD> pConstCD = pCD;

}