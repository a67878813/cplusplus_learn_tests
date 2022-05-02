// be habituated to standard C++


// c-array int
// int * find(int *begin, int *end, int value)
// {
//     while(begin != end && *begin != value) {
//         ++ begin;}
//     return begin;
// }

void test(){
    int values[50];

    int*firstFive = find(values, values+50, 5);
    if (firstFive != values+50){

    }
    else {

    }
}


// if template it 
//   overloaded ++ etc.
// This is iterators's concept
template<class Iterator, class T>
Iterator find(Iterator begin, Iterator end, const T& value)
{
    while (begin!= end && *begin != value ) ++begin;
    return begin;
}


// STL containers include :
/* 
    bitset vector list deque queue priority_queue stack set map


*/

#include <list>
void test2(){
std::list<char> charList;
auto it = find(charList.begin(), charList.end(), 'x');
}

void test3(){
    int values[50];
    int* firstFive = find(values, values+50,5);
}