
// modle "has-a " or "is-implemented-in-terms-of" through composition.

//composition is relationship between types.

#include <string>
#include <list>


class Address{};
class PhoneNumber{};
class Person{
    public:
    private:
    std::string name;   // composed object
    Address address;
    PhoneNumber voidNumber;
    PhoneNumber faxNumber;
};// has-a relation

// composition // 
    //means layering,
    //  containment
    //aggregation
    //embedding.



//public inheritance == is-a



//composition == has-a or is-implemented-in-terms-of ...


// application domain

// implementation domain // 
            // buffers mutexes  search trees etc.



//wrong
template<typename T>
class Set_wrong : public std::list<T> {};




//is-implemented-in-terms-of
template<class T>
class Set {
public:
    bool member(const T& item) const ;
    void insert(const T& item);
    void remove(const T& item);
    std::size_t size() const;
private:
    std::list<T> rep;  // Set's  data

};

template<typename T>
bool Set<T>::member(const T& item) const{
    return std::find(rep.begin(), rep.end(), item) != rep.end();
}

template<typename T>
void Set<T>::insert(const T& item){
    if (!member(item)) rep.pushj_back(item);
}

template<typename T>
void Set<T>::remove(const T& item){
    typename std::list<T>::iterator it=
        std::find(rep.begin(),rep.end(),item);
    if (it != rep.end())
        rep.erase(it);    
}

template<typename T>
std::size_t Set<T>::size() const{
    return rep.size();
}


/* 
Tips

1.composition's mening is different with public
2. In application domain, composition means han-s.
in implementation domain, composition means is-implemented-in-terms-of.





*/