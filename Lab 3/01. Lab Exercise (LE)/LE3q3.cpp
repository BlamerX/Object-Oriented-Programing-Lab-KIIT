// Write a program that adds two complex numbers. The objects must be passed as function arguments.

#include <iostream>

using namespace std;

class complex
{
private:
    float real;
    float imaginary;

public:
    void getData(void);
    complex add(complex c1, complex c2)
    {
        complex c3;

        c3.real = c1.real + c2.real;
        c3.imaginary = c1.imaginary + c2.imaginary;

        if (c3.imaginary >= 0)
            cout << "Sum of complex number is : " << c3.real << " + " << c3.imaginary << "i";
        else
            cout << "Sum of complex number is : " << c3.real << " " << c3.imaginary << "i";

        return c3;
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

    c3 = c3.add(c1, c2);

    return 0;
}