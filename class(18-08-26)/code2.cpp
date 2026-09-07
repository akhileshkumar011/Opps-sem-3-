#include <iostream>
using namespace std;
class Square{
    float side;
    public:
    void getdata();
    float area();
};

void Square::getdata(){
    cout<<"enter the side of the square : ";
    cin>>side;
}

float Square::area(){
    return side*side;
}

int main(){
    Square s;
    s.getdata();
    cout<<s.area();
}