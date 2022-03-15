// Write a program to find out the greatest between two numbers defined in two different classes by using friend function

#include <iostream>

using namespace std;

class greatest
{
private:
    int number1, number2;

public:
    // greatest(int num1, int num2) : number1(num1), number2(num2) {}
    void setData(int num1, int num2)
    {
        number1 = num1;
        number2 = num2;
    }
    friend void greatOfTwoNumber(greatest &);
};

void greatOfTwoNumber(greatest &great)
{
    int greatNumber = (great.number1 > great.number2) ? great.number1 : great.number2;
    cout << "The greatest of two numbers is: " << greatNumber;
}

int main()
{
    int a, b;
    cout << "Enter the 1st number: ";
    cin >> a;
    cout << "Enter the 2nd number: ";
    cin >> b;

    // greatest a2(a, b);
    greatest a2;
    a2.setData(a, b);
    greatOfTwoNumber(a2);

    return 0;
}