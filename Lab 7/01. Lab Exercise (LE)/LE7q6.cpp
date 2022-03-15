// Re - write the program no .7.5 using friend function.
// Write a program to design a class representing complex numbers and having functionality of performing addition and multiplication of two complex numbers using operator overloading.

#include <iostream>

using namespace std;

class alpha
{
private:
    float real, img;

public:
    alpha() {}
    alpha(float r, float i)
    {
        real = r;
        img = i;
    }
    friend alpha operator*(alpha &c1, alpha &c2)
    {
        alpha c3;
        c3.real = c1.real * c2.real - c1.img * c2.img;
        c3.img = c1.real * c2.img + c1.img * c2.real;
        return c3;
    }
    friend alpha operator+(alpha &c1, alpha &c2)
    {
        alpha c3;
        c3.real = c1.real + c2.real;
        c3.img = c1.img + c2.img;
        return c3;
    }
    void display()
    {
        cout << real << " + " << img << "i" << endl;
    }
};

int main()
{
    alpha obj1(5, 7.3), obj2(10, 3.2), obj3;

    obj3 = obj1 + obj2;
    obj3.display();
    obj3 = obj1 * obj2;
    obj3.display();

    return 0;
}