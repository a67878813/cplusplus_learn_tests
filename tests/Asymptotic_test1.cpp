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

void f(int n){ //O(n^6)
    int cnt=0;
    for (int i=0;i<n*n;++i){
        for (int j=0;j<n;++j){
            for (int k=0;k<n*n*n;++k){
                cnt++;
            }
        }
    }
}


void f1(int n){ //O(n^6)
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

int main(){

    return 0;
}