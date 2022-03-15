// Write a program to display all the prime numbers within a given range by writing a suitable user defined function for testing of the prime number.

#include <iostream>

using namespace std;

bool prime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    else
    {
        return true;
    }
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "The total number of prime till " << num << " is: ";
    for (int i = 1; i <= num; i++)
    {
        if (prime(i) == true)
        {
            cout << i << " ";
        }
    }

    return 0;
}