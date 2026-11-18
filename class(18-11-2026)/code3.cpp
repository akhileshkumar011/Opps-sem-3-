#include <iostream>
using namespace std;
class Student {
    public:
    int x ;
    Student(int n){
        x = n;
    }
    void operator+(Student s){
        cout << "result : "<< x + s.x << endl;
    }
};
int main(){
    Student s1(10);
    Student s2(20);
    s1 + s2;
    return 0;
}