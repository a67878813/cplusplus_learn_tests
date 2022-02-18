#include "source.h"
#include <fstream>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>

struct Ship
{
    std::string ShipName;
    int NumAAGuns =4;
    int NumCannons =4;
    int NumMissiles;
    int NumTorpedos;
    bool IsAnAircraftCarrier;
    int NumJets;
    int NumHellicopters;
    

};
struct Rectangle
{
    double length = 1.0;
    double width = 1.0;
};

struct Vector3D
{


    float x;
    float y;
    float z;
};

Vector3D CreateUnitVector(){
    Vector3D unitVector{1.0,1.0,1.0};
    return unitVector;
}

struct Employee
{
    short employeeID;
    int employeeAge;
    double employeeWage;
};
struct Compny
{
    
    Employee CEO;
    int numEmployees;

};

void PrintRectangleInfo(Rectangle rectangle){
    std::cout << "length of the rectangle ="<< rectangle.length << std::endl;
    std::cout << "width of the rectangle = "<< rectangle.width << std::endl;
}
int main(){
    


    Ship tttttest {"INS Vikrant",4,0,0,0,true,6,1};
    Ship playerShip={"INS Vikrant",4,0,0,0,true,6,1};
    playerShip.IsAnAircraftCarrier =true;
    playerShip.ShipName = "INS Vikrant";
    playerShip.NumAAGuns =4;
    playerShip.NumJets = 6;
    playerShip.NumHellicopters =1;
    
    Ship alliedShip;
    alliedShip.IsAnAircraftCarrier = false;
    alliedShip.ShipName = "INS Brahmputra";
    alliedShip.NumAAGuns =1;
    alliedShip.NumMissiles = 2;
    alliedShip.NumTorpedos =2;

    if (playerShip.IsAnAircraftCarrier)
    {
        std::cout << playerShip.ShipName<< "is an aircraft carrier!" << std::endl;
    }

    Rectangle rec_1{100,50.0};
    Rectangle rec_2{200.0,150.0};

    PrintRectangleInfo(rec_1);
    
    Vector3D unitVector = CreateUnitVector();

    if (unitVector.x == 1.0 && unitVector.y == 1.0 && unitVector.z ==1.0)
    {
        std::cout << "It is a unit vector!" << std::endl;
    }
    else
    {
        std::cout << "It's not a unit Vector!" << std::endl;
    }

    extern Compny xyzCompany;
    xyzCompany = {  {1,45,100000} , 15};
    
    std::cout << "The ceo earns around"<<
    xyzCompany.CEO.employeeWage
    << std::endl;

    std::cout << sizeof(Employee) << std::endl;
    return 0;
}