// Write a program to find out the area of one rectangle and one square by using a suitable friend function named as area() for it.

#include <iostream>

using namespace std;

class shape
{
private:
    int side, length, breath;

public:
    // shape(int s, int l, int b) : side(s), length(l), breath(b) {}

    void setData(int s, int l, int b)
    {
        side = s;
        length = l;
        breath = b;
    }
    friend void area(shape &);
};

void area(shape &are)
{
    cout << "The area of Square is: " << are.side * are.side << endl;
    cout << "The area of Rectangle is: " << are.length * are.breath << endl;
}

int main()
{
    int side, length, breath;
    cout << "Enter the side of Square: ";
    cin >> side;
    cout << "Enter the length of rectangle: ";
    cin >> length;
    cout << "Enter the breath of the rectangle: ";
    cin >> breath;

    // shape a2(side, length, breath);
    shape a2;

    a2.setData(side, length, breath);

    area(a2);

    return 0;
}