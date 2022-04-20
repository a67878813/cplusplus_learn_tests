// pay attention to compiler warnings.

//warning
//error

class B {
    public:
    virtual void f() const;
};

class D : public B {
    public:
    // using B::f;
    virtual void f( ) override;
};

int main(){
    return 0;
};