#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;

   
     void getdata(){
        cin >> name >>  roll_no;
     }

     void display(){
        cout<< name << " " <<roll_no << endl;
     }
};

int main(){
    Student s[3];

    cout <<"enter the detail of the student ";

    for(int i = 0 ; i<3 ; i++){
        s[i].getdata();
    }

    cout <<"the details are : ";
    for (int i = 0 ; i<3 ; i++){
        s[i].display();
    }
}