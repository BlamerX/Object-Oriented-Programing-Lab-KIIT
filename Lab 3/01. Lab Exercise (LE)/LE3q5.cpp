// Define a class named as FRACTION that contains two data members that represent the    numerator and denominator of a fraction.By
//defining necessary member functions, write a program to add, subtract and multiply two fractions.The add accepts the objects using
// callby - value technique, subtract using call - by - reference and multiply using call - by - address technique.
// Sample input
//
// For Fraction - 1
// Enter the numerator : 3
// Enter the denominator : 5
// For Fraction - 2
// Enter the numerator : 4
// Enter the denominator : 9
//
// Sample Output
//
// Result of addition = 47 / 45
// Result of subtraction = 7 / 45
// Result of multiplication = 4 / 15

#include <iostream>

using namespace std;

int gcd(int a, int b);

class FRACTION
{
private:
    int numerator;
    int denominator;

public:
    void getData(void);
    void add(FRACTION f1, FRACTION f2);              // Call by value
    void subtract(FRACTION &f1, FRACTION &f2);       // call by refrence
    void multiplication(FRACTION *f1, FRACTION *f2); // call by address
};

int gcd(int a, int b)
{
    if (a == 0 || b == 0)
        return a;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}
void FRACTION::add(FRACTION f1, FRACTION f2) // Call by value
{
    FRACTION f3;
    f3.numerator = (f1.numerator * f2.denominator) + (f1.denominator * f2.numerator);
    f3.denominator = (f1.denominator * f2.denominator);

    cout << "Result of addition = " << f3.numerator << "/" << f3.denominator;
}

void FRACTION::subtract(FRACTION &f1, FRACTION &f2) // call by refrence
{
    FRACTION f3;
    f3.numerator = (((&f1)->numerator) * ((&f2)->denominator)) - (((&f1)->denominator) * ((&f2)->numerator));
    f3.denominator = ((&f1)->denominator) * ((&f2)->denominator);

    cout << "Result of subtraction = " << f3.numerator << "/" << f3.denominator;
}
void FRACTION::multiplication(FRACTION *f1, FRACTION *f2) // call by address
{
    FRACTION f3;
    f3.numerator = (f1->numerator * f2->numerator);
    f3.denominator = (f1->denominator * f2->denominator);

    int factor = gcd(f3.numerator, f3.denominator);
    f3.numerator = f3.numerator / factor;
    f3.denominator = f3.denominator / factor;

    cout << "Result of multiplication = " << f3.numerator << "/" << f3.denominator;
}
void FRACTION::getData(void)
{
    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cin >> denominator;
}

int main()
{
    FRACTION f1, f2, f3;

    cout << "For Fraction - 1\n";
    f1.getData();
    cout << "For Fraction - 2\n";
    f2.getData();

    f3.add(f1, f2); // call by value
    cout << endl;
    f3.subtract(f1, f2); // call by refrence
    cout << endl;
    f3.multiplication(&f1, &f2); // call by address

    return 0;
}