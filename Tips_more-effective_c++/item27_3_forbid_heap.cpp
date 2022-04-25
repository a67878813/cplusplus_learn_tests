#include <iostream>

// forbid new in heap
class UPNumber {
public:
    ~UPNumber();

private:
    static void *operator new(size_t size);
    static void  operator delete(void *ptr);

    static void *operator new[](size_t size);
    static void  operator delete[](void *ptr);
};
// 

// char **p = new c ar *[10];



class NonNegativeUPNumber: public UPNumber {
public:
    //un declared " operator new"

    ~NonNegativeUPNumber();
    
private:
};

class Asset  {
public:
    Asset(int);
    ~Asset();
    
private:
    UPNumber value;
};


int main(int argc, const char **argv) {
    // argv[0] = "aaa";
    UPNumber        n1;
    static UPNumber n2;
    UPNumber       *p = new UPNumber; // call private operator new

    NonNegativeUPNumber n11;
    static NonNegativeUPNumber n22;
    NonNegativeUPNumber *pp= new NonNegativeUPNumber;


    Asset *pa = new Asset(100);


    return 0;
}
