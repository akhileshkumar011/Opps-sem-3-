#include<iostream>
#include<string>
using namespace std;

class Student{
      public:
          string name;
          int marks;
          void display()
          {
              cout << "Name: " << this->name << " || Marks: " << this->marks << endl;
          }
};

int main() {
    int n;
    cout << "Enter the number of object: ";
    cin >> n;
    Student s[5];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name: ";
        cin >> s[i].name;
        cout << "Enter marks: ";
        cin >> s[i].marks;
    }

    // Now displaying each object
    for (int i = 0; i < n; i++)
    {
        s->display();  
    }

    return 0;
}