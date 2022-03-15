// Write a program to check two given integers, and return true if one of them is 10 or if their sum is 10.

#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a == 10 || b == 10 || (a + b) == 10)
        cout << "True";
    else
        cout << "False";

    return 0;
}