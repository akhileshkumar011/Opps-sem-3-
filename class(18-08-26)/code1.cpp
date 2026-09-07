#include <iostream>
using namespace std;
class Circle{
    int Radius;
    public:
    void getdata();
    void area();
};

void Circle::getdata(){
    cout<<"enter the radius";
    cin>>Radius;
}
void Circle::area(){
    cout<<"the area of the circle : " ;
    cout<<3.14*Radius*Radius;
}

int main(){
    Circle Clock;
    Clock.getdata();
    Clock.area();
}