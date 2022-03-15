// (Overloading Function Template) Write a C++ program illustrating overloading function template by taking sum of numbers(max.Three) entered through keyboard.

#include <iostream>
#include <conio.h>
using namespace std;

template <class t1, class t2, class t3>
void sum(t1 a, t2 b, t3 c)
{
    cout << "a = " << a << ", b = " << b << "and c = " << c << endl;
    cout << "Sum = " << a + b + c << endl
         << endl;
}

int main()
{
    int a, b;
    float x, y;
    cout << "Enter two integer data: ";
    cin >> a >> b;
    cout << "Enter two float data: ";
    cin >> x >> y;

    sum(x, a, b);
    sum(y, a, b);
    sum(a, x, y);
    sum(b, x, y);

    return 0;
}