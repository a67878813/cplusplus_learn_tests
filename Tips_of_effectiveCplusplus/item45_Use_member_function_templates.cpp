// use member fuction templates to accept "all compatible types."



class Top{};
class Middle: public Top{};
class Bottom:public Middle{};

Top* pt1 = new Middle;
Top* pt2 = new Bottom;
const Top* pct2 = pt1;// implicit convertions


template<typename T>
class SmartPtr{

    public:
    explicit SmartPtr(T* realPtr); //usually initiallized with Raw ptr
    
};







// Templates and Generic Programming


template<typename T>
class SmartPtr1{
    public:
    template<typename U>
    SmartPtr1(const SmartPtr<U>& other)
    : heldPtr(other.get())    // get copy of Raw pointer
    // T*        U*
    // means it is only compileble with compatible types.

    
    { };  // generalized copy c'tor

    T* get() const {return heldPtr;}
private:
    T* heldPtr;     // here hold Raw pointer
};




// member function templates


template<typename T>
class shared_ptr{
public:
    shared_ptr(shared_ptr const& r);  //copy c'tor

    template<typename Y>
    shared_ptr(shared_ptr<Y> const& r); // generic copy c'tor

    shared_ptr& operator=(shared_ptr const& r); //copy assignment

    template<class Y>
        shared_ptr& operator=(shared_ptr<Y> const & r);  //generic copy assignment

    
    T* get() const {return heldPtr;}
private:
    T* heldPtr;     // here hold Raw pointer
};





int main(){
SmartPtr<Top> pt1 = SmartPtr<Middle>(new Middle); //  S<middle > to Sm< Top>

SmartPtr<Top> pt2 = SmartPtr<Bottom>(new Bottom);   // s-Bottom to S-Top

SmartPtr<const Top> pct2 = pt1;    // S-Top to const Top
// SmartPtr<Top> pt3 = SmartPtr<Middle>(new Middle);


    return 0 ;

};



//tips:
    // 

    // if using member templates to generic copy c'tor or generic assignment 
    // you need define normol copy c'tor and copy assignment