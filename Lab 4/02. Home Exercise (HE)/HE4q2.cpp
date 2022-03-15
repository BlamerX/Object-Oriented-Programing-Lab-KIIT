// Write a program to find out greatest among three numbers.Define two classes, first class KBC contain two data members a and b, and
// second class BBC only one data member c.Input data to the data members by defining appropriate member functions.A member function max()
// defined in second class BBC to find out the greatest among three numbers.Solve this problem by using friend function.

#include <iostream>

using namespace std;

class KBC;
class BBC;

class KBC
{
private:
    int a, b;

public:
    void getData()
    {
        cout << "Enter the 1st number: ";
        cin >> a;
        cout << "Enter the 2nd number: ";
        cin >> b;
    }

    friend int max(KBC a, BBC c);
};

class BBC
{
private:
    int c;

public:
    void getData()
    {
        cout << "Enter the 3rd number: ";
        cin >> c;
    }

    friend int max(KBC a, BBC c);
};

int max(KBC num1, BBC num2)
{
    int max = (num1.a > num1.b) ? ((num1.a > num2.c) ? num1.a : num2.c) : ((num1.b > num2.c) ? num1.a : num2.c);
    cout << "The maximum of " << num1.a << ", " << num1.b << " and " << num2.c << " is: " << max << endl;
    return 0;
}

int main()
{
    KBC k;
    BBC b;

    k.getData();
    b.getData();

    max(k, b);

    return 0;
}