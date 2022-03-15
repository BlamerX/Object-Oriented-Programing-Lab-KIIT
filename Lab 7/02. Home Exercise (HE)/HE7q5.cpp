// Write a program to create a class called OCTAL which has the characteristics of an octal number.Implement the following operations by writing an appropriate constructor and an overloaded operator+.
// I.OCTAL h = x; where x is an integer.
// II.int y = h + k; where h is an octal object and k is an integer.
// Display the OCTAL results by overloading the operator<<.Also Display the values of h and y.

#include <iostream>
#include <math.h>

using namespace std;

class OCTAL
{
    int oct[15], count;

public:
    OCTAL(int x);
    int operator+(int);
    friend ostream &operator<<(ostream &, OCTAL &);
};
OCTAL ::OCTAL(int x)
{
    int i = 0, rem, a[15];
    while (x != 0)
    {
        rem = x % 8;
        x = x / 8;
        a[i++] = rem;
    }
    count = i;
    int n = count - 1;
    for (i = 0; i < count; i++)
    {
        oct[i] = a[n];
        n--;
    }
}

int OCTAL::operator+(int k)
{
    int x = 0, i;
    int j = count - 1;
    for (i = 0; i < count; i++)
    {
        x = x + oct[j] * pow(8, i);
        j--;
    }
    return (x + k);
}

ostream &operator<<(ostream &print, OCTAL &o)
{
    for (int i = 0; i < o.count; i++)
        print << o.oct[i];
    return (print);
}
int main()
{
    int x, k, y = 0;
    cout << "\nEnter the integer value in decimal: ";
    cin >> x;
    OCTAL h = OCTAL(x);
    cout << "The corresponding octal value  for (" << x << ") is : " << h;
    cout << "\nEnter the integer to be added to octal value : ";
    cin >> k;
    y = x + k;
    cout << "\n " << h << "(Octal) + " << k << "(Decimal) = " << y << "(Decimal)";

    return 0;
}