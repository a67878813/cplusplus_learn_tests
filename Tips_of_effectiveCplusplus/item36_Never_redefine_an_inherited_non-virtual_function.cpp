
class B{
    public:
    void mf();
};

class D: public  B {
    public:
    void mf(); // hides B::mf
};


int main(){
D x;

B* pB = &x;// get a pointer to x
pB->mf(); // call mf via this pointer



D* pD = &x;
pD->mf(); //call mf through pD



pB->mf();  // call B::mf
pD->mf(); //call D::mf    

};


