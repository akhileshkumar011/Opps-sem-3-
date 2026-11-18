#include <iostream>
using namespace std;
class Number {
    public:
    int num;
    Number(int n){
        num = n;
    }
    void operator-(){
        num = -num;
    }
    void display(){
        cout << "Number: " << num << endl;
    }
};
int main() {
    Number n1(15);
   -n1;
    n1.display();
    return 0;
}