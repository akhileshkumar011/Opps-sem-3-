#include <iostream>
using namespace std;

class Student {
    int marks;

public:
    string name;
    int roll_no;

    void getdata(int m, string n, int p) {
        marks = m;
        name = n;
        roll_no = p;
    }

    void grade() {
        if (marks > 90) {
            cout << "Grade A";
        }
        else if (marks > 70) {
            cout << "Grade B";
        }
        else {
            cout << "Grade C";
        }
    }

    void display() {
        cout << "The marks: " << marks << endl;
        cout << "Name of the student: " << name << endl;
        cout << "Roll number of the student: " << roll_no << endl;
    }
};

int main() {
    Student x;

    x.getdata(90, "Aman", 70);

    x.grade();

    cout << endl;

    x.display();

    return 0;
}