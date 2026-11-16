// negation

#include <iostream>
using namespace std;

class Number {
    int num;

public:
    void getData() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void operator-() {
        cout << "Negation = " << -num;
    }
};

int main() {
    Number n;

    n.getData();

    -n;

    return 0;
}