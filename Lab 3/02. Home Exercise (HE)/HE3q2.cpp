// Create a 'DISTANCE' class with the following members:
// Data Members
// a) feet and inches
// Member Functions
// a) To input distance
// b) To output distance
// c) To add two distance objects
// Write a main function to create objects of DISTANCE class. Input two distances and
// output the sum.

#include <iostream>

using namespace std;

class DISTANCE
{
    int feet;
    int inches;

public:
    void inputDistance(void);
    void outputDistance(void);
    void sumTwoDistance(DISTANCE d1, DISTANCE d2)
    {
        DISTANCE d3;
        d3.inches = d1.inches + d2.inches;
        d3.feet = d1.feet + d2.feet;

        cout << "The sum of Distances in inches is: " << d3.inches << " inch" << endl
             << "The sum of distances in feets is: " << d3.feet << " feet";
    }
} d[3];

void DISTANCE::inputDistance(void)
{
    cout << "Enter the Distance in inches: ";
    cin >> inches;
    cout << "Enter the distance in feet: ";
    cin >> feet;
}

void DISTANCE::outputDistance(void)
{
    cout << "Distance in inches is: " << inches << " inch" << endl
         << "Distance in feet is: " << feet << " feet" << endl;
}

int main()
{
    int n = 2;

    for (int i = 0; i < n; i++)
    {
        d[i].inputDistance();
    }
    for (int i = 0; i < n; i++)
    {
        d[i].outputDistance();
    }

    d[2].sumTwoDistance(d[0], d[1]);

    return 0;
}