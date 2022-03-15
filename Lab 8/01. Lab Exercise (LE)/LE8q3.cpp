// (Pointers to derived classes) Write a program to illustrate how pointers to a base class is used for both base and derived class.

#include <iostream>

using namespace std;

class A
{
protected:
    int x;

public:
    A(int m)
    {
        x = m;
    }
    void display()
    {
        cout << "x = " << x << endl;
    }
};

class B : public A
{
protected:
    int y;

public:
    B(int m, int n) : A(m)
    {
        y = n;
    }
    void display()
    {
        cout << "x = " << x << "\ty = " << y << endl;
    }
};

int main()
{
    A obj(3), *p;
    B ob(7, 9);
    p = &obj;
    p->display(); // Class A display function
    p = &ob;
    p->display(); // Class A display function

    return 0;
}