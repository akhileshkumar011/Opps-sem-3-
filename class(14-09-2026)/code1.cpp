// copy constructor

#include <iostream>
using namespace std;

class Rectangle
{
    int length, width;

public:
    // Parameterized constructor
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    // Copy constructor
    Rectangle(Rectangle &r)
    {
        length = r.length;
        width = r.width;
    }

    // Function to calculate area
    int area()
    {
        return length * width;
    }

    // Function to display details
    void display()
    {
        cout << "Length = " << length << endl;
        cout << "Width = " << width << endl;
        cout << "Area = " << area() << endl;
    }
};

int main()
{
    // Creating first rectangle
    Rectangle r1(10, 5);

    cout << "First Rectangle:" << endl;
    r1.display();

    // Creating second rectangle using copy constructor
    Rectangle r2(r1);

    cout << "\nSecond Rectangle (Copied):" << endl;
    r2.display();

    return 0;
}
