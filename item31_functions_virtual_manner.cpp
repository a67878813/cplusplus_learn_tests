#include <iostream>

class GameObject;

class SpaceShip ;
class SpaceStation;
class Asteroid;


void checkForCollision(GameObject& object1, GameObject& object2)
{
    if(theyJestCollided(object1, object2)){
        processCollision(object1,object2);
    }
    else{

    }
}

//============ virtual function + RTTI (runtime type )

class GameObject {
public:
    GameObject();
    virtual ~GameObject() = 0;
    virtual  void collide(GameObject& otherObject) = 0;
    
private:
    
protected:
    
};

class SpaceShip : public GameObject {
public:
    SpaceShip();
    ~SpaceShip();
    virtual void collide(GameObject& otherObject);
    
private:
    
protected:
    
};
class GameObject3;
class CollisionWithUnknowObject{
public:
    CollisionWithUnknowObject(GameObject& whatWeHit);
};
class CollisionWithUnknowObject3{
public:
    CollisionWithUnknowObject3(GameObject3& whatWeHit);
};
// some RTTI method
void SpaceShip::collide(GameObject& otherObject)
{
    const type_info& objectType = typeid(otherObject);
    if (objectType == typeid(SpaceShip)) {
        SpaceShip& ss = static_cast<SpaceShip&>(otherObject);
        //process a ship-ship collision;
    }
    else if(objectType == typeid(SpaceStation)){
        SpaceStation& ss = static_cast<SpaceStation&>(otherObject);
        // ship - station 
    else if(objectType == typeid(Asteroid)){
        Asteroid& a== static_cast<Asteroid&>(otherObject);
        // spaceship- asteroid 
    }
    else{
        throw CollisionWithUnknowObject(otherObject);
    }
    }

}

//only virtual function

class SpaceShip1 ;
class SpaceStation1;
class Asteroid1;

class GameObject1 {
public:
    GameObject1();
    virtual ~GameObject1() = 0;
    virtual  void collide(GameObject1& otherObject) = 0;
    virtual void collide(SpaceShip1& otherObject) =0;
    virtual void collide(SpaceStation1& otherObject) =0;
    virtual void collide(Asteroid1& otherObject) =0;
private:
    
protected:
    
};

class SpaceShip1: public GameObject1{
public:
    virtual void collide(GameObject1& otherObject);
    virtual void collide(SpaceShip1& otherObject);
    virtual void collide(SpaceStation1& otherObject);
    virtual void collide(Asteroid1& otherObject);
};

void SpaceShip1::collide(GameObject1& otherObject)
{
    otherObject.collide(*this);
}
//=============3



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
#include <map>
class SpaceShip3: public GameObject3{
public:
    virtual void collide(GameObject3& otherObject);
    virtual void hitSpaceShip(GameObject3& otherObject);
    virtual void hitSpaceStation(GameObject3& otherObject);
    virtual void hitAsteroid(GameObject3& otherObject);

private:
    using HitFunctionPtr = void (SpaceShip3::*)(GameObject3 &);
    static HitFunctionPtr lookup(const GameObject3& whatWeHit);
    using HitMap = std::map<string, HitFunctionPtr>;
    static HitMap* initializeCollisionMap();
    
};
SpaceShip3::HitFunctionPtr 
    SpaceShip3::lookup(const GameObject3& whatWeHit)
{
    static auto_ptr<HitMap> collisionMap (initializeCollisionMap() );
    auto mapEntry = 
        collisionMap.find(typeid(whatWeHit).name());
    // not find  , mapEntry == collisionMap.end()

    if(mapEntry == collisionMap.end()) return nullptr;

    // find ptr
    return mapEntry->second;

}
SpaceShip3::HitMap * SpaceShip3::initializeCollisionMap()
{
    HitMap *phm = new HitMap;
    (*phm) ["SpaceShip"] = &SpaceShip3::hitSpaceShip;
    (*phm) ["SpaceStation"] = &SpaceShip3::hitSpaceStation;
    (*phm) ["Astroid"] = &SpaceShip3::hitAsteroid;
    return phm;
}



void SpaceShip3::collide(GameObject3& otherObject)
{
    HitFunctionPtr hfp =
        lookup(otherObject); // find caller obj
    if(hfp) {
        (this->*hfp)( otherObject);

    }
    else {
        throw CollisionWithUnknowObject3(otherObject);
    }
}

void SpaceShip3::hitSpaceShip(GameObject3& otherObject)
{
    SpaceShip3& otherShip = 
        dynamic_cast<SpaceShip3&>(otherObject);
    //ship-ship
}
void SpaceShip3::hitSpaceStation(GameObject3& otherObject)
{
    auto  station=
        dynamic_cast<SpaceStation3&>(otherObject);
    //ship-station
}

// init Virtual Fuction Tables



//========= process by non-member function
#include "SpaceShip.h"
#include "SpaceStation.h"
#include "Asteroid.h"
//anonymous namespace
namespace{






}