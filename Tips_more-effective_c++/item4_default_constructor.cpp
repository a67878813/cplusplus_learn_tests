
// when there  isn't default constructor
class EquipmentPiece {

    public:
    EquipmentPiece( int IDNumber);
};

void test(){
    EquipmentPiece bestPieces[10]; // no matching EquipmentPiece ctors.   // because lack default ctor. 

    EquipmentPiece* pbestPieces = new EquipmentPiece[10];// other problems.



    //solution 1
    // non-heap array
    int ID1,ID2;
    EquipmentPiece bestPieces1[] = {
        EquipmentPiece(ID1),
        EquipmentPiece(ID2),

    };

    //solution 2
    // pointer array
    typedef EquipmentPiece* PEP  ; // pointer of EquipemtnPiece

    PEP bestPieces2[10];   // do not call ctor;
    PEP *bestPieces3 = new PEP[10];

    for (int i =0; i <10; ++i)
        bestPieces2[i] = new EquipmentPiece( __id_number);

    // malloc raw memory   // raw_mem pointer
    void *rawMemory =  operator new[] ( 10* sizeof(EquipmentPiece));

    EquipmentPiece*  bestPieces5  = static_cast<EquipmentPiece*> (rawMemory);

    
    //      placement new
    //   
    for (int i=0; i<10; ++i)
        new (&bestPieces5[i]) EquipmentPiece( _ID_number);
    

    //  dtor bestPieces
    for(int i =9; i>=10; --i)
        bestPieces[i].~EquipmentPiece();
    
    // release    raw memory
    operator delete[](rawMemory); //delete void*

    // delete[](rawMemory);   //undefined action.
                            // cause besetPieces is not from new[] operator
}


//templates need default c'tor

//a  Array class 's template

template<typename T>
class Array{
public:
    Array(int size);

private:
    T* data;

};

template<typename T>
Array<T>::Array(int size)
{
    data = new T[size];    // in c-array , every element will call T::T();  (default ctor)
}




class EquipmentPiece2 {
public:
    EquipmentPiece2(int IDNumber = UNSPECIFIED);    
private:
    static const int UNSPECIFIED;

};


void test3(){
    EquipmentPiece2 e;
};

/* 
Tips:
    when there is no default c'tor, there is time efficient & space efficient.





*/