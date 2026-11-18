//  . Create a base class bank with a function getinterestrate derive sbi , htfc , and icic class and override the function

#include <iostream>
using namespace std;
class getInterestRate {
public:
     void rate() {
        cout << "Interest rate is 5%" << endl;
    }
};
class SBI : public getInterestRate {
public:
    void rate() {
        cout << "Interest rate is 7%" << endl;
    }
};
class HTFC : public getInterestRate {
public:
    void rate() {
        cout << "Interest rate is 8%" << endl;  
    }
};
class ICIC : public getInterestRate {
    public:
    void rate() {
        cout << "Interest rate is 9%" << endl;
    }
};
int main() {
    SBI s;
    HTFC h;
    ICIC i;

    s.rate();
    h.rate();
    i.rate();

    return 0;
}