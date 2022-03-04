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
