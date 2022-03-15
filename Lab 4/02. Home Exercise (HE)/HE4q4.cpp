// Write a program to exchange values between two classes by using friend function.

#include <iostream>

using namespace std;

class two;

class one
{
private:
    float a;

public:
    void getData()
    {
        cout << "Enter the 1st number: ";
        cin >> a;
    }

    friend void interchange(one &, two &);

    void displayData()
    {
        cout << "Number 1 is: " << a << endl;
    }
};

class two
{
private:
    float b;

public:
    void getData()
    {
        cout << "Enter the 2nd number: ";
        cin >> b;
    }

    friend void interchange(one &, two &);

    void displayData()
    {
        cout << "Number 2 is: " << b << endl;
    }
};

void interchange(one &num1, two &num2)
{
    float temp = num1.a;
    num1.a = num2.b;
    num2.b = temp;
}

int main()
{
    one a;
    two b;

    a.getData();
    b.getData();

    cout << "The numbers Before interchange are" << endl;
    a.displayData();
    b.displayData();

    interchange(a, b);

    cout << "The numbers After interchange are" << endl;
    a.displayData();
    b.displayData();

    return 0;
}