#include <iostream>
#include <map>
#include <string>
#include <utility>

#include <memory>
using std::string;


class SpaceShip3 ;
class SpaceStation3;
class Asteroid3;

class GameObject3 {
public:
    GameObject3();
    virtual ~GameObject3() = 0;
private:
    
protected:
    
};
class SpaceStation3 : public GameObject3 {};
class Asteroid3 : public GameObject3 {};
class SpaceShip3: public GameObject3{
public:
    // virtual void collide(GameObject3& otherObject);
    // virtual void hitSpaceShip(GameObject3& otherObject);
    // virtual void hitSpaceStation(GameObject3& otherObject);
    // virtual void hitAsteroid(GameObject3& otherObject);

private:
    // using HitFunctionPtr = void (SpaceShip3::*)(GameObject3&);
    // static HitFunctionPtr lookup(const GameObject3& whatWeHit);
    // using HitMap = std::map<string, HitFunctionPtr>;
    // static HitMap* initializeCollisionMap();
    
};
// SpaceShip3::HitFunctionPtr 
//     SpaceShip3::lookup(const GameObject3& whatWeHit)
// {
//     static std::unique_ptr<HitMap> collisionMap (initializeCollisionMap() );
//     auto mapEntry = 
//         collisionMap->find(typeid(whatWeHit).name());
//     // not find  , mapEntry == collisionMap.end()

//     if(mapEntry == collisionMap->end()) return nullptr;

//     // find ptr
//     return mapEntry->second;

// }
// SpaceShip3::HitMap * SpaceShip3::initializeCollisionMap()
// {
//     HitMap *phm = new HitMap;
//     (*phm) ["SpaceShip"] = &SpaceShip3::hitSpaceShip;
//     (*phm) ["SpaceStation"] = &SpaceShip3::hitSpaceStation;
//     (*phm) ["Astroid"] = &SpaceShip3::hitAsteroid;
//     return phm;
// }



// void SpaceShip3::collide(GameObject3& otherObject)
// {
//     HitFunctionPtr hfp =
//         lookup(otherObject); // find caller obj
//     if(hfp) {
//         (this->*hfp)( otherObject);

//     }
//     else {
//         throw CollisionWithUnknowObject3(otherObject);
//     }
// }

// void SpaceShip3::hitSpaceShip(GameObject3& otherObject)
// {
//     SpaceShip3& otherShip = 
//         dynamic_cast<SpaceShip3&>(otherObject);
//     //ship-ship
// }
// void SpaceShip3::hitSpaceStation(GameObject3& otherObject)
// {
//     auto  station=
//         dynamic_cast<SpaceStation3&>(otherObject);
//     //ship-station
// }


//========= process by non-member function
// some pseudo head files
// #include "SpaceShip.h"
// #include "SpaceStation.h"
// #include "Asteroid.h"

//anonymous namespace
//collision proccessing functions
namespace{

using std::string;
void shipAsteroid(GameObject3& spaceShip, GameObject3& asteroid);
void shipStation(GameObject3& spaceShip, GameObject3& spaceStation);
void asteroidStation(GameObject3& asteroid, GameObject3& SpaceStation);
//... if there are new subclasses...

// sub process functions, for implement symmertry

inline void asteroidShip(GameObject3& asteroid, GameObject3& spaceShip){
    shipAsteroid(spaceShip,asteroid);
};
inline void stationShip(GameObject3& spaceStation, GameObject3& spaceShip){
    shipStation(spaceShip, spaceStation);
};
inline void stationAsteroid(GameObject3& spaceStation, GameObject3& asteroid){
    asteroidStation(asteroid, spaceStation);
};

using HitFunctionPtr = void (*)(GameObject3&, GameObject3&);

// map < pair<string, string> ,    *Ptr>
using HitMap = std::map< std::pair<string, string>, HitFunctionPtr>;

std::pair<string, string> makeStringPair(const char *s1, const char*s2);

HitMap* initializeCollisionMap();

HitFunctionPtr lookup(const string& class1, const string& class2);

class UnknownCollision{
public:
    UnknownCollision(GameObject3& o1, GameObject3& o2 );
};

};
// namespace end

void processCollision(GameObject3& object1, GameObject3& object2)
{
    HitFunctionPtr phf = lookup(typeid(object1).name(), 
                            typeid(object2).name());
    if (phf) {
        phf(object1,object2);
    }
    else {
        throw UnknownCollision(object1, object2);
    }
}

namespace{
    std::pair<string,string> makeStringPair(const char *s1, const char * s2)
    {
        // return {s1,s2};
        // return std::make_pair(s1,s2);
        return std::pair<string,string>(s1, s2);
    }
}

namespace{
    // using HitMap = std::map< std::pair<string, string>, HitFunctionPtr>;
    HitMap* initializeCollisionMap()
    {
        auto *phm = new HitMap;
        (*phm)[ makeStringPair("SpaceShip","Asteroid")] =
            &shipAsteroid;
        (*phm)[ makeStringPair("SpaceShip","SpaceStation")] =
            &shipStation;
        //...
        //... if there are new subclasses...
        return phm;

    }
}

namespace{
HitFunctionPtr lookup(const string& class1, const string& class2)
{
// using HitMap = std::map< std::pair<string, string>, HitFunctionPtr>;

    static std::unique_ptr<HitMap>
        collisionMap(initializeCollisionMap());
    
    auto mapEntry=
        collisionMap->find(make_pair(class1, class2));
        // or
      //collisionMap->find(std::pair<string,string>(class1, class2));
        /* 
        make_pair unnecessary type codes.
        */

    if (mapEntry == collisionMap->end()) return 0;

    // return HitFunctionPtr
    // return (*mapEntry).second;
    return mapEntry->second;
}

}

