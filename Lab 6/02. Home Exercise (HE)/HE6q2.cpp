// Create a base class called Shape with two data members of double type which could be used to compute the area of figures.Derive two specific classes called Triangle and Rectangle from the base class Shape.Add to the base class, a member function called GetData to initialize base class data members and another member function displayArea to compute and display the area of figures.Make displayArea a virtual function and redefine this function in the derived classes to suit their requirements.Using these three classes design a program which will accept dimensions of a triangle or rectangle interactively and display the area.

#include <iostream>

using namespace std;

class Shape
{
protected:
    double dataMember1;
    double dataMember2;

public:
    void GetData()
    {
        cout << "Enter the first data: ";
        cin >> dataMember1;
        cout << "Enter the secound data: ";
        cin >> dataMember2;
    }

    virtual void displayArea()
    {
        cout << "This is Shape Class" << endl;
    }
};

class Triangle : public Shape
{
public:
    void displayArea()
    {
        cout << "This is Triangle Class" << endl
             << "Area of Triangle is: 1/2 * " << dataMember1 << " * " << dataMember2 << " = " << dataMember1 * dataMember2 / 2.0 << endl;
    }
};

class Rectangle : public Shape
{
public:
    void displayArea()
    {
        cout << "This is Rectangle Class" << endl
             << "Area of Rectangle is: " << dataMember1 << " * " << dataMember2 << " = " << dataMember1 * dataMember2 << endl;
    }
};

int main()
{
    Shape *s1;
    Triangle t1;
    s1 = &t1;

    s1->GetData();
    s1->displayArea();

    Rectangle r1;
    s1 = &r1;
    r1.GetData();
    r1.displayArea();

    return 0;
}