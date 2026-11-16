#include <iostream>
using namespace std;

class Number
{
    int x;
    public:
    Number(int a){
        x = a;

    }
    void Operator++(){
        x++;
    }
    void show(){
        cout<<x ;
    }
}
int main(){
    Number n(10);
    n++ ;
    n.show();
}