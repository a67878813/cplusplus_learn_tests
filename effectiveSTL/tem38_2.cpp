#include <memory>
class Widget{};

template<typename T>
class BPFCImpl
{
private:
    Widget w;
    int x;
    virtual ~BPFCImpl();
    virtual void operator ()(const T& val) const  ;

template<typename U> friend class BPFC;// template class has template class friend
// friend class BPFC;
};

template<typename T>
class BPFC
{
private:
    // BPFCImpl<T> *pImpl;
    std::shared_ptr<BPFCImpl<T> > *pImpl2;

public: 
    void operator()(const T& val) const 
    {
        pImpl2->operator()(val);
    }
    BPFC(BPFC& copy_ctor_param);//
};
