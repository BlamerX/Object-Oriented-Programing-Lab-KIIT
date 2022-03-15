// (Virtual Function) Define a class ABC. Derive two classes BBC and KBC from ABC. All the classes contains same member function name as display(). The base class pointer always holds the derived class objects.
// a) Write a program such that base class pointer or reference will always access/call the base version of the members available in derived class, do not have any access to the derived class members.
// b) Write a program such that base class pointer or reference will always access/call the derived version of the members available in derived class, do not have any access to the base class members.
// Write down the concepts used for bit a) and b) separately.

#include <iostream>

using namespace std;

class ABC
{
    int a;

public:
    void display()
    {
        cout << "Display at ABC" << endl;
    }
};

class BBC : public ABC
{
    void display()
    {
        cout << "Display at BBC" << endl;
    }
};

class KBC : public ABC
{
    void display()
    {
        cout << "Display at KBC" << endl;
    }
};

int main()
{
    ABC *ptr;
    BBC obj;
    KBC obj1;

    ptr = &obj;
    ptr->display();

    ptr = &obj1;
    ptr->display();

    return 0;
}