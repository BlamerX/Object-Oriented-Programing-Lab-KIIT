// Write a program using copy constructor to copy data of an object to another object.

#include <iostream>

using namespace std;

class point
{
private:
    int x, y;

public:
    point(int num1, int num2)
    {
        x = num1;
        y = num2;
    }

    // Copy constructor
    point(point &p1)
    {
        x = p1.x;
        y = p1.y;
    }

    void display()
    {

        cout << "x = " << x << "\ty = " << y << endl;
    }
};

int main()
{
    point p1(23, 78); // Parameterized constructor.
    point p2(p1);     // Copy constructor.

    cout << "Original data in constructor is" << endl;
    p1.display();

    cout << "Data in copy constructor is" << endl;
    p2.display();

    return 0;
}