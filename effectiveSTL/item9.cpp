
//delete method

//erase-remove
// vector  deque string
Container<int> c;

c.erase(remove( c.begin(), c.end(),1963 ),
        c.end()
        );
//c is list
c.remove(1963);

//forbid remove
//use erase
// at set multiset map multimap

c.erase(1963); // O log(n)

// predicate
bool badValue(int a);

// vector string deque list
// using   remove_if
c.erase(remove_if(c.begin(), c.end(), badValue),
        c.end())

//map ...
//remove_copy_if  & swap
AssocContainer<int> c;

AssocContainer<int> goodValues; // new temp container

remove_copy_if(c.begin(), c.end(), inserter(goodValues, goodValues.end()),
                badValue);



// need iterator to next element
// so to use i++ // use it old value

for (AssocContainer<int>::iterator i = c.begin();
i!= c.end();
//do nothing 
){
    if (badValue(*i)) {
        c.erase(i++); // bad value, convey old value then ++
    
    }
    else{
         ++i; // for good value ,++
    }
}

#include <iostream>
#include <fstream>
#include <string>
std::string filename = "test.b";
void test(){
std::ofstream logFile(filename, std::ios::binary);

AsscContainer<int> c;


for (AssocContainer<int>::iterator i = c.begin();
            i!= c.end();
            //do nothing 
            ){
    if (badValue(*i)) {
        logFile<< "Erasing " << *i << '\n';
        c.erase(i++); // bad value, convey old value then ++
    
    }
    else{
         ++i; // for good value ,++
    }
}



// if vector string deque want to log
// all iter will be lose wafter erase a element

for (SeqContainer<int>::iterator i = c.begin();
        i != c.end();){
            if(badValue(*i) ){
                logFile << "Erasing " <<*i << '\n';
                i=c.erase(i); // i = return value;
                // for assoc container , return void
            }
            else ++i;
        }



}