// Write a program to find the sum of two numbers declared in a class and display the numbers and sum using friend function.

#include <iostream>

using namespace std;

class SumOfTwoNumbers
{
private:
    int num1, num2, sum;

public:
    void getNumber()
    {
        cout << "Enter the 1st number: ";
        cin >> num1;
        cout << "Enter the 2nd number: ";
        cin >> num2;
    }

    friend void add(SumOfTwoNumbers &su);

    void displayData()
    {
        cout << num1 << " + " << num2 << " = " << sum << endl;
    }
};

void add(SumOfTwoNumbers &su)
{
    su.sum = su.num1 + su.num2;
}

int main()
{

    SumOfTwoNumbers s;

    s.getNumber();
    add(s);
    s.displayData();

    return 0;
}
