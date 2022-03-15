// (Single Inheritance) Write a program to create a class CIRCLE with one field as radius, used to calculate the area of a Circle. Create another class RECTANGLE used to calculate the area of the rectangle which is a subclass of CIRCLE class. Use the concept of single inheritance such that the radius of circle class can be re-used as length in rectangle class. Take necessary data members and member functions for both the classes to solve this problem. All the data members are initialized through the constructors. Show the result by accessing the area method of both the classes through the objects of rectangle class.

#include <iostream>

using namespace std;

class CIRCLE
{
protected:
    float radius;

public:
    CIRCLE() {}

    CIRCLE(float r) : radius(r) {}

    void areaOfCircle()
    {
        cout << "The area of circle of radius " << radius << " is: " << (22 * radius * radius) / 7.0 << endl;
    }
};

class RECTANGLE : CIRCLE
{
private:
    float breath;

public:
    RECTANGLE(float l, float b) { radius = l, breath = b; }

    void areaOfRectangle()
    {
        cout << "The area of rectangle is: " << radius << " * " << breath << " = " << radius * breath << endl;
    }
};

int main()
{
    CIRCLE c1(2);
    RECTANGLE r1(23, 56);

    c1.areaOfCircle();
    r1.areaOfRectangle();

    return 0;
}
