// By changing the number of arguments or by having different types of arguments to a function, function overloading can be achieved. Write a program to demonstrate these two concepts by taking addition of numbers as an example. Use ADD function name for function overloading purpose.

#include <iostream>

using namespace std;

int add(int a, int b = 4)
{
    return a + b;
}

float add(float a, float b = 4.00)
{
    return a + b;
}

void getData(int n)
{
    int a, b;
    float num1, num2;
    if (n == 1)
    {
        cout << "Enter a number: ";
        cin >> a;

        cout << "Enter a float number: ";
        cin >> num1;

        cout << "The sum of (" << a << ") + (" << b << ") is: " << add(a) << endl;
        cout << "The sum of (" << num1 << ") + (" << num2 << ") is: " << add(num1) << endl;
    }
    else if (n == 2)
    {
        cout << "Enter the two numbers: ";
        cin >> a >> b;

        cout << "Enter the two float numbers: ";
        cin >> num1 >> num2;

        cout << "The sum of (" << a << ") + (" << b << ") is: " << add(a, b) << endl;
        cout << "The sum of (" << num1 << ") + (" << num2 << ") is: " << add(num1, num2) << endl;
    }
    else
        cout << "INVALID Argument passed";
}

int main()
{
    int a;
    cout << "Enter the number of arguments you want to enter: ";
    cin >> a;

    getData(a);

    return 0;
}