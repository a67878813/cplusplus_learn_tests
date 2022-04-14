//over-eager evaluation

template<class NumericalType>
class DataCollection{
public:
    NumericalType min() const;
    NumericalType max() const;
    NumericalType avg() const;

};

// eager evaluation
// caculate when called

// lazy evaluation 
// return data structure

// over-eager evaluation
// calculate at any time // return fastest


#include <unordered_map>
#include <string>
int findCubicNumber(const std::string& employeeName)
{
    // define static map , to hold < employee name ,  cubicle number >
    using CubicleMap = std::unordered_map<std::string, int>;
    static CubicleMap cubes;

    // try find in cache
    CubicleMap::iterator it = cubes.find(employeeName);

    // if not fine, it == cubes.end()
    // (this is STL standard action)
    // if so , serch number in database , add in cache
    if(it == cubes.end()) {
        int cubicle = // retriv DB's result 
        // looking  for number in database
        cubes[employeeName] = cubicle ; //adding cache
        // map's operator [] always insert
        // if you want to retriv, use map.at()
        return cubicle;

    }

    else {
        // it points to cache
        // *it  is <employee name , cubicle number > pair
        return (*it).second;
                // pair< string , int>
    }
};


template<class T>
T& DynArray<T>::operator [](int index)
{
    if(index <0){
        throw exception;

    }
    if(index > max){
        // call new 
        //index
    }
    return //index_th element of array;
}




template<class T>
T& DynArray2<T>::operator [](int index)
{
    if(index <0){
        throw exception;

    }
    if(index > max){
        // call new 
        // max *2
    }
    return //index_th element of array;
}


