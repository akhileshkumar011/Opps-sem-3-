//Create a base class employee with a virtual function work derive manager and developer class and override the function

#include <iostream>
using namespace std;
class Employee {
    public:
    virtual void work(){
        cout<< "Employee is working" << endl;
    }
};

class Manager : public Employee {
    public:
    void work() override {
        cout<< "Manager is managing the team" << endl;

    }
};
class Developer : public Employee {
    public: 
    void work () override {
        cout << "developer is writing the code " << endl;
    }
};

int main(){
    Employee *ptr;
    Manager m;
    Developer d;
    ptr = &m;
    ptr-> work();
    ptr = &d;
    ptr->work();
}
