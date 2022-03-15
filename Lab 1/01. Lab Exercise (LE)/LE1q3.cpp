// Write a program to find out all roots of a quadratic equation.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    float D, real, img, r1, r2;
    cin >> a >> b >> c;

    D = (b * b) - (4 * a * c);

    if (D > 0)
    {
        r1 = (-b + sqrt(D)) / (2 * a);
        r2 = (-b - sqrt(D)) / (2 * a);
        cout << "The roots are: " << endl
             << "Root 1: " << r1 << endl
             << "Root 2: " << r2 << endl;
    }
    else if (D == 0)
    {
        r1 = (-b + sqrt(D)) / (2 * a);
        cout << "The roots are: " << endl
             << "Root 1 = Root 2 = " << r1 << endl;
    }
    else
    {
        real = (float)-b / (2 * a);
        img = sqrt(-D) / (2 * a);
        cout << "Roots are complex: " << endl
             << "Root 1 = " << real << " + " << img << "i" << endl
             << "Root 2 = " << real << " + " << img << "i";
    }

    return 0;
}