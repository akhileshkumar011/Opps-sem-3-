// wap to check whether a number is zero or not 

#include <iostream>
using namespace std;
class Number {
    public:
    int num;
    Number(int n){
        num = n;
    }
  void operator!(){
        if(num == 0){
            cout << "Number is zero" << endl;
        } 
        else {
            cout << "Number is not zero" << endl;
        }
    }
}; 
int main() {
    Number n1(0);
    !n1;
    Number n2(5);
    !n2;
    return 0;
}