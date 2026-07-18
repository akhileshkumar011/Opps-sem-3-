#include <iostream>
using namespace std;
class Mobile{
    public:
    string Brand;
    int Cost;
};
int main(){
     Mobile m1,m2,m3;
    
     m1.Brand ="Sumsung";
     m1.Cost=20000;

     m2.Brand="Apple";
     m2.Cost=70000;

     m3.Brand="Realme";
     m3.Cost=15000;

     cout<<"Mobile 1 :\n";
     cout<<m1.Brand <<endl;
     cout<<m1.Cost<<endl<<endl;

     cout<<"Mobile 2 :\n";
     cout<<m2.Brand <<endl;
     cout<<m2.Cost<<endl<<endl;

     cout<<"Mobile 3 :\n";
     cout<<m3.Brand <<endl;
     cout<<m3.Cost<<endl<<endl;

     
}