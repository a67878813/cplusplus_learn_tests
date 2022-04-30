
// compatible c++.o  && c.o

//name mangling

//static obj init

//dynamic allocate

//datastructure compatible


//1. Name Mangling

//suppress name mangle
// means there is C linkage
extern "C"
void drawLine(int x1, int y1);


// implement with assembler

extern "C" void twiddleBits(unsigned char bits);


// output to other
extern "C" void simulate(int iterations);



extern "C" {


// a bunch of functions
void efg();
void simu(int iii);
}


#ifdef __cplusplus
extern "C" {
#endif







#ifdef __cplusplus
}
#endif



//2. Statics init

// befor main() :
/* 
    static class 
    global 
    in namespace
    in file scope 
            's ctor

*/

//after main()
// call so called static destruction
    // static class ...


//after compile
// is like
int main(int argc, const char** argv) {
    
    performStaticInitialization();

    // some main perform

    performStaticDestruction();
    return 0;
}



//========= main write in c++

extern "C"
int realMain() ; // use C

//the reason why call c main.
int main(){ // using C++

}

struct external_C{
// if there is no any virtual function 
    //&& there is no inheritance,
// this could compatible with C.
};
//==========


//===dynamic memory allocate
/* 
C++ call new && delete

C call malloc && free


//====datastructure compatibility

safe trans
    obj pointer
    non-member func's pointer
    static func's pointer
    structs
    inner-types varible

*/