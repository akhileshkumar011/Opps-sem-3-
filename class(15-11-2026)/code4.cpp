#include <iostream>
using namespace std;

class Number {
    int num;

public:
    void getData() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void operator!() {
        if (num == 0)
            cout << "Number is Zero";
        else
            cout << "Number is Not Zero";
    }
};

int main() {
    Number n;
    n.getData();

    !n;

    return 0;
}