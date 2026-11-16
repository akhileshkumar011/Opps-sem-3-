#include <iostream>
using namespace std;
class BankAccount{
    private:
    int AccountNumber;
    float Balance;
    public:
    BankAccount(int accNum, float bal){
        AccountNumber = accNum;
        Balance = bal;      
    }
    void deposit(float amount){
        Balance+= amount;
    }
    void withdraw(float amount){
        Balance -= amount;
    }

    void display(){
        cout<<"Account Number: "<<AccountNumber<<endl;
        cout<<"Balance: "<<Balance<<endl;
        }
        };

        int main(){
            BankAccount account(12345, 1000.0);
            account.deposit(500.0);
            account.withdraw(200.0);
            account.display();
            return 0;
        }