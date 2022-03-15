// (this Pointer) Write a program to display the contains of an object, when local variable’s name is same as member’s name by using this pointer.

#include <iostream>

using namespace std;

class test
{
private:
    int x;

public:
    test(int x = 0)
    {
        this->x = x;
    }
    test compare(test &obj)
    {
        if (obj.x < x)
            return *this;
        else
            return obj;
    }

    void display()
    {
        cout << "x = " << x << endl;
    }
};

int main()
{
    test ob1(5), ob2(8), ob3;
    ob3 = ob1.compare(ob2);
    ob3.display();

    return 0;
}