// (Pure Virtual Function) Write a program by modifying LE8.5 b) by making display() as pure virtual function.

#include <iostream>

using namespace std;

class ABC
{
    int a;

public:
    virtual void display() = 0;
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