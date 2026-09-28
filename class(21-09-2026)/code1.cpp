//create a university class with private uni name and nested departmant class  with a private department name write  sutiable member function display the both 

#include <iostream>
using namespace std;
class University{
    private : 
    string uniName ;
    public :
      University( string s ){
          uniName = s;
    }

    class Department{
        private : 
        string departName;

        public :
        Department(string p){
            departName = p;
        }
        void display(){
            cout << " the department name is : " << departName << endl;
        }
    };
     void display(){
        cout << "the university name is : " << uniName <<endl ; 
     }
};

int main(){
    University s("IIT mumbai ");
    University::Department p("computer science and engineering ");

    s.display();
    p.display();
}