#include <iostream>
using namespace std;
class Book{
    public:
    string title;
    string author_name;
    int price;
};
int main(){
    Book objBook;
    objBook.title="A man with no love ";
    objBook.author_name="Akhilesh";
    objBook.price=100;

    cout<<"book title :"<<objBook.title<<endl;
    cout<<"Author_name :"<<objBook.author_name<<endl;
    cout<<"price :"<<objBook.price;

}