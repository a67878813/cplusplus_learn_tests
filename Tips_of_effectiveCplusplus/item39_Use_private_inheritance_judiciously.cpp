
class Timer {
public:
    explicit Timer(int tickFrequency);
    virtual void onTick() const;
};

//private inheritance
class Widget: private Timer {
private:
    virtual void onTick() const;

};

//composition
class Widget2{
private:
    /* class WidgetTimer: public Timer {
    public:
        virtual void onTick() const final;


    virtual void onTick(){

        };
    }; */
    class WidgetTimer{};

    WidgetTimer* timer;// decouplings
};


class WidgetTimer: public Timer{
    WidgetTimer():Timer(10){};

};


int main(){


};


/* 
Tips
    1. private inheritance means is-implemented-in-terms-of .
    2. usuelly we use composition.
    3.It is resonable when belows conformed:
        3.1 derived class need some protected base class member
        3.2 derived class will redefine inherited virtual function
    
    4. difference with composition, private inheritance will making Empty Base Optimization.
        that will have "minimiun object size"
*/