// Write a program to find out area or volume of an shape/object by using one function name as FUN-AREA only. If the function takes one argumnet then it will calculate area of a circle, two argument for area of rectangle and three argumnet volume of a box. If no argumnet is given to the function, then it will display appropriate message.

#include <iostream>

using namespace std;

float fun_area(float radius)
{
    return (3.14 * radius * radius);
}

float fun_area(float length, float breath)
{
    return (length * breath);
}

float fun_area(float length, float breath, float height)
{
    return (length * breath * height);
}

void fun_area(void)
{
    printf("INVALID Argumrnts passed.");
}

void getData(int n)
{
    float r, l, b, h;
    if (n == 1)
    {
        cout << "You entered 1 Argument\n";
        cout << "Enter the radius: ";
        cin >> r;
        cout << "The area of circle is: " << fun_area(r) << endl;
    }

    else if (n == 2)
    {
        cout << "You entered 2 Argument\n";
        cout << "Enter the length and breath: ";
        cin >> l >> b;
        cout << "the Area of rectangle is: " << fun_area(l, b) << endl;
    }

    else if (n == 3)
    {
        cout << "You entered 3 Argument\n";
        cout << "Enter the length, breath, height: ";
        cin >> l >> b >> h;
        cout << "The Volume of the box is: " << fun_area(l, b, h) << endl;
    }

    else
    {
        fun_area();
    }
}

int main()
{
    int a;
    cout << "Enter the number of arguments you want to pass: ";
    cin >> a;

    getData(a);

    return 0;
}