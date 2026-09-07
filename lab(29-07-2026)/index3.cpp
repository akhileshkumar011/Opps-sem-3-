#include <iostream>
using namespace std;
int pointer(int* x){
    *x = *x + 1;
}
int main(){
    int a =5;
    pointer(&a);
    cout<<a;
}
