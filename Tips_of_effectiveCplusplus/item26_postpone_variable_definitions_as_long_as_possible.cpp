
class Widget{};

int main(){

//manner A
Widget w;
for(int i=0;i<5;++i){
    w = 1;
};
// if(operator= faster than 1constructor+ 1 destructor ), 
// here is performance-sensitive area

//manner B
for (int i =0;i<5;++i){
    Widget w(5);
}
// normal


int tt = 145;


};