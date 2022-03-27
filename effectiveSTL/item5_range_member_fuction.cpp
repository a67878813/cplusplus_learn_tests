#include <iostream>
#include <vector>

using namespace std;

vector<int> v1(10,5);
vector<int> v2(20,8);

void print_V(vector<int>& v){
for (vector<int>::iterator i= v.begin();i!=v.end();++i)
    std::cout << *i << " ";
std::cout  << std::endl;
};


//
//container::container(InputIterator begin, InputIterator end);

// insert
//void vontainer::insert(iterator position,  // where to insert 
            //InputIterator begin,     // begin 
            //InputIterator end);)  //end

//void container::insert(InputIterator begin, InputIterator end);


// erase
//iterator container::erase(iterator begin, iterator end);

//void container::erase(iterator begin, iterator end);


//assign
//void container::assign(InputIterator begin, InputIterator end);









int main(){

vector<int>::iterator i;

for (i= v1.begin();i!=v1.end();++i)
    std::cout << *i << " ";
std::cout  << std::endl;

v1.assign(v2.begin() + v2.size()/2 ,  v2.end());


for (i= v1.begin();i!=v1.end();++i)  
    std::cout << *i << " ";
std::cout  << std::endl;
//or

v1.clear();
for(vector<int>::const_iterator ci = v2.begin() + v2.size()/2;  
        ci != v2.end();
        ++ci)
    v1.push_back(*ci);



v1.clear();
copy(v2.begin() + v2.size() /2, v2.end(), back_inserter(v1));
                                                    //inserter
                                                    //back_inserter
                                                    //front_inserter



for (i= v1.begin();i!=v1.end();++i)
    std::cout << *i << " ";
std::cout  << std::endl;

// v1.clear();
v1.insert(v1.end(), v2.begin() + v2.size()/2, v2.end());

for (i= v1.begin();i!=v1.end();++i)
    std::cout << *i << " ";
std::cout  << std::endl;






int data[10] ={3,4,5,6,7,8,9,10,11,12};
std::cout << *data << std::endl;

std::cout << data[0] << std::endl;

vector<int> v(4,1);

v.insert(v.begin(), data, data +10);//high efficient
print_V(v);

v.insert(v.begin(),55);

// call insert
vector<int>::iterator insertLoc(v.begin());

for(int i =0; i< 10; ++i) {
    insertLoc = v.insert(insertLoc, data[i]);
    ++insertLoc;
};



print_V(v);


copy(data, data+ 10, inserter(v, v.begin())    );

print_V(v);

















return 0;
};
