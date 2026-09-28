//Create an array of ten stundent objects asked the user to enter minimum and maximum marks and display all students whose marks fall in this range


#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int marks;

public:
    void getData() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Name: " << name << ", Marks: " << marks << endl;
    }

    int getMarks() {
        return marks;
    }
};

int main() {
    Student students[10];
    int minMarks, maxMarks;

    // Input details of 10 students
    cout << "Enter details of 10 students:\n";

    for (int i = 0; i < 10; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        students[i].getData();
    }

    // Input range
    cout << "\nEnter minimum marks: ";
    cin >> minMarks;

    cout << "Enter maximum marks: ";
    cin >> maxMarks;

    // Display students within range
    cout << "\nStudents whose marks are between "
         << minMarks << " and " << maxMarks << ":\n";

    for (int i = 0; i < 10; i++) {
        if (students[i].getMarks() >= minMarks &&
            students[i].getMarks() <= maxMarks) {
            students[i].display();
        }
    }

    return 0;
}