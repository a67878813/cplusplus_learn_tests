#include <iostream>

typedef std::string AddressLines[4];    //c-array






int main(){
    std::string* stringPtr1 = new std::string;
    std::string* stringPtr2 = new std::string[100];
        //to use std::vector<std::string>(100) may be better;

    delete stringPtr1;
    delete[] stringPtr2;




    std::string* pal = new AddressLines;    // return string*  /// like new string[4]
                                                //should use delete []
    // delete pal; //wrong
    delete [] pal;
    return 0;
}
//tip:
// if there is [] in new; should also be there  [] in delete.