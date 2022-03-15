// Write a program by using friend function to add data objects of two different classes ABC and XYZ.

#include <iostream>

using namespace std;

class ABC;
class XYZ;

class ABC
{
private:
    int num1;
    float fnum1;
    string str1;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> num1;
        cout << "Enter a float number: ";
        cin >> fnum1;
        cout << "Enter a string: ";
        cin >> str1;
    }

    friend void add(ABC abc, XYZ xyz);
};

class XYZ
{
private:
    int num2;
    float fnum2;
    string str2;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> num2;
        cout << "Enter a float number: ";
        cin >> fnum2;
        cout << "Enter a string: ";
        cin >> str2;
    }

    friend void add(ABC abc, XYZ xyz);
};

void add(ABC abc, XYZ xyz)
{
    int num = abc.num1 + xyz.num2;
    float fnum = abc.fnum1 + xyz.fnum2;
    string str = abc.str1 + " " + xyz.str2;

    cout << "The sum of " << abc.num1 << " + " << xyz.num2 << " = " << num << endl;
    cout << "The sum of " << abc.fnum1 << " + " << xyz.fnum2 << " = " << fnum << endl;
    cout << "The sum of " << abc.str1 << " + " << xyz.str2 << " = " << str << endl;
}

int main()
{
    ABC a;
    XYZ b;

    a.getData();
    b.getData();

    cout << "The sum of the above input data is" << endl;

    add(a, b);

    return 0;
}