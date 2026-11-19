//Create a base class animal with a function sound derive two class dog and cat and overiide the function
// this is not overriding this is function highlighting because the base class function is not declared as virtual. To achieve proper overriding, the base class function should be declared as virtual. Here's the corrected code:

#include <iostream>
using namespace std;
class Animal {
    public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

class Dog : public Animal {
    public:
    void sound() {
        cout << "dog barks" << endl;
    }
};

class Cat : public Animal {
    public:
    void sound() {
        cout << "cat meows" << endl;
    }
};

int main() {
    Dog d; 
    Cat c;
    d.sound();
    c.sound();
}

