// Write a program to overload unary(++) operator and unary(--) operator.

#include <iostream>

using namespace std;

class alpha
{
private:
    int a;
    int b;

public:
    alpha(int x = 0, float y = 0)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "a = " << a << "\tb = " << b << endl;
    }
    void operator++(int)
    {
        a++;
        b++;
    }
    void operator--(int)
    {
        a--;
        b--;
    }
};

int main()
{
    alpha obj1(5, 7);
    obj1.show();

    // unary operator overloading
    obj1++;
    obj1.show();
    obj1--;
    obj1.show();

    return 0;
}