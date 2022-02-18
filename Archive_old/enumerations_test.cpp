#include "source.h"
#include <fstream>
#include <cstdint>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

enum Weapon
{
    WEAPON_MISSILE = -5,
    WEAPON_TORPEDO,
    WEAPON_CANNON,
    WEAPON_ANTIAIRCRAFIGUM= 5,
    WEAPON_RAILGUN,
};

enum wapons2
{
    WEAPON_BOFORS,
    // WEAPON_TORPEDO,
    
    
};
enum class WEAAAA{
    MISSS,
    HNFJKD,
    SDNMD,
};
void PrintWeaponName(Weapon weapon){

    switch (weapon)
    {
    case WEAPON_MISSILE:
        std::cout << "Missile activated!" << std::endl;
        break;
    case WEAPON_TORPEDO:
        std::cout << "Torpedo activated!" << std::endl;
        break;
    case WEAPON_CANNON:
        std::cout << "cannons activated!" << std::endl;
        break;       
    default:
        break;
    }
    
}

int main() {

    Weapon missile_1 = WEAPON_MISSILE;
    Weapon torpedo(WEAPON_TORPEDO);
    Weapon cannon {WEAPON_CANNON};

    std::cout << torpedo << std::endl;
    std::cout << cannon << std::endl;

    PrintWeaponName(missile_1);
    return 0;
}