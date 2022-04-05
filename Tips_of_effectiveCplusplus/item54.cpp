// familiarize yourself with the standard library, including TR1

// TR1 = Technical Report 1


// STL standard template library// containers   vector, string  map
//  iterators
//  algorithms   find, sort , transform
//   fuction objects    less, greater
// container adapters   stack, prioriy_queue
// function object adapters    mem_fuc, not1

//Iostreams   cin cout  cerr clog

//multiple active locales   wchar_t wstring  

// complex  ,valarray

// exception hierarchy           base class: exception
                                //derived classes  logic_error  runtime)error

// C89


//TR1
// TR1::shared_ptr

#include <memory>
#include <tr1/memory>
#include <tr1/shared_ptr.h>
#include <type_traits>

std::tr1::shared_ptr<int> dd; // reference counting // delete when count =0// acyclic

std::tr1::weak_ptr<int> d2; // acyclic  tr1::shared_ptr  based   
    // cycle-inducing pointers


#include <tr1/functional>
std::tr1::function<typename _Signature>

void registerCallback(std::string func(int));
                            //func type is    std::string (*)(int)
void re2(std::string (int));                            
    // std::string (int)    is function signature

void registercall3(std::tr1::function<std::string (int)> func);
                    // param func recept any callable entity
                     // only if signature is as same as std::string (int)
                    
//tr1::bind
//

//Hash tables  // sets , multisets, maps multi-maps

//Regular expressions


//tuples  // pair template

//tr1::array // stl array

//tr1::mem_fn     // member function pointers

//tr1::reference_wrapper  // references like obj

//random number 

// math   Laguerre   Bessel    complete elliptic intergrals

// C99 compatible


// template coding

// type traits  // traits classes 
        // // proper alignment

// tr1::result_of

        // refer to func's return type

// hash tables   hash_set  hash_multiset hash_map   hash_multimap
namespace std{
    namespace tr1 = ::boost;
}
//=================================
//boost
//
// string    tokenizing parsing


//container   array bitsets multi-dimentional array

#include <boost/lambda/lambda.hpp>
#include <vector>
#include <iostream>
void test(){
using namespace boost::lambda;
std::vector<int> v;

std::for_each(v.begin(), v.end(),
        std::cout << _1 *2 + 10 << "\n");

};

// generic programing      traits classes


//TMP   template metaprogramming
#include <boost/mpl/list.hpp>
#include <boost/mpl/push_front.hpp>
// mpl::vector     mpl::list
using floats = boost::mpl::list<float , double , long double > ;
using types = boost::mpl::push_front<floats, int>::type; 


//math and numerics
        // octonions and quaternions    // divisor 

//correctness and testing       
//     implicit template interfaces

//data structure

// tuple

//inter-language support // c== python  seamless interoperability

//memory     Pool

// CRC dates time   file system


//

