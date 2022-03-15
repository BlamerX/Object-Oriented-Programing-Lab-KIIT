// (Function Template) Write a program to define the function template for swapping the two items of various data types such as integers, float and characters etc.

#include <iostream>

using namespace std;

template <typename T>

void Swap(T &n1, T &n2)
{
    T temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    int i1 = 6, i2 = 3;
    float f1 = 7.2, f2 = 4.5;
    char c1 = 'p', c2 = 'x';

    cout << "Before passing data to function template." << endl;
    cout << "i1 = " << i1 << " i2 = " << i2 << endl;
    cout << "f1 = " << f1 << " f2 = " << f2 << endl;
    cout << "c1 = " << c1 << " c2 = " << c2 << endl;

    Swap(i1, i2);
    Swap(f1, f2);
    Swap(c1, c2);

    cout << "After passing data to function template." << endl;
    cout << "i1 = " << i1 << " i2 = " << i2 << endl;
    cout << "f1 = " << f1 << " f2 = " << f2 << endl;
    cout << "c1 = " << c1 << " c2 = " << c2 << endl;

    return 0;
}