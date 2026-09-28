```cpp
#include <iostream>
#include <cstring>
using namespace std;

class Employee {
private:
    char *name;
    int id;

public:
   
    Employee() {
        id = 0;
        name = new char[10];
        strcpy(name, "Unknown");

        cout << "Default Constructor called" << endl;
    }

   
    Employee(const char *n, int i) {
        id = i;

        name = new char[strlen(n) + 1];
        strcpy(name, n);

        cout << "Parameterized Constructor called" << endl;
    }


    Employee(const Employee &e) {
        id = e.id;

        
        name = new char[strlen(e.name) + 1];
        strcpy(name, e.name);

        cout << "Copy Constructor called" << endl;
    }


    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
    }

    ~Employee() {
        cout << "Destructor called for " << name << endl;
        delete[] name;
    }
};

int main() {

    // Default Constructor
    Employee e1;
    e1.display();

    cout << endl;

    // Parameterized Constructor
    Employee e2("Akhilesh", 101);
    e2.display();

    cout << endl;

    // Copy Constructor
    Employee e3(e2);
    e3.display();

    return 0;
}
```
