
class EquipmentPiece {
    public:
    EquipmentPiece( int IDNumber);
};

void test(){
    EquipmentPiece bestPieces[10]; // no matching EquipmentPiece ctors.

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



}