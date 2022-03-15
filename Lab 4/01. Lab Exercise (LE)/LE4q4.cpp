// Create a class 'COMPLEX' to hold a complex number.Write a friend function to add two complex numbers.Write a main function to add two COMPLEX objects.

#include <iostream>

using namespace std;

class COMPLEX
{
private:
    int real, imagimary;

public:
    void setNumber(int num1, int num2)
    {
        real = num1;
        imagimary = num2;
    }

    friend COMPLEX sumComplexNumbers(COMPLEX com1, COMPLEX com2);

    void Display()
    {
        if (imagimary >= 0)
            cout << "The complex number is: " << real << " + " << imagimary << "i" << endl;
        else
            cout << "The complex number is: " << real << " " << imagimary << "i" << endl;
    }
};

COMPLEX sumComplexNumbers(COMPLEX com1, COMPLEX com2)
{
    COMPLEX com3;

    com3.setNumber((com1.real + com2.real), (com1.imagimary + com2.imagimary));

    return com3;
}

int main()
{
    int r1, i1, r2, i2;
    cout << "Enter the real part: ";
    cin >> r1;
    cout << "Enter the imaginary part: ";
    cin >> i1;
    cout << "Enter the real part: ";
    cin >> r2;
    cout << "Enter the imaginary part: ";
    cin >> i2;

    COMPLEX c1, c2, c3;

    c1.setNumber(r1, i1);
    c2.setNumber(r2, i2);
    c1.Display();
    c2.Display();

    c3 = sumComplexNumbers(c1, c2);
    c3.Display();

    return 0;
}