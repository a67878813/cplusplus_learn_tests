

#include <vector>
#include <mutex>



int main(){

using namespace std;
vector<int> v;


getMutexFor(v);
vector<int>::iterator first5(find(v.begin(),v.end(),5));

if( first5 !- v.end()){
    *first5=0;
}

releaseMutexFor(v);





    return 0;
};