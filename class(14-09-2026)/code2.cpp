// Create a Book class using a constructor to initialize book details. Create a copy constructor to copy the details of one book object into another, and use a destructor to display a message when each object is destroyed.

#include <iostream>
using namespace std;
class Book{
    private:
    
    string  title;
    string author;
    float price;

    public:

    Book(string a , string b , float c ){
        title = a ;
        author = b ;
        price = c ;
    }

    Book(Book &s){
        title = s.title ;
        author = s.author ;
        price  = s.price ; 
    }

    void display(){
        cout<<"tilte : "<< title <<endl;
        cout<<"authour : "<<author <<endl;
        cout<<" price : " << price << endl;
    }

    ~Book(){
        cout<<"the book is deleted : "<< title <<endl;
    }
};

int main(){
    Book s("King","Ramkishan",1000);
    s.display();

    Book s2(s);

    s2.display();
    return 0;
}
