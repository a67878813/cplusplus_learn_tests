// Use traits classes for information about types.

//STL consists of "" templates of container\iterator\algorithm.


// tools templates


//advance

template<typename IterT, typename DistT>
void advance(IterT& iter, DistT d); //

// iter += d  // only for random access



//there are 5 types of iterator of STL

// input iter 1 step /time  , read only-once.
    // mimic read pointer
    // e.g. istream_iterators


// output 
    // writer pointer
    // ostream_iterators

// aboves suits one-pass algorithms.



// forward iter
// read or writer > 1time.
//(multi-pass algorithums)

//bidirectional iter
// list , multiset, map , multimap

//radom access iter
//pointer  , vector, deque ,string


//there are tag struct for verify
struct input_iterator_tag{};
struct output_iterator_tag{};
struct forward_iterator_tag: public input_iterator_tag{};
struct bidirectional_iterator_tag: public forward_iterator_tag{};
struct random_access_iterator_tag: public bidirectional_iterator_tag{};


template<typename IterT>
struct iterator_traits;      // iterator 





//example of deque iter's class

template<...>
class deque {
    public:
    class iterator{
        public:
         typedef random_access_iterator_tag iterator_category;
    };
};

template<typename IterT>// for non pointer
struct iterator_traits{
    typedef typename IterT::iterator_categoty iterator_categoty;
};


template<typename IterT>
struct iterator_traits<IterT*> // for pointer
// (partial template specialization)
{
    typedef random_access_iterator_tag iterator_category;
}


















template<typename IterT, typename DistT>
void advance(IterT& iter, DistT d)
{
    if (                ){    //if iter is random access iterator

        iter += d;   // for random access
    }
    else {
        if(d>=0 ){
            while (d--) ++iter;
        }
        else {
            while (d++) -- iter;
        }
    }

}