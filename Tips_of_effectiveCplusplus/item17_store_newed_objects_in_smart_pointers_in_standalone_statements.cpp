#include <memory>

class Widget{
public:
    // Widget* operator new () {
    //     return std::shared_ptr<Widget> ;
    // };
    // operator std::shared_ptr<Widget> () const
    // {return *this;}
};

int priority();

void processWidget(std::shared_ptr<Widget> pw, int priority);


int main(){
    processWidget(std::make_shared<Widget>(), priority() );// it may leak memory
            //std::make_shared // is more efficient & It is Exception safety

            //std::make_shared<widget>()
            //==
            //std::shared_ptr<Widget>(new Widget)
            

            //there are 
                // std::make_unique
    //=========================
    //or 
    //====================
    std::shared_ptr<Widget> pw(new Widget);

    processWidget(pw, priority());

    return 0;
};