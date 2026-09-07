#include <iostream>
using namespace std;


class Temperature{
    float celsius ;
    public:

     void get() {
        cout <<"enter the temperatur : ";
        cin >> celsius ;
     }
    float change(){
        return  (celsius * 9/5) + 32;
    }

};

 int main(){
    Temperature p;
    p.get();
    cout<<p.change()<<endl;
 }