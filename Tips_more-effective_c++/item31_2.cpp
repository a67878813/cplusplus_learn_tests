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

// if add new sub class
class Satellite3: public GameObject3{};



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
    // static init()
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

// dynamic collision functions' class
class CollisionMap {
public:
    using HitFunctionPtr = void (*)(GameObject3&, GameObject3&);

    HitFunctionPtr lookup(const string& type1,const string& type2);

    void addEntry(const string& type1, 
                    const string& type2,
                    HitFunctionPtr collisionFunction,
                    bool symmetric = true);
    void removeEntry(const string& type1,
                    const string& type2);

    static CollisionMap& theCollisionMap();
    
private:
    //only one map
    CollisionMap();
    CollisionMap(const CollisionMap&);
    ~CollisionMap();
    
protected:
    
};
// method 2
// namespace{
void shipAsteroid22(GameObject3& spaceShip, GameObject3& asteroid);
void shipStation22(GameObject3& spaceShip, GameObject3& spaceStation);
void asteroidStation22(GameObject3& asteroid, GameObject3& SpaceStation);

//add some new_process collision func
void satelliteShip33(GameObject3& satellite, GameObject3& spaceShip);
void satelliteAsteroid33(GameObject3& satellite, GameObject3& asteroid);
void satelliteStation33(GameObject3& satellite, GameObject3& spaceStation);
// }

// should ensure added before usage
void test2(){
    CollisionMap::theCollisionMap().addEntry("SpaceShip3", "Asteroid3", &shipAsteroid22);
    CollisionMap::theCollisionMap().addEntry("SpaceShip3", "SpaceStation3", &shipStation22);
    CollisionMap::theCollisionMap().addEntry("Asteroid3", "SpaceStation3", &asteroidStation22);
    //add here
    CollisionMap::theCollisionMap().addEntry("Satellite3", "SpaceShip3", &satelliteShip33);
    CollisionMap::theCollisionMap().addEntry("Satellite3", "Asteroid3", &satelliteAsteroid33);
    CollisionMap::theCollisionMap().addEntry("Satellite3", "SpaceStation3", &satelliteStation33);
}


// register class
class RegisterCollisionFunction {
public:
    RegisterCollisionFunction(
        const string& type1,
        const string& type2,
        CollisionMap::HitFunctionPtr collisionFunction,
        bool symmetric = true
        ){
        CollisionMap::theCollisionMap().addEntry(type1,type2,collisionFunction,symmetric);
    };
    static void batch_add(){
        test2();
    }
    ~RegisterCollisionFunction();
};
//===global ctored befor main()
RegisterCollisionFunction cf1("SpaceShip3", "Asteroid3", &shipAsteroid22);
RegisterCollisionFunction cf2("SpaceShip3", "SpaceStation3", &shipStation22);
RegisterCollisionFunction cf3("Asteroid3", "SpaceStation3", &asteroidStation22);

//or add it to here
RegisterCollisionFunction cf4("Satellite3", "SpaceShip3", &satelliteShip33);
RegisterCollisionFunction cf5("Satellite3", "Asteroid3", &satelliteAsteroid33);
RegisterCollisionFunction cf6("Satellite3", "SpaceStation3", &satelliteStation33);


int main()
{
    return 0;
}