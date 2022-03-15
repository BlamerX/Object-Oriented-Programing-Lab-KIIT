// Write a program to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, sum = 0, a = 1;
    cout << "Enter the number: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == n)
        {
            cout << a << " = ";
            sum += a;
        }
        else
        {
            cout << a << " + ";
            sum += a;
        }
        a = (a + pow(10, i));
    }
    cout << sum;

    return 0;
}