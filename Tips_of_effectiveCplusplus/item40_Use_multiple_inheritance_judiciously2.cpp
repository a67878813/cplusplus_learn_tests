

// multiple inheritance MI
// single inheritance SI


// multiple inheritance coule inheritance more than one same name (e.g. function or typedef etc.)
// that could have some ambiguity.

class File {};
class InputFile:virtual  public File{};   // virtual inheritance , is slower and bigger
class OutputFile: virtual public File{};
class IOFile: public InputFile,
                public OutputFile
        {};







int main(){

    // Mp3Player mp;
    // mp.BorrowableItem::checkOut();//ambiguity

return 0;
};