#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;

public:

    Student() : Student(0, "Unknown")
    {
        cout << "Default constructor" << endl;
    }

    Student(int r) : Student(r, "Unknown")
    {
        cout << "One-parameter constructor" << endl;
    }

    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        cout << "Two-parameter constructor" << endl;
    }

    void display()
    {
        cout << rollNo << " " << name << endl;
    }
};

int main()
{
    Student s1;
    Student s2(101);

    s1.display();
    s2.display();

    return 0;
}