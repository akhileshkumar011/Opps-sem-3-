// write a program to add two complex number using operator overloading

#include <iostream>
using namespace std;
class Complex {
    public:
    int x;
    int y;
    Complex(int a, int b){
        x = a;
        y = b;
    }
    Complex operator+(Complex c){
        return Complex(x + c.x, y + c.y);
    }
    void display(){
        cout << "Complex number: " << x << " + " << y << "i" << endl;
    }
};
int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}