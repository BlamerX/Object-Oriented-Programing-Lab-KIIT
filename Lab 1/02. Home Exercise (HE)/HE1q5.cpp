// Write a program to find the last prime number occur before the entered number.

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

    cout << "The prime before " << num << " is: ";
    for (int i = num; i > 0; i--)
    {
        if (prime(i) == true)
        {
            cout << i << " ";
            break;
        }
    }

    return 0;
}