#include <iostream>

class BST {
    public:
    friend std::ostream& operator<<(std::ostream& , const BST& );


private:
    int ttt;
    
}; // BST  binary search tree

std::ostream& operator<<(std::ostream& lhs, const BST& rhs)
    {
        lhs << rhs.ttt;
        return  lhs ;};





class BalancedBST: public BST {
    public:
    friend std::ostream& operator<<(std::ostream& , const BST& );
};   // 


void printBSTArray( std::ostream& s, const BST array[],  int numElements)
{
    for(int i = 0 ; i<numElements;++i){
        s << array[i] << " " ;
    s<< std::endl;
        //array[i]   means    *(array +i)
        //  compiler must know the element's size  based on static type , which is BST at here.
        // array , array+i 's distance is  i* sizeof(BST)
        // if the array element is not BST , such as BalancedBST, sizeof(BST)  differed from the sizeof(BalancedBST)
    }

};


void test(){
BST BSTArray[10];

printBSTArray( std::cout, BSTArray , 10);   

BalancedBST bBSTArray[10];

printBSTArray( std::cout, bBSTArray, 10);

};

void deleteArray ( std::ostream& logStream,  BST array[])
{
    logStream << "Deleting array at address "
            << static_cast<void*> (array) << '\n';
    
    delete[] array;// based on sizeof(BST)
    /* 
    compiler makes code like:

    // dtor *array's  obj

    for( int i = the number of elements in the array -1 ; i>= 0; --i)
    {
        array[i].BST::~BST();   // call array[i] 's dtor;
    }
    
    
    
    
    
    */
}

void test2(){
    BalancedBST *balTreeArray = // make a BalancedBST C-array
        new BalancedBST[50];

    deleteArray( std::cout, balTreeArray);  // log delete action
}









