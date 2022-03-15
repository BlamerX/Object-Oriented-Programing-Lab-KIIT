// (Class Template) Write a program to explain class template by creating a template T for a class named pair having two data members of type T which are inputted by a constructor and a member function get-max() return the greatest of two numbers to main. Note: the value of T depends upon the data type specified during object creation.

#include <iostream>

using namespace std;

template <class T1, class T2>
class Pair
{
    T1 a;
    T2 b;

public:
    Pair(T1 x = 0, T2 y = 0)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "a = " << a << " and b = " << b << endl;
    }

    void get_max()
    {
        if (a > b)
            cout << "Max = " << a;
        else
            cout << "Max = " << b;
    }
};

int main()
{
    Pair<float, int> obj1(23.23, 23);

    obj1.show();
    obj1.get_max();

    return 0;
}