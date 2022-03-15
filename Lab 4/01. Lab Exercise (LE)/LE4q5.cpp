// Create two classes DM and DB which store the value of distances.DM stores distances in meters and centimeters and DB in feet and inches.
// Write a program that can read values for the class objects and add one object of Dm with another object of DB.Use friend function to
// carry  out the operation.The object that stores the results may be a DM object or DB object, depending on the units in which the results
// are required. The display should in the format of feet and inches or meters and centimeters depending on the object on display.

#include <iostream>

using namespace std;

class DM
{
private:
    float meter, centimeter;

public:
    void setNumberDM(float m, float cm)
    {
        meter = m;
        centimeter = cm;
    }

    friend DM format(DM &);

    void displayDM()
    {
        cout << "The result in meters is: " << meter << " m" << endl;
        cout << "The result in centimeters is: " << centimeter << " cm" << endl;
    }
};

class DB
{
    float feet, inches;

public:
    void setNumberDM(float f, float i)
    {
        feet = f;
        inches = i;
    }

    friend DB format(DB &);

    void displayDM()
    {
        cout << "The result in feet is: " << feet << " feet" << endl;
        cout << "The result in inches is: " << inches << " inch" << endl;
    }
};

DM format(DM &dis)
{
    DM distaceInDM;
    float m1, cm1;
    m1 = dis.meter + (dis.centimeter / 100);
    cm1 = dis.centimeter + (dis.meter * 100);

    distaceInDM.setNumberDM(m1, cm1);

    return distaceInDM;
}

DB format(DB &dis)
{
    DB distaceInDB;
    float f1, i1;
    f1 = dis.feet + (dis.inches / 12);
    i1 = dis.inches + (dis.feet * 12);

    distaceInDB.setNumberDM(f1, i1);

    return distaceInDB;
}

int main()
{
    float m, cm, f, i;
    cout << "Enter the distance in meter: ";
    cin >> m;
    cout << "Enter the distance in centimeter: ";
    cin >> cm;
    cout << "Enter the distance in feet: ";
    cin >> f;
    cout << "Enter the distance in inches: ";
    cin >> i;

    DM distanceInDM, distanceInDM2;

    distanceInDM.setNumberDM(m, cm);
    distanceInDM2 = format(distanceInDM);
    distanceInDM2.displayDM();

    DB distanceInDB, distanceInDB2;

    distanceInDB.setNumberDM(f, i);
    distanceInDB2 = format(distanceInDB);
    distanceInDB2.displayDM();

    return 0;
}