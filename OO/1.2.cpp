//
//the politically correct struct
#include <cstdlib>
#include <cstring>
#include <memory>
struct mumble{
    /* stuff */
    char pc[1];
};

// get some string
// alloc memory 
struct mumble * pmumbl = (struct mumble*)  
    std::malloc(sizeof(struct mumble) + strlen(string)+1);

std::strcpy(&mumble.pc, string);


class stumble {
public:
//
protected:
//
private:
 /* privaar pc[1];e */
    char pc[1];
};

//base classes && derived classes 's datamembers 's memory layour is not restricted.

// struct C_point {};
// class Point: public C_point{};


// c && c++ 's  client

extern void draw_line(Point, Point);
extern "C" void draw_rect(C_point, C_point);

draw_line( Point(0,0), Point(100,100));
draw_rect(Point(0,0), Point(100,100));

// this methord is not recmended

//===================
// composition is C C++ 's combine methord.

struct C_point {};

class Point{
public:
    operator C_point() { return _c_point;}

private:
    C_point _c_point;
};

// c struct 's application , is when you deliver "a complex class's object"
// to some C func.
// struct could capsulate data, and ensure C compatable memory layour.



// ======= an object distinction

