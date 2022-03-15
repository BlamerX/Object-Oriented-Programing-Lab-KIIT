// Write a program to find out the area of an rectangle through friend function and member function separately of Rectangle class.

#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length, height;

public:
    // Rectangle(int l, int h) : length(l), height(h) {}

    void setData(int l, int h)
    {
        length = l;
        height = h;
    }
    friend void display(Rectangle &);
};

void display(Rectangle &rec)
{
    cout << rec.length * rec.height << endl;
}

int main()
{
    int length, height;
    cout << "Enter the length of Rectangle: ";
    cin >> length;
    cout << "Enter the height of Rectangle: ";
    cin >> height;

    cout << "The Area of Rectangle is: ";
    // Rectangle r1(length, height);

    Rectangle r1;
    r1.setData(length, height);

    display(r1);

    return 0;
}
