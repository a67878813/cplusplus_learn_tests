

#include <cassert>
#include <iostream>
// using namespace std;

class Point3d
{
public:
Point3d(float x = 0.0, float y=0.0, float z=0.0)
    :_x(x),_y(y),_z(z){}
float x() {return _x;}
float y() {return _y;}
float z() {return _z;}

private:
    float _x;
    float _y;
    float _z;

};

inline std:: ostream& operator<< ( std::ostream& os ,  Point3d & pt)
{
    os << "(" <<pt.x() << ", " << pt.y() << ", " << pt.z() << " )";

    return os;
};


template<typename type>
class Point3d_
{
public:
    Point3d_( type x = 0.0,  type y=0.0,  type z=0.0)
        :_x(x),_y(y),_z(z){} ;
    type x() {return _x;}
    type y() {return _y;}
    type z() {return _z;}

private:
    type _x;
    type _y;
    type _z;

};

template<typename type, int dim>
class Point{
public:
    Point();
    Point(type coords[dim]){ 
        for( int index = 0; index< dim; index++)
            _coords[index] = coords[index];

    }

    type& operator[](int index){
        assert(index <dim && index >=0);
        return _coords[index];
    }



private:
    type _coords[dim];
};

inline
template<typename type ,  int dim>
std::ostream& 
operator << (std::ostream & os, Point<type,dim> & pt)
{
    os << "( ";
    for (int ix = 0; ix <dim-1 ; ix++)
        os << pt[ix] << ", ";
    os <<pt[dim-1];
    os << " )";
    return os ; 
    
};