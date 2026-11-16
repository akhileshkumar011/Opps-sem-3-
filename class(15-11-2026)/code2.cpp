// prefix decreament 

#include <iostream>
using namespace std;
class Number{
    int x;
    public:
    Number(int a){
        x = a;
    }
    void operator--(){
       x = x - 2 ;  
    }
    void display(){
        cout<< x << endl;
    }
};

int main(){
    Number s(10);
    --s;
    s.display();
}



// postfic decrement 

#include <iostream>
using namespace std;
class Number{
    int x;
    public:
    Number(int a){
        x = a;
    }
    void operator--(int){
       x = x - 2 ;  
    }
    void display(){
        cout<< x << endl;
    }
};
int main(){
    Number s(10);
    s--;
    s.display();
}