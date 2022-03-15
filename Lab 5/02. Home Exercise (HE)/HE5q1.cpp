// Write a program to generate a fibonacci series using copy constructor.

#include <iostream>

using namespace std;

class fibonacci
{
private:
    int f0, f1, fib;

public:
    fibonacci()
    {
        f0 = 1;
        f1 = 0;
        fib = f0 + f1;
    }

    // Copy constructor
    fibonacci(fibonacci &fi)
    {
        f0 = fi.f0;
        f1 = fi.f1;
        fib = fi.fib;
    }

    void increment()
    {
        f0 = f1;
        f1 = fib;
        fib = f0 + f1;
    }
    void display()
    {
        cout << fib << " ";
    }
};

int main()
{
    fibonacci fib;
    fibonacci fib2 = fib;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        fib.display();
        fib.increment();
    }

    cout << endl
         << "Copy constructor" << endl;
    for (int i = 0; i < n; i++)
    {
        fib2.display();
        fib2.increment();
    }

    return 0;
}
