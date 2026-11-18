// predecrement operator 

#include <iostream>
using namespace std;
class Number {
    public:
    int x ;
    Number( int n){
        x = n ;
    }

    void operator--(){
        x = --x;
    }
};
int main(){
    Number n1(10);
    --n1;
    cout<< "Value after predecrement: " << n1.x << endl;
    return 0;
}