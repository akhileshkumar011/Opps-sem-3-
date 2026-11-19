//Create a base class food with a virtual function calculate price now derive pizza burger and sandwich class and calculate there prices based on there property

#include <iostream>
using namespace std;
class Food {
    public:
    virtual void calculatePrice() {
        cout << "Food is essential for lifeee" << endl;
    }
};
class pizza : public Food {
    virtual int calculatePrice(int price , int size) override {
        return price * size;
    }
};
class burger : public Food {
    virtual int calculatePrice(int price , int size) override {
        return price * size;
    }
};
class sandwich : public Food {
    virtual int calculatePrice(int price , int size) override {
        return price * size;
    }
};
int main() {
    Food *ptr;
    pizza p;
    burger b;
    sandwich s;
    ptr = &p;
    cout << "Price of pizza: " << p.calculatePrice(10, 2) << endl;
    ptr = &b;
    cout << "Price of burger: " << b.calculatePrice(5, 3) << endl;
    ptr = &s;
    cout << "Price of sandwich: " << s.calculatePrice(7, 1) << endl;
}