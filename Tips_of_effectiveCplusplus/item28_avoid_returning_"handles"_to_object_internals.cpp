#include <memory>

class Point{
public:
    Point(int x, int y ) ;
    void setX(int newVal);
    void setY(int newVal);
    
};
struct RectData{
    Point ulhc; // upper left hand corner
    Point lrhc; // lower right hand corner

};


class Rectangle{
public:
    Point& upperLeft() const { return pData->ulhc;}// pass out pData, means ulhs&lrhc is public
        //here return reference of Point, and there is const
        //contents saved out this func.
        // then user can modify the const content!!!

        // It  will happen when return pointer or iterator

    const Point& lowerRight() const { return pData->lrhc;}
    //return value is unvariable.
private:
    std::shared_ptr<RectData> pData;
};

// return handles pointer /reference /iterator can sabotage encapsulation.





//=============
class GUIObject{};
const Rectangle boundingBos(const GUIObject& obj);

void ttest(){
    GUIObject* pgo;

    const Point* pUpperLeft = 
        & (boundingBox(*pgo).upperLeft());
    //here pUpperLeft will dangling
};



















int main(){
    Point coord1(0,0);
    Point coord2(100,100);
    const Rectangle rec(coord1, coord2);

    rec.lowerRight().setX(50);
    return 0;
};


//Tips
//avoid to return handles(references, pointer ,iterator) points inner obj.
//Obeing will increase encapsulation.
//reduse the possibility of dangling handles.