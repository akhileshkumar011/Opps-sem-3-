#include <iostream>
using namespace std;

class Employee {
private:
    float basicSalary;

public:
    Employee(float salary) {
        basicSalary = salary;
    }

    // Friend function
    friend float calculateGrossSalary(Employee emp);
};

// Friend function definition
float calculateGrossSalary(Employee emp) {
    float hra = 0.20 * emp.basicSalary;
    float da = 0.10 * emp.basicSalary;

    float grossSalary = emp.basicSalary + hra + da;

    return grossSalary;
}

int main() {
    Employee emp(50000);

    cout << "Gross Salary = "
         << calculateGrossSalary(emp);

    return 0;
}