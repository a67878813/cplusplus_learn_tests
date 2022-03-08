#include <iostream>
#include <vector>




template<typename T>
class Widget{
public:
    // Widget<>(const Widget& rhs);
    Widget<T>(const Widget& rhs);

    void swap(Widget& other){
        using std::swap;
        swap(pImpl,other.pImpl);
    };

    Widget& operator= (const Widget& rhs){
        *pImpl = *(rhs.pImpl);  //swap pointer
        // return &rhs;
    };


private:
    typedef  int* WidgetImpl;
    WidgetImpl* pImpl;
};

namespace std{   //
    template<>   // template<> means  it's total template specialization of std::swap
    void swap1<Widget >(Widget& a, Widget& b){
         a.sqap(b);
    }
}

namespace std{           //partially specialize std::swap(function template)
    template<typename T>   // template<> means  it's total template specialization of std::swap
    void swap2<Widget<T> >(Widget<T>& a, Widget<T>& b){
         a.sqap(b);
    }
}
namespace std{
    template<typename T>   // overload std::swap
    void swap3(Widget<T>& a, Widget<T>& b){
         a.sqap(b);
    }
}

namespace WidgetStuuff{
    template<typename T>
    class Widget {
    public:
        Widget<T>& swap(const Widget<T>& rhs){};//    swap member function

    };


    //如果在声明函数的参数时使用了一个类，那么在查找匹配的函数名字时，编译器会在包含参数类型的名字空间中也进行查找。
    //name lookup rules
    //or 
    //argument-dependent loolup
    //会找到同一命名空间内的专属版本

    //non-member swap  
    template<typename T>
    void swap(Widget<T>& a,Widget<T>&b ){     //non-member swap  

        a.swap(b);// call member swap
        };

    

};






//非class template时，使用std：：swap特化，且调用swap member function
namespace std{  //
    //
    //Widget专属特化
    template<>   // template<> means  it's total template specialization of std::swap
    void swap<Widget >(Widget& a, Widget& b){
         a.swap(b);
};





//when using

template<typename T>
void doSomething(T& obj1, T&obj2){
    using std::swap;//使std::swap可见

    swap(obj1,obj2);//单独调用swap 查找顺序 
                        //T专属swap；
                        // std::swap  T特化 ；
                            //一般化swap
};


