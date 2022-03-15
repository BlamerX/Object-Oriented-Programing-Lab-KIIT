// (Class Template) Write a program to define a class template for reading two data items from the keyboard and find out their sum.

#include <iostream>
using namespace std;

template <class T>
class Number
{
private:
    T num;

public:
    void getData()
    {
        cout << "Enter the value: ";
        cin >> num;
    }
    T getNum()
    {
        return num;
    }
};

void sum(int a, float b)
{
    cout << "Sum = " << a + b << endl;
}

int main()
{

    Number<int> numberInt, obj;
    numberInt.getData();

    Number<double> numberDouble;
    numberDouble.getData();

    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    sum(numberInt.getNum(), numberDouble.getNum());

    return 0;
}