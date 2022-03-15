// Write a program to overload unary(++) operator and unary(--) operator using friend function.

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
    friend void operator++(alpha &obj, int)
    {
        obj.a++;
        obj.b++;
    }
    friend void operator--(alpha &obj, int)
    {
        obj.a--;
        obj.b--;
    }
};

int main()
{
    alpha obj1(5, 7);
    obj1.show();

    // unary operator overloading
    obj1++; // obj1.operator++();
    obj1.show();
    obj1--;
    obj1.show();

    return 0;
}