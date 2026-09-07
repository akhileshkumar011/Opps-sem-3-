#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int marks;

    void getData() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter marks: ";
        cin >> marks;
    }
};

// Function accepting two Student objects
void compareMarks(Student s1, Student s2) {
    if (s1.marks > s2.marks) {
        cout << s1.name << " has higher marks: " << s1.marks << endl;
    }
    else if (s2.marks > s1.marks) {
        cout << s2.name << " has higher marks: " << s2.marks << endl;
    }
    else {
        cout << "Both students have equal marks." << endl;
    }
}

int main() {
    Student s1, s2;

    s1.getData();
    s2.getData();

    compareMarks(s1, s2);

    return 0;
}