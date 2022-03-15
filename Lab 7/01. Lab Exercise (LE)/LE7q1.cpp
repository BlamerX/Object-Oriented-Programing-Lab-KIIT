// Write a program to overload unary(-) operator.

#include <iostream>
using namespace std;

class Numbers
{
    int x, y;

public:
    Numbers(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << x << " " << y << endl;
    }

    void operator-()
    {
        x = -x;
        y = -y;
    }
};

int main()
{
    Numbers num(5, 2);

    num.display();
    -num; // Overloaded Unary (-) Operator
    num.display();

    return 0;
}
