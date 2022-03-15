// Write a program to create a class having two integer data members, now initialize and then add 10 to each data member using operator function where operator function can be called when you write the following statement inside main function a1 + 5, 10 + a;

#include <iostream>

using namespace std;

class alpha
{
private:
    int x, y;

public:
    alpha(int a = 0, int b = 0)
    {
        x = a;
        y = b;
    }
    friend alpha operator+(alpha &obj, int a)
    {
        alpha temp;
        temp.x = a + obj.x;
        temp.y = a + obj.y;
        return temp;
    }
    friend alpha operator+(int a, alpha &obj)
    {
        alpha temp;
        temp.x = obj.x + a;
        temp.y = obj.y + a;
        return temp;
    }
    void display()
    {
        cout << "x = " << x << " y = " << y << endl;
    }
};

int main()
{
    alpha a1(2, 4), a2;
    int x;
    cout << "Enter x: ";
    cin >> x;
    a2 = a1 + x;
    a2.display();

    alpha a3(6, 4), a4;
    cout << "Enter x: ";
    cin >> x;
    a4 = x + a3;
    a4.display();

    return 0;
}