//Write a program to find out the prime factors of a number entered through keyboard by using a
//user define function for this.
/*Hints: A prime number is any number with no divisors other than itself and 1, such as 2 and 5. Any number
can be written as a product of prime numbers in a unique way (except for the order). These are called prime
factors of a number. In otherwords, In number theory, the prime factors of a positive integer are the prime
numbers that divide that integer exactly, without leaving a remainder. The process of finding these numbers is
called integer factorization, or prime factorization. • Enter a number : 100 • The prime factors of 100 are 2(2)
and 5(2) • That is, 100 = 2 x 2 x 5 x 5, and those numbers are primes.*/

#include <iostream>
#include <cmath>

using namespace std;

void primefactors(int n)
{
    while (n % 2 == 0)
    {
        cout << "2 ";
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 2)
        cout << n << " ";
}

int main()
{
    int n;
    cin >> n;
    cout << "The Prime Factors of " << n << " are: ";
    primefactors(n);

    return 0;
}