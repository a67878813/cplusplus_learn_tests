
// virtual public inheritance
// birtual base class add pointer.

// how the object model effects programs

//
class X{
public:
    virtual ~X() ;
    virtual X foo();
    //
};

X foobar(){
    X xx;
    X* px = new X;

    // foo is virtual function
    xx.foo();
    px->foo();

    delete px;

    return xx;
}

void foobar( X& _result){
    
}