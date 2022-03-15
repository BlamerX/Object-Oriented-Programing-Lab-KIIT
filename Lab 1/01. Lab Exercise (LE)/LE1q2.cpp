// Write a program to check if two given non-negative integers have the same last digit.

#include <iostream>

using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;
    if (a % 10 == b % 10)
    {
        cout << "Last digit is Same";
    }
    else
    {
        cout << "Last digit is not Same.";
    }

    return 0;
}