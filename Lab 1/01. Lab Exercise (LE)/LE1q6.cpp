// Write a program to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n. n is the user input.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double sum = 0, a;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        a = 1 / pow(i, i);
        sum += a;
    }

    cout << "The sum is: " << sum;

    return 0;
}