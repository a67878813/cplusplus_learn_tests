// some mening of new && delete

#include <string>
#include <new>

// std::string *ps = new std::string("Memeory Management");
//  built in new  operator
/* 
    it will do {
        malloc memory
        call a constructor, set initial value
    }

    // it actually call operator new


    generally declared as below

    void * operator new(size_t size);


*/

void test(){

    void* rawMemory = operator new  (sizeof(std::string));
                    //operator new  // is operator




    std::string *ps2 = new std::string("Memeory Management");

    //worked like
    {
        void *memory = 
            operator new(sizeof(std::string));
        //call
        //string("Memory Management")  // initilized mem_obj 
            //   on *memory;
        
        std::string *ps3 = static_cast<std::string *> (memory) ; // let ps3 points to new obj.
    }

}



// placement new

// initilize obj on raw memory

class Widget{
public:
    Widget(int widgetSize);

    // place ment new // user is already know the raw_mem 's pointer
    void* operator new(size_t, void* location)
{
    
    return location;
}


};

Widget* constructWidgetInBuffer( void * buffer, int widgetSize)
{
    return new(buffer)  Widget(widgetSize); // call placement new // it contains ctors. not alloc memory
}


void test2(){

    std::string *ps;

    delete ps;

    // compiler will do like below
    {
            //1. call operator delete
            //
        /* 
        operator delete usuelly declared like
        
        void operator delete(void * memoryToBeDeallocated);
        */
        ps->~basic_string(); // call objs's dtor  operator

        operator delete(ps);  // release memory
    }

    // if u want manipulate raw memory, shoud not use new | delete
    //  could call operator new || operator delete
    {
    void* buffer = operator new(50 * sizeof(char)); // alloc memory
        // size is 50 chars;  !! there is no call for any ctors;

    operator delete(buffer);  // !! there is no call for any dtors;
    }
    
    // above is equal to
    {
        // malloc

        // free

    }
}

void * mallocShared(size_t size);
void freeShared(void * memory);

void test5(){

    void* sharedMemory = mallocShared(sizeof(Widget));

    Widget *pw = 
        constructWidgetInBuffer(sharedMemory, 10); // here use placement new, // call ctors, not alloc memory
    
    delete pw;  // undefined action  
                    // because pw is built by mallocShared, not from "operator new"(only alloc memory)
    
    pw-> ~Widget(); // right ! dtor pw-> 's Widget obj 
                    // not release Widget's memory
    
    freeShared(pw) ;  //right!  release pw-> ;s memory
                        // not call destructor.




}


void test6(){

    std::string* ps =new std::string[10]; // alloc obj's array


    // when new  array 
    // new will call operator new[]    (generally called array new)

    /* 
    
    
    
    
    */

    delete[] ps;  // call dtor for every element;
                    // call operator deletep[ release memory]
    

    




}
