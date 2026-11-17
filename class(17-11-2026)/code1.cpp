//Create a base class employee   with a function word derive a class manager and override the function

#include <iostream>
using namespace std;


class Employee {
public:
    void work() {
        cout << "Employee is working" << endl;
    }
};

class Manager : public Employee {
public:
    void work() {
        cout << "Manager is managing the team" << endl;
    }
};

int main() {
    Employee e;
    Manager m;

    e.work();
    m.work();

    return 0;
}