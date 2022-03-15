// Write a program to overload unary(-) operator using friend function

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

    friend Numbers operator-(Numbers &obj)
    {
        Numbers obj1;
        obj1.x = -(obj.x);
        obj1.y = -(obj.y);
        return obj1;
    }
};

int main()
{
    Numbers num1(5, 2);

    num1.display();
    num1 = -num1; // Overloaded Unary (-) Operator
    num1.display();

    return 0;
}