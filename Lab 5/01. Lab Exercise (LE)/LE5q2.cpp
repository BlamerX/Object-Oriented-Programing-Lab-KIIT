// Write a program to perform addition of two complex numbers using constructor overloading.The first constructor which takes no argument is used to create objects which are not initialized, second which takes one argument is used to initialize real and imaginary parts to equal values and third which takes two argument is used to initialize real and imaginary to two different values.

#include <iostream>

using namespace std;

class complex
{
private:
    int real, imag;

public:
    complex(void) // Constructor decleration
    {
    }

    complex(int r)
    {
        real = r;
        imag = r;
    }

    complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    friend complex add(complex, complex);

    void displaySum()
    {
        if (imag >= 0)
            cout << "The sum of complex numbers is: " << real << " + " << imag << "i" << endl;
        else
            cout << "The sum of complex numbers is: " << real << " " << imag << "i" << endl;
    }

    void displayData()
    {
        if (imag >= 0)
            cout << "The complex numbers is: " << real << " + " << imag << "i" << endl;
        else
            cout << "The complex numbers is: " << real << " " << imag << "i" << endl;
    }
};

complex add(complex c1, complex c2)
{
    complex c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;

    return c3;
}

int main()
{
    complex c1, c2(2), c3(4, 7);

    c2.displayData();
    c3.displayData();

    c1 = add(c2, c3);
    c1.displaySum();

    return 0;
}