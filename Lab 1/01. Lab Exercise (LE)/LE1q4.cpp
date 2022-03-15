// Write a program in to check whether a number is prime or not.

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
    cin >> num;

    if (prime(num) == true)
    {
        cout << "It is Prime";
    }
    else
    {
        cout << "No it is not prime";
    }

    return 0;
}