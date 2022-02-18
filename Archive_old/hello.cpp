#include <cstddef>
#include <cstdlib>
#include <iostream>
#include <string>
#include <iomanip>
// #include <vector>
// #include <thread>
#include <array>

#include <cmath>
#include <random>
#include <ctime>
using namespace std;



// int aaa(int args, char** argv)

void printSquare(bool sqr[][15]);
void printcude(bool sqr[][15][5]);
void printStudent(string *name, int *id, double* GPA);

double fullPrice(double price, double tax=.07);
char getChar();
string* allocateString();
void printMenu();
string capatalize(string &wordToChange){
    for (int i = 0; i < wordToChange.length(); i++)
    {
        wordToChange[i] = toupper(wordToChange[i]);
        
    }
    return wordToChange;
}

bool isPositive(int number){
    if (number<0)
        return false;
    else if (number >=0)
    
        return true;
        
    
    
}

int fivePlusfive(){
    return 5+5;
}

bool isMale(char gender){
    gender = toupper(gender);
    if (gender== 'M')
    {
        return true;
    }
    else if (gender == 'F'){
        return false;
    }
    return false;
}

int prarray(int array[], int& sizeofarray){
    return 0;
}






int main(int argc, char **argv) {
    std::cout << "beggin=====" << std::endl;

    /*
    //region begin
    std::array<int,10> Array1;
    // Array1[1] = 123;
    // std::cout << sizeof(Array1) << std::endl;
    // std::cout << Array1[1] << std::endl;
    // string names[3];
    std::array<std::string,4> names = {"aaa","bbb"};
    names[3] = 's'  ;
    std::cout << sizeof(names) << std::endl;
    for (auto& aname :names)
        std::cout << "- " <<aname << std::endl;

    int Array2D[3][4];
    int numbers[3] = {0,1,2};
    int * numPtr = numbers;
    auto *dPtr = new double;
    auto *flags = new bool[10];
    double *temps = new double[10];
    std::cout << temps << std::endl;
    std::cout << *temps << std::endl;
    std::cout << "++++" << std::endl;
    int *Iptr = nullptr, age = 10l;
    double *Dptr1 = 0, *Dptr2 = nullptr;
    char letter = 'c';
    char *letterPtr = &letter;
    char **pPtr = &letterPtr;
    std::cout << letter << std::endl;
    std::cout << &letterPtr << std::endl;
    std::cout << &pPtr << std::endl;
    letter = 'd';
    *letterPtr = 'f';
    std::cout << "" << std::endl;
    std::cout << letter << std::endl;
    std::cout << &letterPtr << std::endl;
    std::cout << &pPtr << std::endl;
    std::cout << letter << std::endl;
    std::cout << letterPtr << std::endl;
    std::cout << *pPtr << std::endl;
    std::cout << "" << std::endl;
    int size = 100;
    int *IDs[100];
    for (int i = 0; i<size; i++) {
        IDs[i] = new int(i);
        std::cout << "created int " <<  i +1 <<std::endl;
    }
    for (int i = 0; i<size; i++) {
        // IDs[i] = new int(i);
        std::cout << *IDs[i] <<std::endl;
    }

    for (int i = 0; i<size; i++) {
        delete IDs[i];
        IDs[i] = nullptr;
        std::cout << "delete int " <<  i +1 <<std::endl;
    }
    // delete [] IDs;
    double *dangle = new double(5.97);
    delete dangle;
    dangle = nullptr;
    if (dangle!=nullptr){
    std::cout << *dangle << std::endl;
    }
    //regionend
    */
    std::cout.precision(5);
    std::cout << "\x96" << std::endl;
    std::cout << "\0177" << std::endl;
    std::cout << 0x18 << std::endl;
    std::cout << cos(5.544f) << std::endl;
    std::cout << sqrt(5.544f) << std::endl;
    std::cout << sin(1.5f) << std::endl;
    std::cout << log(1.5f) << std::endl;
    std::cout << pow(10,100) << "\0" <<  std::endl;
    std::cout << ceil(1.5f) << "\\" << std::endl;
    std::cout << floor(1.5f) << "\t" << std::endl;
    std::cout << round(1.5f) << "\"" << std::endl;
    std::cout << std::abs(1.5f) << std::endl;
    std::cout << 10%5 << std::endl;
    std::cout << 13% 5 << std::endl;

    std::cout << "printing character in base 10: " << char(68)  
                << "\nPrinting in Base 16: \x44\n" 
                << "Printing Character in base 8 :  \104\n\n"
                                                    << std::endl;
    std::cout << 0x18 << std::endl;
    srand(time(NULL));
    int number = rand();
    number = rand() % 36 +15 ;
    std::cout << number << std::endl;


    std::array<std::string,5> names = {"aaa","bbb","Dina","ABCDEFGHIJKLMNOPQRSTUVWXYZ","abcdefghijklmnopqrstuvwxyz"};
    std::array<int,5> ID = {983333,34234,123123,324234,654454352};

    for (size_t i = 0; i < 5; i++)
    {
        std::cout << left << setw(15) << to_string(ID[i]) + ":  " << right << names[i] << std::endl;
    }
    ; 
    cout<< setprecision(5)<< showpos << showpoint;

    /*for (double i = 0; i < 7; i+= .1)
    {
        cout<< left << setw(20) << "SIN(" +to_string(i) + ")"  << cos(i) << "\n";
    }
    */
    /*char theCharacter = 'Q';
    char *ptr1,*ptr2;
    */
    /*ptr1 = &theCharacter;
    ptr2 = ptr1;
    *ptr1 = 'T';
    // theCharacter = 'T
    std::cout << theCharacter << std::endl;
    */
    double *dangle = new double(5.9);
    cout << &dangle << "\n"<< dangle <<std::endl;
    std::cout << *dangle << std::endl;
    delete dangle;
    cout << &dangle << "\n"<< dangle <<std::endl;
    std::cout << *dangle << std::endl;

    int size = 100;
    auto **IDs = new long double*[size];
    std::cout << "Creating" << std::endl;
    for (size_t i = 0; i <size; i++)
    {
        IDs[i] = new long double(i);
        if (IDs[i] == nullptr)
        {
            std::cout << "out of room" << std::endl;
        }
    }
    std::cout << "Deleting" << std::endl;
    for (size_t i = 0; i < size; i++)
    {
        delete IDs[i];
    }
    delete[]IDs;

    std::cout << "five plus five is " << fivePlusfive()<< std::endl;
    
    string* name = new string("Simon Lewis");
    int id =18;
    int* myID = &id;
    double myGPA = 1.78;
    //char userInput = getChar();
    
    // cin.ignore();
    //cin.ignore();
    // std::cout << userInput << std::endl;
    string* myName;
    myName = allocateString();

    *myName = "harry Potter";
    std::cout << *myName  << std::endl;
    int choice;
    // while(true)
    //     printMenu();
    //     cin >> choice;
    //     //perform menu options 

    // }
    int userNumber;
    // cin >> userNumber;
    // bool check = isPositive(userNumber);
    // cout << check;
    string userName;
    cin >> userName;
    userName = capatalize(userName);
    std::cout << userName << std::endl;

//    printStudent(name, myID,&myGPA);




} //end main()

char getChar(){
    char userChar;
    cin >> userChar;
    return userChar;
}

string* allocateString(){

    return new string;
}

void printMenu(){
    std::cout << "1. deposit\n2.Withdown\n3.Chack Balance\n" << std::endl;
}
