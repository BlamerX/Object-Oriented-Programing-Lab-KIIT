// Create a class TIME with members hour, minute and second. Write a program that adds two time objects.The objects must be passed as function arguments.

#include <iostream>

using namespace std;

class time
{
private:
    int hour;
    int minute;
    int second;

public:
    void getData(void);
    time add(time t1, time t2)
    {
        time t3;

        t3.second = t1.second + t2.second;
        t3.minute = t1.minute + t2.minute + (t3.second / 60);
        t3.hour = t1.hour + t2.hour + (t3.minute / 60);
        t3.minute = t3.minute % 60;
        t3.second = t3.second % 60;

        cout << "The sum of time is: " << t3.hour << "Hr . " << t3.minute << "Min . " << t3.second << "Sec.";

        return t3;
    }
};

void time::getData(void)
{
    cout << "Enter the Hr: ";
    cin >> hour;
    cout << "Enter the Min: ";
    cin >> minute;
    cout << "Enter the Sec: ";
    cin >> second;
}

int main()
{
    time t1, t2, t3;

    cout << "Enter the Time 1" << endl;
    t1.getData();
    cout << "Enter the Time 2" << endl;
    t2.getData();

    t3 = t3.add(t1, t2);

    return 0;
}