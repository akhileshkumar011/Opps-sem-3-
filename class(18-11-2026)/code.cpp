// function overriding 
//why virtual effect the behavior of the program?
// why it is necessay to use override keyword in derived class function?
// we can not use override keyeword  without using virtual keyword in base class function.

#include <iostream>
using namespace std;
class Animal {
    public:
    virtual void sound (){
        cout << "Animal makes a sound" << endl;
    }
};
// why we use override keyword in derived class function?
class Dog : public Animal {
    public:
    void sound() override {
        cout << "dog barks" << endl;
    }
};
class Cat : public Animal {
    public:
    void sound() override {
        cout << " cat meowa" << endl;

    }
};
int main (){
    Animal *ptr;
   //Dog *ptr;
    Dog d;
    Cat c;
    ptr = &d;
    ptr->sound();
    ptr = &c;
    ptr->sound();
}