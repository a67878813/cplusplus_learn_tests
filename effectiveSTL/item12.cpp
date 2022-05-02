

1. stl containter 
1. multithread read is safe
2. multithread write to differ containter is safe







*/





#include <vector>
#include <mutex>

using std::vector;
using std::mutex;

void test(){
    vector<int> v;
    auto first5(std::find(v.begin(), v.end(), 5));

    if (first5 != v.end() ){
        *first5 = 0;
    }

}

// human sync control
void test2(){
    vector<int> v;

    getMutexFor(v);
    auto first5(find(v.begin(), v.end(), 5));
    if(first5 != v.end()){
        *first5 = 0;
    }
    releaseMutexFor(v);

}


//some lock class

template<typename Container>
class Lock{
public:
    Lock(const Container& container)
    :c(container)
    {
        getMutexFor(c);
    }
    ~Lock()
    {
        releaseMutexFor(c);
    }
private:
    const Container& c;
};

// this usually called "resource acquisition is initialization"

test3(){
    vector<int> v;
    {// lock block
    Lock<vector<int> > lock(v);
    auto first5(find(v.begin(), v.end(), 5));
    if(first5 != v.end()){
        *first5 = 0;
    }
    }//end lock
    // if there a exception, local elements will be dtored.

    
}







int main(){


    return 0;
};