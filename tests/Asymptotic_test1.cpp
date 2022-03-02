#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <list>
#include <deque>
#include <queue>
#include <set>
#include <unordered_set>
#include <functional>

using namespace std;

void ConstantOrder1(){
    //O(1)
    int start = 6;
    int end =100;
    int mid = (end - start/2);
    if(mid%2 ==0)
        --mid;
}

void ConstantOrder2(){
    int start = 7;
    int end = 0;
    for (int i =0; i<1000; ++i)
        end += end*2 + start;
        //fixed steps
        // Ignore them
        //Tip  Ignore anything that doesn't involve our factor N.
}

void linear1(int n ){   //O(n)
    int sum=0;
    for (int i =0; i<n; i++){
        //all below are O(1)
        int x = 2+3*4;
        sum +=i;
        sum +=2;
        sum +=x;

    }
}
/* 
Search for loops that is based on n
A single loop is O(n)
Nested loop is O(n^2);
Triple nest loop is O(n^3)
 */
void linear2(int n ){  //O(n)
    for (int i =0;i<10*n; i++)
        ConstantOrder1();
    for (int i =0;i<5*n; i++)
        ConstantOrder1();
    
}
/*
2 parallel loops . Each is single loop
Each depends on n
    one 10n and one is 5n
    ignore these constants
Practically: 10n =5n =17n
Ignore constants =>O(n)

  */
void quadratic1(int n ) { // O(n^2)
    int cnt =0;
    for (int i=0; i<5*n; ++i){
        for (int j =0;j<3*n;++j){
            ++cnt;
            ConstantOrder1();
        }
    }
}
/* 
This is 5n*3n loop steps
    multiplied with some factor from all these FXIED steps
    Overall O(n^2)
Tep:nested loops =>O(n)
 */

void quadratic2(int n){ //O(n^2)
    int cnt=0;
    for (int i=0;i<5*n;++i){
        for (int j=0;j<3*n;++j){
            cnt++;
            ConstantOrder1();
        }
    }
    for(int i=0;i<10*n; ++i) //O(n)
        ConstantOrder1();
}


/* 
We have 2 parallel things
    nested loops : O(n^2)
    linear loop: O(n)
Tip: focus on the biggest
    as it dominates
    n^2+ n => n^2

 */

void quadratic3(int n){ //O(n^2)
    int cnt=0;
    for (int i=0;i<5*n;++i){
        for (int j=0;j<3*n;++j){
            for (int k=0;k<1000;++k){
                cnt++;
                ConstantOrder1();
            }
        }
    }
    for(int i=0;i<10*n; ++i) //O(n)
        ConstantOrder1();
}
/* 
2 parallel 
    3nested loop
        one loop is just fixed operation
        ignore constant opeartions
        This 3rd loop is useless
    Total 5n * 3n *1000 +10n =>n^2
*/

void quadratic4(int n){ //O(n^2)
    for (int i =0; i<10*n ; i++)
        ConstantOrder1();
    for(int i=0;i<3*n*n;i++)
        ConstantOrder2();
}
/* 
2 parallel blocks 
    single loop
    single loop

the 2nd loop is not linear in n
    it moves 3 n^2 steps
the order of the second loop is O(n^2)

Tip:observe if the loop based on fixed , n n^2 or what 
    Its value decides its order!
    
 */

void cubic1(int n = 1000){ //O(n^3)
    int cnt=0;
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            for (int k=0;k<n;++k){
                cnt++;
            }
        }
    }
}
/* 
as this code has 3 ensted loops 
    each depends on n
    It is O(n^3)
*/

void cubic2(int n){ //O(n^3)
    int cnt=0;
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            for (int k=0;k<n;++k){
                cnt++;
            }
        }
    }
    for (int i=0;i<1000*n; ++i)
        for (int j=0;j<1000*n;++j)
            ++cnt;
}
// Ignore constants
// n^3 +n^2 =>O(n^3)

void f0(int n){ //O(n^6)
    int cnt=0;
    for (int i=0;i<n*n;++i){
        for (int j=0;j<n;++j){
            for (int k=0;k<n*n*n;++k){
                cnt++;
            }
        }
    }
}


void f1(int n){ //O(n^6)      O(1) memory
    int cnt=0;
    for (int i=0;i<n*n;++i){
        for (int j=0;j<n;++j){
            cnt++;
        
        }
    }
}
void f2(int n){ //O(n^4)
    int cnt=0;
    for (int i=0;i<n;++i){//O(n)
        f1(i);//O(n^3)
    }
}


void f3(int n, int m ){ //O(n m)
    int cnt=0;
    for (int i=0;i<2 *n;++i){
        for (int j=0;j<3*m;++j){
            cnt++;
        
        }
    }
}
void f4(int n, int m ){ //O(n m  +n^3)
    int cnt=0;
    for (int i=0;i<2 *n;++i){
        for (int j=0;j<3*m;++j){
            cnt++;
        
        }
    }
    for (int i=0;i<n*n*n; ++i)
        cnt++;
}
//Polynomial Order
//O(n^k)

//=============
//other worse Families
//O(n^n)
//O(!n )
int* p = new int[1000];
// time order O() of code is upper bound.

int* f_(int n){ //total O(n)memory,O(n^2)time
    //this line: O(n)time and O(n) memory
    int *p = new int[n]{};    // 

    for (int i =0;i<n;++i) //O(n))time
        p[i]=i;

    int sum=0; //O(n^2) time
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            sum += p[i];
        }
    }
    return p;
}
int* f3B(int n){  // O(n) time/memory
    return new int[n]{};
}

void f3A(int n) {
    //O(n^2) time but still O(n) memory
    for (int i =0;i<n;++i){
        int* p  = f3B(n);    //O n memory 
        delete [] p;            // delete O n memory 
    }
}
int * f4B(int n){
    return new int[n] {};
}
void f4A(int n){
    // O(n^2) time & memory
    for (int i=0;i<n;++i){
        int*p = f4B(n);
        //we accumulate memory
    }
}
void f5(int n){   //O(n)  time memory
    int* p1= new int[10 * n]{};
    int* p2 = new int [20*n]{};
}
void f6(int n){   //O(n+m)  time memory
    int* p1= new int[10 * n]{};
    int* p2 = new int [20*m]{};
}

int f7B(int *arr, int n ){  // O n time  O 1 memory
    //O(1)  excluding parameters with reference 
    int sum =0;
    for  (int i=0;i<n; ++i)
        sum += arr[i];
    return sum;
}
void f7A(int n ){
    int *x  = new int[n];// O n memory 
    f7B(x,n);   // O 1 memoryj
}

int f8B(vector<int>& v, int f) {
    // O n time and O 1 memory 
    int sum =0;
    for (int i=0;i<v.size();++i)  // O 1 memory , O n time
        sum += v[i]*f;
    return sum;
}
void f8A(int n){
    vector<int> v(n,1); // vector of n numbers , O n memory ,O n time
            // n,  length
            // 1, default value

    /* 
    vector(size_type __n, const value_type& __value,
	     const allocator_type& __a = allocator_type())
      : _Base(_S_check_init_len(__n, __a), __a)
      { _M_fill_initialize(__n, __value); }
    */
    for (int i=0;i<n;++i) // O n^2 time , 
        f8B(v,i);

}

int f9B(vector<int> v, int f) {
    // O n time and O 1 memory 
    int sum =0;
    for (int i=0;i<v.size();++i)  // O n memory , O n time
        sum += v[i]*f;
    return sum;
}

void f9A(int n){
    vector<int> v(n,1); // vector of n numbers , O n memory, O n time
            // n,  length
            // 1, default value

    for (int i=0;i<n;++i) // O n^2 time ,  O n memory
        f8B(v,i);
}

int factorial1(int n){
    // O n time and O 1 memory
    int res = 1;
    for( int i =1; i<= n;++i)
        res *= i;
    return res;

}
int factorial2(int n){
    // O n time and O n memory
    if(n<=1)
        return 1;
    int subres = factorial1(n-1);
    return n * subres;  //recursion
    // If we have N recursive calls, then the variables in each call remains in memory
    //  E.g.  we will have N copies of subres variables 
    // So O(n) memory
    // we call it auxiliary space ( extra temporary space used by an algorithm)
}

void f10(int n){// total O n^2 memory
    if(n<=0)
        return ;
    int *p = new int[n];   // O n memory O n time
    f10(n-1);  // recursio  O n^2 memory O n^2 time
    delete[] p; //delete O n memory
}
void f11(int n){// total O n memory
    if(n<=0)
        return ;
    int *p = new int[n];   // O n memory O n time
    delete[] p; //delete O n memory
               // memory O1 
    f10(n-1);  // recursion O 1 memory O n^2 time
}
/* 
As we have a few specific areas with memory creation, we only look to them

Be careful from loops with function calls

Recursive functions 
    What is the actual O() memory before the call
        if cosntant, then N recursive calls need O(n)
        if no, assume m , the N recursive calls need O(nm)   
        // ## before the recursive call there is O(m) memory . then a recursive calls would make O(nm)
        // ## and the model of that recursive calls are always making some factor to be multiplied by your memory complexity
        // ## in best case , it could be just N for a recursive call
        // ## and the worst case, it would represented number of memory available before the recursive call.

*/

int main(){

    return 0;
}