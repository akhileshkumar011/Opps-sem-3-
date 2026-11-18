//Create overloaded function name interest to calculate simple interest using 
//Principle and rate 
//Principle , rate , time 

#include <iostream>
using namespace std;


    float interest(float p, float r) {
        return p*r/100;
    }
    float interest(float p, float r, float t) {
        return (p*r*t)/100;
    }
int main(){
    
    float p, r, t;
    cout << "Enter principle and rate: ";
    cin >> p >> r;
    cout << "Simple Interest = " << interest(p, r) << endl;

    cout << "Enter principle, rate and time: ";
    cin >> p >> r >> t;
    cout << "Simple Interest = " << interest(p, r, t) << endl;

    return 0;
}