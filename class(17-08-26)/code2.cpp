#include <iostream>
using namespace std;

inline int maximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    cout << maximum(10, 20);
    return 0;
}