// Write a program to create a class called COMPLEX and implement the following overloading
// functions ADD that return a COMPLEX number.
// a) ADD (a , s2) - where a is an integer (real part) and s2 is a complex number.
// b) ADD (s1, s2) - where s1 and s2 are complex numbers.

#include <iostream>

using namespace std;

class complex
{
    float real;
    float imaginary = 10;

public:
    void getData(void);
    void add(complex c1, complex c2)
    {
        complex c3;

        c3.real = c1.real + c2.real;
        c3.imaginary = c1.imaginary + c2.imaginary;

        if (c3.imaginary >= 0)
            cout << "Sum of complex number : " << c3.real << " + " << c3.imaginary << "i" << endl;
        else
            cout << "Sum of complex number : " << c3.real << " " << c3.imaginary << "i" << endl;
    }
    void add(float real, complex c2)
    {
        complex c3;

        c3.real = real + c2.real;
        c3.imaginary = imaginary + c2.imaginary;

        if (c3.imaginary >= 0)
            cout << "Sum of complex number : " << c3.real << " + " << c3.imaginary << "i" << endl;
        else
            cout << "Sum of complex number : " << c3.real << " " << c3.imaginary << "i" << endl;
    }
};

void complex::getData(void)
{
    cout << "Enter the real no: ";
    cin >> real;
    cout << "Enter the imaginary no: ";
    cin >> imaginary;
}
int main()
{
    complex c1, c2, c3;

    c1.getData();
    c2.getData();

    c3.add(20, c2);
    c3.add(c1, c2);

    return 0;
}