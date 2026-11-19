// Create a base class payment with a virtual function pay derive upi and card classes and override the function. 

#include <iostream>
using namespace std;
class Payment {
    public:
    virtual void pay() {
        cout << "Payment is being processed" << endl;
    }
};
class UPI : public Payment {
    public:
    void pay() override {
        cout << "Payment is being processed through UPI" << endl;
    }
};
class Card : public Payment {
    public:   
    void pay() override {
        cout << "Payment is being processed through Card" << endl;  
    }
};
int main() {
    Payment *ptr;
    UPI u;
    Card c;
    ptr = &u;
    ptr->pay();
    ptr = &c;
    ptr->pay();
}