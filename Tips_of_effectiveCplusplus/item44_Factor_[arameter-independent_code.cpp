
//Factor parameter-independent code out of templates.
//

//class template | function templates will be instantiated 

//commonality and variability analysis

// (matrix inversion) template
#include <string>

template<typename T, std::size_t n>
class SquareMatrix{
public:

    void invert(); // invert
};

//=========
template<typename T>
class SquareMatrixBase {
    protected:
    void invert(std::size_t matrixSize);//

};


//SquareMatrix1 is implemented with base class
// 
template<typename T,std::size_t n>
class SquareMatrix1: private SquareMatrixBase<T>{
    private:
    using SquareMatrixBase<T>::invert;  //get base version invert
    public:
    void invert() { this->invert(n); } //call base::invert() 
    //here should add "this->" because it is templatized base calss,
    // derived classes's invert use "inline call"
    // 
};

//=======
template<typename T>
class SquareMatrixBase2{
protected:
    SquareMatrixBase2(std::size_t n, T* pMem)
    : size(n), pData(pMem) {}

    void setDataPtr(T* ptr){pData=ptr;}



private:
    std::size_t size;    //matrix's size

    T* pData; // pointer to contents of matrix
};

//derived classes desided memrey alloc manner.

// here is example of storage in inner direved class:
template<typename T, std::size_t n>
class SquareMatrix2: private SquareMatrixBase2<T> {
public:
    SquareMatrix2()
    : SquareMatrixBase2<T>(n, data){}



private:
    T data[n*n];
};

#include <boost/scoped_array.hpp>

// here is example of storage in heap:
template<typename T, std::size_t n>
class SquareMatrix3: private SquareMatrixBase2<T> {
public:
    SquareMatrix3()
    : SquareMatrixBase2<T>(n, 0),
        pData(new T[n*n])
    {this->setDataPtr(pData.get());}

private:
    boost::scoped_array<T> pData;
};


int main(){
    SquareMatrix<double , 5> sm1;

    sm1.invert();   //call SquareMatrix<double,5>::invert

    SquareMatrix<double,10> sm2;
    sm2.invert();

    return 0;
};
