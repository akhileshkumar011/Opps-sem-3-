//create a university  class containing nested department class store and display the department name .


#include <iostream>
using namespace std;

class University{
    
    

    

    public :
        class Department{
            public : 
             
            string departmentName;
            

            void Display(){
                cout<<"the name of the department : "<< departmentName ;
            }

            Department(string u){
                departmentName = u;
            }
        };
};
int main(){
    
    University::Department s("computer science and Engineering" ) ;

    s.Display();


}