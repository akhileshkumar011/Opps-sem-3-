// create a class employee with private salary and create a friend class hr to calculate annual salary.
#include <iostream>
using namespace std;

class HR;

class Employee {

    private:
        int salary;
    public:
    Employee(int s){
        salary = s;
    }

    friend class HR;
};

class HR {
    
    public:
    int calculateAnnualSalary(Employee e) {
        return e.salary * 12;
    }       
};
int main() {
    Employee emp(5000);
    HR hr;

    int annualSalary = hr.calculateAnnualSalary(emp);

    cout << "Monthly Salary = 5000" << endl;
    cout << "Annual Salary = " << annualSalary << endl;

    return 0;
}
