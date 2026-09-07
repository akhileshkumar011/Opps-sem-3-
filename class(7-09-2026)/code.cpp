// C++ program to demonstrate the use of friend function

#include <iostream>
using namespace std;

class Employee {
private:
    int salary;

public:
    Employee(int s) {
        salary = s;
    }

    // Friend function declaration
    friend void displaySalary(Employee emp);
};

// Friend function definition
void displaySalary(Employee emp) {
    cout << "Salary: " << emp.salary;
}

int main() {
    Employee myEmp(50000);

    displaySalary(myEmp);

    return 0;
}