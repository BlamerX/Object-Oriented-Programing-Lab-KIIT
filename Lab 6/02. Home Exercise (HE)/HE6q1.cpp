// Write a program to create a class called STUDENT with data members Roll Number, Name and Age. Using inheritance, create the classes UGSTUDENT and PGSTUDENT having fields a semester, fees and stipend. Enter the data for at least 5 students. Find the average age for all UG and PG students separately.

#include <iostream>
#include <string.h>

using namespace std;

class STUDENT
{
protected:
    int rollNumber;
    char *name;
    int age;

public:
    void setData(int roll, const char *str1, int Studentage)
    {
        int len = strlen(str1);
        name = new char[len + 1];
        strcpy(name, str1);
        rollNumber = roll;
        age = Studentage;
    }

    void DisplayStudentDetails()
    {
        cout << "Student roll number is: " << rollNumber << endl;
        cout << "Student name is: " << name << endl;
        cout << "Student Age is: " << age << endl;
    }
};

class UGSTUDENT : STUDENT
{
private:
    int semester;
    float fees;
    float stripend;

public:
    UGSTUDENT(int roll, const char *str1, int studentage, int sem, float fee, float stripen)
    {
        setData(roll, str1, studentage);
        semester = sem;
        fees = fee;
        stripend = stripen;
    }

    int GetAge() { return age; }

    void display()
    {
        DisplayStudentDetails();
        cout << "Student semester is: " << semester << endl;
        cout << "Student Fees is: " << fees << endl;
        cout << "Student Stipen is: " << stripend << " Rs" << endl
             << endl;
    }
};

class PGSTUDENT : STUDENT
{
private:
    int semester;
    float fees;
    float stripend;

public:
    PGSTUDENT(int roll, const char *str1, int studentage, int sem, float fee, float stripen)
    {
        setData(roll, str1, studentage);
        semester = sem;
        fees = fee;
        stripend = stripen;
    }

    int GetAge() { return age; }

    void display()
    {
        DisplayStudentDetails();
        cout << "Student semester is: " << semester << endl;
        cout << "Student Fees is: " << fees << endl;
        cout << "Student Stipen is: " << stripend << " Rs" << endl
             << endl;
    }
};

int main()
{
    int UGTotalAge = 0, PGTotalAge = 0, UGcount = 0, PGcount = 0;

    UGSTUDENT ugs1(2029196, "Adarsh Kumar", 19, 2, 176000.0, 2356.45);
    UGSTUDENT ugs2(2029178, "Blamer X", 16, 1, 126000.0, 0.0);
    UGSTUDENT ugs3(2029196, "Drex Hunter", 18, 4, 200000.0, 24000.56);
    cout << "-----------------------------------------" << endl
         << "UG Students Details are: " << endl
         << "-----------------------------------------" << endl;
    ugs1.display();
    UGTotalAge += ugs1.GetAge();
    UGcount++;
    ugs2.display();
    UGTotalAge += ugs2.GetAge();
    UGcount++;
    ugs3.display();
    UGTotalAge += ugs3.GetAge();
    UGcount++;

    PGSTUDENT pgs1(2583249, "Ace Protag", 21, 6, 654325, 34576.56);
    PGSTUDENT pgs2(6546773, "Beta Blower", 23, 7, 459065, 176000.0);
    cout << "-----------------------------------------" << endl
         << "UG Students Details are: " << endl
         << "-----------------------------------------" << endl;
    pgs1.display();
    PGTotalAge += pgs1.GetAge();
    PGcount++;
    pgs2.display();
    PGTotalAge += pgs2.GetAge();
    PGcount++;

    cout << "-----------------------------------------" << endl
         << "Average Age of UG students is: " << UGTotalAge / UGcount << endl
         << "Average Age of PG students is: " << PGTotalAge / PGcount << endl;

    return 0;
}
