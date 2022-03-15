// Write a program to find the summation of three numbers by using one function only with function name SUM having three arguments.If at run time one argumnet is given to the function SUM, then second and third argument will be assumed by default as 10 and 20 respectively.If two argumnets are given at run time, then thrird argument will be assumed as 20. Use function with default argument concepts.

#include <iostream>

using namespace std;

int SUM(int num1, int num2 = 10, int num3 = 20)
{
    cout << endl
         << "You entered: " << num1 << " + " << num2 << " + " << num3 << " = " << (num1 + num2 + num3);
    return 0;
}

int main()
{
    int num;
    cout << "Enter the number of values to be added: ";
    cin >> num;

    int a, b, c;
    if (num == 1)
    {
        cout << "Enter a number: ";
        cin >> a;
        SUM(a);
    }
    else if (num == 2)
    {
        cout << "Enter 2 number: ";
        cin >> a >> b;
        SUM(a, b);
    }
    else if (a == 3)
    {
        cout << "Enter 3 number: ";
        cin >> a >> b >> c;
        SUM(a, b, c);
    }

    // Default arguments

    // cout << "The sum is: " << sum(10);
    // cout << "The sum is: " << sum(10, 20);
    // cout << "The sum is: " << sum(10, 20, 30);

    return 0;
}