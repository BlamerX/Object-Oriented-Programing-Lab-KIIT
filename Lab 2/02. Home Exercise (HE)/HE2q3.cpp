// Modify program no.LE1.5 that if no argument will be given it will display error message and the program will work for both integer and float data types.

#include <iostream>

using namespace std;

int sum(int num1, int num2 = 10, int num3 = 20)
{
    return (num1 + num2 + num3);
}

float sum(float num1, float num2 = 10.00, float num3 = 20.00)
{
    return (num1 + num2 + num3);
}

void choice1(int num)
{

    int a, b, c;
    if (num == 1)
    {
        cin >> a;
        cout << "The sum is: " << sum(a);
    }
    else if (num == 2)
    {
        cin >> a >> b;
        cout << "The sum is: " << sum(a, b);
    }
    else if (num == 3)
    {
        cin >> a >> b >> c;
        cout << "The sum is: " << sum(a, b, c);
    }
    else
    {
        cout << "ERROR INVALID ARGUMENT\n";
        cout << "The sum is: " << sum(a, b, c);
    }
}

void choice2(int num)
{

    float a, b, c;
    if (num == 1)
    {
        cin >> a;
        cout << "The sum is: " << sum(a);
    }
    else if (num == 2)
    {
        cin >> a >> b;
        cout << "The sum is: " << sum(a, b);
    }
    else if (num == 3)
    {
        cin >> a >> b >> c;
        cout << "The sum is: " << sum(a, b, c);
    }
    else
    {
        cout << "ERROR INVALID ARGUMENT\n";
        cout << "The sum is: " << sum(a, b, c);
    }
}

void call(int n)
{
    int a;
    cout << "Enter 1 for int input, 2 for float input: ";
    cin >> a;
    if (a == 1)
        choice1(a);
    else if (a == 2)
        choice2(a);
    else
        cout << "INAVALI NUMBER";
}

int main()
{
    int num;
    cout << "Enter the number of values to be added: ";
    cin >> num;

    call(num);

    // cout << "The sum is: " << sum(10);
    // cout << "The sum is: " << sum(10, 20);
    // cout << "The sum is: " << sum(10, 20, 30);

    return 0;
}