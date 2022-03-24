
//understand the two meanings of typename
#include <iostream>

template<class T> class Widget;

template<typename T> class Widget2;

template<typename C>
void print2nd(const C& container)
{
    if( container.size() >=2){
        C::const_iterator iter(container.begin());
        //  (dependent names)
        // if it is nested,  called (nested dependent name)
        // C::const_iterator is ( nested dependent type name)
        ++iter;
        int value = *iter;//int is (non-dependent names)
        std::cout << value;
    }
};

template<typename C>
void print2nd_2(const C& container)
{
    if( container.size() >=2){
        C::const_iterator iter(container.begin());   //c::const_iterator was supposed non_type
        ++iter;
        int value = *iter;//int is (non-dependent names)
        std::cout << value;
    }
};


template<typename C>
void print2nd_3(const C& container)
{
    if( container.size() >=2){
        typename C::const_iterator iter(container.begin());   // tell compiler C::const_iterator is a typename
        ++iter;
        int value = *iter;//int is (non-dependent names)
        std::cout << value;
    }
};


template<typename C> // could use "typename " or "class"
void f(const C& container,  //notallowed "typename"
        typename C::iterator iter); // must using "typename"


//there is exception

//??? may wrong
#include <string>
template<typename T>
class Base{
public:
    explicit Base();
private:
    std::string type_ = "dfdf";
};



template<typename T>
class Derived: public  Base<T>::Nested{  
public:
    explicit Derived(int x)
    :Base<T>::Neste(x)  
    {
        typename Base<T>::Nested temp;
    }
};



template<typename IterT>
void workWithIterator(IterT iter)
{
    //here we must adding "typename"
    typename std::iterator_traits<IterT>::value_type temp(*iter);
    // temp  (local varible)
    // use type of *iter

    // if IterT is  vector<int>::iterator
    //std::iterator_traits<vector<int>::iterator >::value_type    
    // then temp is int

    //if IterT is list<std::string>::iterator,
    //then temp is std::string


}


template<typename IterT>
void workWithIterator2(IterT iter)
{

    //this is local typedef
    using value_type = typename std::iterator_traits<IterT>::value_type ; //same as below , this is newer grammer
    typedef typename std::iterator_traits<IterT>::value_type value_type2 ;
    value_type temp(*iter);



    typename std::iterator_traits<IterT>::value_type temp2(*iter);
    // temp  (local varible)
    // use type of *iter

    // if IterT is  vector<int>::iterator
    //std::iterator_traits<vector<int>::iterator >::value_type    
    // then temp is int

    //if IterT is list<std::string>::iterator,
    //then temp is std::string


}
