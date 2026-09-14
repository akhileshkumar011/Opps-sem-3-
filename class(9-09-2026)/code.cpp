#include <iostream>
using namespace std;

class Student {
    public:
        static int count ;
        int roll;
        Student(){
            count++;
        }
};
int Student::count = 0;
int main() {
    Student s1, s2,s3;
    cout << "total number of students = " << Student::count <<endl;
    
}