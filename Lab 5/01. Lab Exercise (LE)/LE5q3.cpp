// Create a 'DISTANCE' class with the following members:
//
// Data Members
// b) feet and inches
//
// Member Functions
// d) To input distance through constructor
// e) To output distance
// f) To add two distance objects
// Write a main function to create objects of DISTANCE class. Input two distances (one through implicit call and other explicit call and output the sum.

#include <iostream>

using namespace std;

class DISTANCE
{
private:
    float feet, inches;

public:
    DISTANCE(void)
    {
    }

    DISTANCE(float f, float i)
    {
        feet = f;
        inches = i;
    }

    void displayData()
    {
        cout << "Distance in feet is: " << feet << endl
             << "Distance in inches is: " << inches << endl;
    }

    friend DISTANCE add(DISTANCE, DISTANCE);

    void displayAdd()
    {
        cout << "Sum of distance in feet is: " << feet << endl
             << "Sum of distance in inches is: " << inches << endl;
    }
};

DISTANCE add(DISTANCE dis1, DISTANCE dis2)
{
    DISTANCE d3;
    d3.inches = dis1.inches + dis2.inches;
    d3.feet = dis1.feet + dis2.feet;

    return d3;
}

int main()
{
    DISTANCE d1(2, 6), d2 = DISTANCE(23.4, 12.1), d3;

    d1.displayData();
    d2.displayData();

    d3 = add(d1, d2);
    d3.displayAdd();

    return 0;
}