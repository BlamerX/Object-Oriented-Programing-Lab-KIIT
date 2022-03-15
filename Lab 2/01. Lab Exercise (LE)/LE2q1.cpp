// Write a program to demonstrate the concept of call-by-value, call-by-reference & call-byaddress by taking swapping of two numbers as an example.

#include <iostream>

using namespace std;

void swap(int x, int y)
{
    int temp = 0;

    temp = x;
    x = y;
    y = temp;

    cout << "The swap numbers are: " << x << " " << y;
}

void swap1(int &x, int &y)
{
    int temp = 0;

    temp = x;
    x = y;
    y = temp;

    cout << "The swap numbers are: " << x << " " << y;
}

void swap2(int *x, int *y)
{
    int temp = 0;

    temp = *x;
    *x = *y;
    *y = temp;

    cout << "The swap numbers are: " << *x << " " << *y << endl;
}

int main()
{

    int a, b;
    cout << "Enter the two numbers: ";
    cin >> a >> b;

    cout << "Swap using call by Value: \n";
    swap(a, b);

    cout << "Swap using call by Refrence: \n";
    swap1(a, b);

    cout << "\nSwap using call by Address: \n";
    swap2(&a, &b);

    return 0;
}
