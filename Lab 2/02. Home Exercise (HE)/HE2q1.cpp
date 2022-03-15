// Write a rogram to compute absolute value of a number (integer or float) by using function overloading for computation of absolute value. The number is entered through keboard.

#include <iostream>

using namespace std;

void absolute(int n)
{
    cout << " |" << n << "| = ";
    if (n < 0)
    {
        n = (-1) * n;
    }
    cout << n << endl;
}

void absolute(float n)
{
    cout << " |" << n << "| = ";
    if (n < 0)
    {
        n = (-1) * n;
    }
    cout << n << endl;
}

int main()
{
    int num;
    cout << "Enter the integer number: ";
    cin >> num;

    float num2;
    cout << "Enter the float number: ";
    cin >> num2;

    absolute(num);
    absolute(num2);

    return 0;
}
