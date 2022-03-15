// Write a program to overload new and delete operator

#include <iostream>

using namespace std;

class Student
{
private:
    int age;
    string name;

public:
    Student() {}
    void getData()
    {
        cout << "Enter the Student name: ";
        getline(cin, name);
        cout << "Enter the Student age: ";
        cin >> age;
    }
    void *operator new(size_t size)
    {
        void *par = ::operator new(size);
        return par;
    }
    void operator delete(void *par)
    {
        free(par);
    }

    void display()
    {
        cout << "Student name is: " << name << endl;
        cout << "Student age is: " << age << endl;
    }
};

int main()
{
    Student *s = new Student();
    s->getData();
    s->display();

    return 0;
}