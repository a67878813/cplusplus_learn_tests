#include <iostream>
#include<memory>

class Mutex{};

void lock(Mutex* pm);
void unlock(Mutex* pm);
void (*unlock2_ptr)(Mutex*);

class Lock{
public:
    explicit
    Lock(Mutex* pm)
        : mutexPtr(pm,unlock)// second parameter is unlock-fucntion.
                            //such method could use default destructor.
    {
        lock(mutexPtr);
    };
    /* ~Lock(){
        unlock(mutexPtr);
    } */
    ~Lock() =default;
private:
    std::shared_ptr<Mutex> mutexPtr;
    Lock(const Lock&);
    Lock& operator=(const Lock&);
};


//when using Lock

Mutex m;
{
Lock m1(&m);//        lock
    //critical section
}// auto unlock


//When there is copy
Lock m11(&m);
Lock m12(m11); 

