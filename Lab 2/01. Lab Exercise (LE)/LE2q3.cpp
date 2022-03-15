// Write a program to find out the area of a circle and volume of a sphere by using function overloading concept.(Use one function name as AREA - VOL).

#include <iostream>

using namespace std;

float AREA_VOL(int radius1, int radius2)
{
    return (3.14 * radius1 * radius2);
}

float AREA_VOL(int radius1, int radius2, int radius3)
{
    return ((4 * 3.14 * (radius1 * radius2 * radius3)) / 3);
}

int main()
{

    int r;
    cout << "Enter the radius: ";
    cin >> r;

    cout << "The area of circle of radius " << r << " is: " << AREA_VOL(r, r) << endl;
    cout << "The Volume of sphere of radius " << r << " is: " << AREA_VOL(r, r, r) << endl;

    return 0;
}