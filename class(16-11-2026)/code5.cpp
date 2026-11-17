// weather a number is zero or not using operator overloading and return type of operator overloading function is void 

#include <iostream>
using namespace std;
class Number {
    int num;
    Number (int a) {
        num = a;
    }
    bool operator!() {
        if (num == 0){
            return true;
        }
        else{
            return false;
        }
}
};
int main(){
    Number n(0);
    if(!n){
        cout<<"Number is Zero";
    }
    else{
        cout<<"Number is Not Zero";
    }
}