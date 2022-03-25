// #include <type_traits>
#include <iterator>
#include <typeinfo>
#include <iostream>

// WRONG!!
//verify in running
template<typename IterT, typename DistT>
void advance_WRONG (IterT& iter, DistT d){
    if(typeid(typename std::iterator_traits<IterT>::iterator_category)  == 
        typeid(std::random_access_iterator_tag) )
        {
            
        }
};


/* 
USING methods

 */




//overload
// verify on compile
template<typename IterT, typename DistT>
void doAdvance(IterT& iter, DistT d,
    std::random_access_iterator_tag){
        std::cout << "random_access_iterator_tag" << std::endl;
        iter +=d;
    };   //for random access iterator

template<typename IterT, typename DistT>
void doAdvance(IterT& iter, DistT d,
    std::input_iterator_tag){
        std::cout << "input_iterator_tag" << std::endl;
        if (d<0){
            throw std::out_of_range("Negative distance");
        }
        while (d--) ++iter;
    };   //for input iteor
    // forward_iterator_tag is a input_iterator_tag
    //here is the advantage of public inheritance
    // code is useful for derived classes while write tobase class




template<typename IterT, typename DistT>
void doAdvance(IterT& iter, DistT d,
    std::bidirectional_iterator_tag){
        std::cout << "bidirectional_iter" << std::endl;
        if(d>=0){
            while (d--) ++iter;
        }
        else{
            while (d++) --iter;
        }
    };   //for input iteor


template<typename IterT, typename DistT>
void advance(IterT& iter,DistT d){
    doAdvance(   iter, d,
        typename 
            std::iterator_traits<IterT>::iterator_categoty()
    
    );
    std::cout << "done advance" << std::endl;
};




// when call
int main(){
    
    typedef std::iterator_traits<int*> traits;
    if (typeid(traits::iterator_category)== typeid(std::random_access_iterator_tag))
        std::cout << "int* is a random-access iterator" << std::endl; 





    return 0;
};


//TIPs:

// Traits classes make it useful that type information working on compile time.


// When we using overloading

// traits classes could do if...else test on compile time.






//trais is widely used in STL.

//iterator_traits
    //iterator_category
    //  value_type  

//char_traits

//numeric_limits


//TR1 
// is_fundamental<T>    //

//is_array<T>

//is_base_of<T1,T2>
//etc..
