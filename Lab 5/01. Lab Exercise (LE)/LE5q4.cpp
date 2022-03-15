// Create a class called 'TIME' that has three integer data members for hours, minutes and seconds, a constructor to initialize the object to some constant value, member function to add two TIME objects, member function to display time in HH:MM:SS format. Write a main function to create two TIME objects, add then and display the result in HH:MM:SS format.

#include <iostream>

using namespace std;

class TIME
{
private:
    int hr, min, sec;

public:
    TIME(void)
    {
    }

    TIME(int h, int m = 0, int s = 0)
    {
        hr = h;
        min = m;
        sec = s;
    }

    friend TIME addTwoTime(TIME t1, TIME t2);

    void displatTime()
    {
        cout << hr << "hr : " << min << "min : " << sec << "sec" << endl;
    }
};

TIME addTwoTime(TIME t1, TIME t2)
{
    TIME t3;

    t3.sec = t1.sec + t2.sec;
    t3.min = t1.min + t2.min + (t3.sec / 60);
    t3.hr = t1.hr + t2.hr + (t3.min / 60);
    t3.min = t3.min % 60;
    t3.sec = t3.sec % 60;

    return t3;
}

int main()
{

    TIME t1(1, 30, 42), t2(2, 52, 38), t3;

    cout << "Time 1 is: ";
    t1.displatTime();
    cout << "Time 2 is: ";
    t2.displatTime();

    t3 = addTwoTime(t1, t2);
    cout << "Sum is: ";
    t3.displatTime();

    return 0;
}