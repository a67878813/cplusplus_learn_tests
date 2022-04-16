

#include <iostream>
class Point{
    public:

    Point(float xval);
    virtual ~Point();

    float x() const ;
    static int PointCount();



protected:
virtual std::ostream& print(std::ostream os) const;

float _x;
static int _point_count;
};

//data members     & function members



// A simple Object Model
        // obj   -> pointer of members

        //based on index of slots

        // size of obj = point size * number of members



//a table-driven object model   
    //  obj    -> data member table
                        // data
            //->member function table      (virtual functions)
                    // slots   function's addresses 



//the c++ object model
        //obj -> nonstatic data members
        //    -> (vptr)pointer to vitual table 
                //vtpr was done by constructor , destructor , copy assignment
                //has type-info object(   runtime type identification, RTTI)
                                // on first slot


        //vtbl(pointers of virtual functions)


        //static data members
        //static & non-static function members 



// virtual public inheritance
// birtual base class add pointer.

// how the object model effects programs

//
class X{
public:
    virtual ~X() ;
    virtual X foobar(){

    }
}