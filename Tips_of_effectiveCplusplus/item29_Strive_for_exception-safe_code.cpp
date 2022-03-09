#include <iostream>
#include <istream>
#include <memory>
#include <mutex>


struct PMImpl{
    std::shared_ptr<Image> bgImage;
    int imageChanges;
};
namespace std{
    template<>
    void swap<std::shared_ptr<PMImpl> >(std::shared_ptr<PMImpl>& a,std::shared_ptr<PMImpl>& b) 
        noexcept(__and_<is_nothrow_move_constructible<shared_ptr<PMImpl>>, is_nothrow_move_assignable<shared_ptr<PMImpl>>>::value)
    {
        swap(*a ,*b);
    };
}
class PrettyMenu{
public:
    void changeBackground(std::istream& imgSre);  // 
    void changeBackground2(std::istream& imgSre);  // 
private:
    std::mutex mutex ;  //mutex
    // Image* bgImage;  //current bg
    // std::shared_ptr<Image> bgImage;
    int imageChanges;   //times of change bg
    std::shared_ptr<PMImpl> bgImage;
    std::shared_ptr<PMImpl> pImpl;


};

//basic exception safe
void PrettyMenu::changeBackground(std::istream &imgSre){
    // lock(&mutex);
    Lock ml(&mutex); //get Locker
    bgImage .reset( new Image(imgSrc));
    // delete bgImage;
    ++imageChanges;
    
    // unlock(&mutex);
};

//strong exception safe version
void PrettyMenu::changeBackground2(std::istream& imgSrc){
    using std::swap;
    Lock ml(&mutex);
    std::shared_ptr<PMImpl> 
        pNew(new PMImpl(*pImpl));
    pNew ->bgImage.reset(new Image(imgSrc)); // modify the copy.

    ++pNew->imageChanges;

    swap(pImpl,pNew);


};


int main(){
    return 0;
};


//tips
//1.object managed resources
//2. choose{
    //base
    //strong
    //nothrow
//}