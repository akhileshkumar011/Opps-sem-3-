#include <iostream>
using namespace std;
class circle{
    public:
    int radius ;
};
int main(){
    circle cirobj;
    cirobj.radius = 3;

    cout<<"the area of the circle ="<< 3.14*cirobj.radius*cirobj.radius<<endl;
    cout<<"the circum of the circle ="<<2*3.14*cirobj.radius;
}