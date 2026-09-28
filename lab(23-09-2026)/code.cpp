#include <iostream>
using namespace std;
class People{
    private :

        int serial_no;
        string name ;
        string address;
    
    //constructor

    public :

    People(int s , string p , string t){
        serial_no = s+1 ;
        name = p ; 
        address = t ; 
    }
    void Display();
};
void People::Display(){
    
        cout<<"Serial_number : " << serial_no <<endl;
        cout<<"Name of the student : "<< name << endl;
        cout<< "Address of the student : "<< address <<endl ;

    
}

int main(){
    cout<<"Enter the Details of the student : " << endl;
    People s(1,"Aman","Noida") , s1(2 , "ajay","Mathura");


    s.Display();
    s1.Display();
}