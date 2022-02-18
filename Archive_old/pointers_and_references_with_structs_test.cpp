#include "source.h"
#include <fstream>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <new>
#include <string>
#include <fstream>
#include <vector>

struct Weapon
{
    int maxAmmo;
    float rateOfFire;
};

Weapon weapon;

int main(){
    Weapon &weaponRef = weapon;
    weaponRef.rateOfFire =1.0;



    Weapon *weaponPtr = &weapon;
    (*weaponPtr).rateOfFire =1.0;
    
    weaponPtr->rateOfFire=1.9;
}