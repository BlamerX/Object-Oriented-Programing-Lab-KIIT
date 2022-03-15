// Write a program to find out the area of an rectangle be defining a class named as Rectangle
// having length and breadth as its data members.Declare another class named as RectArea
// having one member function named as area to calculate the area by taking the data length and
// breadth from the Rectangle class.Solve this by using friend class.

#include <iostream>

using namespace std;

class rectangle;
class RectArea;

class rectangle
{
private:
    float length, breath;

public:
    void getData()
    {
        cout << "Enter the length: ";
        cin >> length;
        cout << "Enter the breath: ";
        cin >> breath;
    }

    friend float calc(rectangle rec, RectArea area);
};

class RectArea
{
private:
    float area;

public:
    friend float calc(rectangle rec, RectArea area);
};

float calc(rectangle rec, RectArea area)
{
    area.area = rec.length * rec.breath;
    return area.area;
}

int main()
{
    rectangle r;
    RectArea a;

    r.getData();
    cout << "The area of the rectangle is: " << calc(r, a);

    return 0;
}