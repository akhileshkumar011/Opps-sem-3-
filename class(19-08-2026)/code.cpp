#include <iostream>
using namespace std;

class BankAccount{
    
    int balance = 0 ;
    public:
    int accound_number;

    int deposite(int s){
        cout<<"the deposite amount is : ";
        return balance +=s ;
        
    }
    int withdrawals(int p){
        cout<<"the amount after withdrawals : ";
        return balance -=p;
       
    }
    void displayBalance(){
        cout<<"the total balance is : "<< balance ;
    }

};
int main(){
    BankAccount q;
   cout<< q.deposite(600)<<endl;
    cout<< q.withdrawals(500)<<endl;
    q.displayBalance();
    
}