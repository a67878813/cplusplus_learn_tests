

// multiple inheritance MI
// single inheritance SI


// multiple inheritance coule inheritance more than one same name (e.g. function or typedef etc.)
// that could have some ambiguity.

class BorrowableItem{
    public:
    void checkOut();
};

class ElectronicGadget{
    private:
    bool checkOut() const;
};

class Mp3Player:
    public BorrowableItem,
    public ElectronicGadget
    {

    };


int main(){

    Mp3Player mp;
    mp.BorrowableItem::checkOut();//ambiguity

return 0;
};