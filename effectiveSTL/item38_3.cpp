#include <iostream>
using namespace std;
template<class T>
class A
{
public:
    void Func(const T & p)
    {
        cout << p.v;
    }
template<typename U> friend class B;


};

template <class T>
class B
{
private:
    T v;
public:
    B(T n) : v(n) { }
    template <class T2>
    friend class A;  //把类模板A声明为友元
};



int main()
{
    B<int> b(5);
    A< B<int> > a;  //用B<int>替换A模板中的 T
    a.Func(b);
    return 0;
}