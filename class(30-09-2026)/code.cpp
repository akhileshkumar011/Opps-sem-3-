//Create a class Power with an overloaded function calculate() that performs the following operations:
//Calculate the square of an integer 
//Calculate the cube of an integer
//Calculate x raised to the power y using calculate(int x, int y) with two integer arguments.

#include <iostream>
#include <cmath>
using namespace std;
class Power
{
    public:
    float calculate(float x)
    {
        return x * x;
    }
    float calculate(float x , char){
        return x * x * x;
    }
    float calculate(float x, float y){
        return pow(x,y);
    }
};
int main(){
    Power p;
    float num1, num2;
    cin >> num1;
    cout  << p.calculate(num1) << endl;
    cin >> num1;
    cout << p.calculate(num1) << endl;
    cin >> num1 >> num2;
    cout <<  p.calculate(num1, num2) << endl;
} 