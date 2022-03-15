// Define a class called Triangle, with two fields as base and height to calculate the area of a
// triangle.The class contains two methods such as getData() to initialize the fields of a triangle
//     and areaTrin() to calculate the area of a triangle.Write a program to find out area of 10 triangles.

#include <bits/stdc++.h>

using namespace std;

class triangle
{
private:
    float base, height;

public:
    void getData(float b, float h)
    {
        cout << "Enter the Base: ";
        cin >> b;
        cout << "Enter the Height: ";
        cin >> h;
        base = b;
        height = h;
    }

    float areaTrim()
    {
        float ar;
        ar = (1.0 / 2.0) * base * height;
        return ar;
    }
};

int main()
{
    float b, h;

    int n = 10;
    triangle tr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the Details of Triangle " << i + 1 << endl;
        tr[i].getData(b, h);
    }

    for (int i = 0; i < n; i++)
    {
        cout << "The AREA of Triangle " << i + 1 << " is = " << tr[i].areaTrim() << endl
             << endl;
    }

    return 0;
}
