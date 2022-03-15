// (Multilevel Inheritance) Modify the program no. LE6.1 as follows:
// Derive a class named as BOX from RECTANGLE class. Take necessary data & member functions for this box class to calculate the volume of the box. All the data members are initialized through the constructors. Show the result by accessing the area method of circle and rectangle and the volume method of box class through the objects of box class.

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

class RECTANGLE : public CIRCLE
{
protected:
    float breath;

public:
    RECTANGLE() {}

    RECTANGLE(float l, float b) { radius = l, breath = b; }

    void areaOfRectangle()
    {
        cout << "The area of rectangle is: " << radius << " * " << breath << " = " << radius * breath << endl;
    }
};

class BOX : RECTANGLE
{
private:
    float height;

public:
    BOX(float l, float b, float h) { radius = l, breath = b, height = h; }

    void results()
    {
        areaOfCircle();
        areaOfRectangle();
    }

    void Volume()
    {
        cout << "The Volume of Box is: ( " << radius << " * " << breath << " * " << height << " ) = " << radius * breath * height << endl;
    }
};

int main()
{
    CIRCLE c1(2);
    RECTANGLE r1(23, 56);

    c1.areaOfCircle();
    r1.areaOfRectangle();

    cout << endl
         << "Finding area through Box object." << endl
         << "--------------------------------------" << endl;
    BOX b1(2, 4, 6);
    b1.results();
    b1.Volume();

    return 0;
}