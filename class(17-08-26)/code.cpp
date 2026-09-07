#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40, 50};

    for (auto x : numbers) {
        cout << x << " ";
    }

    return 0;
}