#include <iostream>
using namespace std;

class Circle{
    double r;
    public:
        double area(); // declaration
};

// defination outside the class 

double Circle::area(){
    return 3.14*r*r;
}