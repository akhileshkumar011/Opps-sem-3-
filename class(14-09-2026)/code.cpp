#include <iostream>
using namespace std;

class Calculator
{
    int num1, num2;

public:
  
    Calculator(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

   
    int addition()
    {
        return num1 + num2;
    }

  
    int subtraction()
    {
        return num1 - num2;
    }


    int multiplication()
    {
        return num1 * num2;
    }
};

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

   
    Calculator c(a, b);

    cout << "Addition = " << c.addition() << endl;
    cout << "Subtraction = " << c.subtraction() << endl;
    cout << "Multiplication = " << c.multiplication() << endl;

    return 0;
}