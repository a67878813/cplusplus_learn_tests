


//in lib
class Window{
public:
    virtual void resize(int newWidth,int newHeight);
    virtual void repaint() const;

    int width() const;
    int height() const;
};


//in lib
// which you want to inherit it.
class SpecialWindow{
public:
    // un virtual
    int width() const {return w.width();}
    int height() const {return w.height();}

    //re implement  inherited virtual func
    virtual void resize(int newWidth, int newHeight);
    virtual void repaint() const;
private:
    Window w;
};
