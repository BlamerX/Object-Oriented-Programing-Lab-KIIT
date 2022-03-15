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
    alpha operator*(alpha &c2)
    {
        alpha c3;
        c3.real = real * c2.real - img * c2.img;
        c3.img = real * c2.img + img * c2.real;
        return c3;
    }
    alpha operator+(alpha &c2)
    {
        alpha c3;
        c3.real = real + c2.real;
        c3.img = img + c2.img;
        return c3;
    }
    void display()
    {
        if (img >= 0)
            cout << real << " + " << img << "i" << endl;
        else
            cout << real << " " << img << "i" << endl;
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