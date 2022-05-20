#include <functional>

#include <list>
#include <iostream>

using std::list;
using std::cout;


class Widget{};

list<Widget*> widgetPtrs;
bool isInteresting(const Widget* pw);

//test
void test1 () {
    auto i = std::find_if(widgetPtrs.begin(),widgetPtrs.end(), isInteresting);

    if (i != widgetPtrs.end() ){// first finds element

    }

    //if find firt not satisfied pointer
    // auto i2 = find_if(widgetPtrs.begin(), widgetPtrs.end())
                    // std::not1(std::ptr_fun(isInteresting)  ));
    std::bind(isInteresting,  std::placeholders::_1);


    [](auto && PH1) { return isInteresting(std::forward<decltype(PH1)> (PH1)); };
    // auto     value type
    // auto &&   reference type
    // decltype(e)       get type of result
    // decltype((e))       get reference type of result


    auto i2 = find_if(widgets.rbegin(),widgets.rend(),)




        auto i = std::find_if(widgetPtrs.begin(),widgetPtrs.end(), isInteresting);

    if (i != widgetPtrs.end() ){// first finds element

    }
};


