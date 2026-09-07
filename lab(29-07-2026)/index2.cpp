#include <iostream>
using namespace std;
void increment(int &x){
    x=x+1;
}
int main(){
    int a = 5;
    increment(a);
    cout<< a;
}