#include <iostream>
using namespace std;

class Sports;

class Student {
private:
    int academicMarks;

public:
    Student(int marks) {
        academicMarks = marks;
    }

    
    friend int calculateTotal(Student s, Sports sp);
};

class Sports {
private:
    int sportsMarks;

public:
    Sports(int marks) {
        sportsMarks = marks;
    }

    friend int calculateTotal(Student s, Sports sp);
};

int calculateTotal(Student s, Sports sp) {
    return s.academicMarks + sp.sportsMarks;
}

int main() {
    Student student(85);
    Sports sports(15);

    int total = calculateTotal(student, sports);

    cout << "Academic Marks = 85" << endl;
    cout << "Sports Marks = 15" << endl;
    cout << "Total Marks = " << total << endl;

    return 0;
}