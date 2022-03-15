// Write a program to perform addition of two complex numbers using constructor.Complex numbers are given through user input.

#include <iostream>

using namespace std;

class complex
{
private:
    int real, imag;

public:
    complex(int r, int i) // Constructor decleration
    {
        real = r;
        imag = i;
    }

    complex(){};

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
    complex c1(2, 4), c2(4, 7), c3;

    c1.displayData();
    c2.displayData();

    c3 = add(c1, c2);

    c3.displaySum();

    return 0;
}
