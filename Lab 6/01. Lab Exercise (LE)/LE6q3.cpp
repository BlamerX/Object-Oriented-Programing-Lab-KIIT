// (Hierarchical Inheritance) Modify the program no. LE6.1 as follows:
// Derive a class named as CYLINDER from CIRCLE class. Take necessary data & member functions for this class to calculate the volume of the cylinder. Show the result by accessing the area method of circle and rectangle through object of rectangle class and the area of circle and volume method of cylinder class through the objects of cylinder class.

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
    RECTANGLE() {}

    RECTANGLE(float l, float b) { radius = l, breath = b; }

    void areaOfRectangle()
    {
        cout << "The area of rectangle is: " << radius << " * " << breath << " = " << radius * breath << endl;
    }

    void resultInRectangle()
    {
        areaOfCircle();
        areaOfRectangle();
    }
};

class CYLINDER : CIRCLE
{
private:
    float height;

public:
    CYLINDER(float r, float h) { radius = r, height = h; }

    void volume()
    {
        cout << "The volume of Cylinder of radius(" << radius << ") and height(" << height << ") = " << (3.414) * radius * radius * height << endl;
    }

    void resultInCylinder()
    {
        areaOfCircle();
        volume();
    }
};

int main()
{
    CIRCLE c1(12);
    RECTANGLE r1(3, 5);
    CYLINDER cy1(2, 4);

    c1.areaOfCircle();
    r1.areaOfRectangle();
    cy1.volume();

    cout << endl
         << "Finding area through Rectangle object." << endl
         << "--------------------------------------" << endl;
    r1.resultInRectangle();

    cout << endl
         << "Finding area through Cylinder object." << endl
         << "--------------------------------------" << endl;
    cy1.resultInCylinder();

    return 0;
}