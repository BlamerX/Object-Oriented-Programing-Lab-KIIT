// Write a program to open the file student.txt and display the students information on the computer screen along with the total marks scored by the student.

#include <iostream>
#include <fstream>

using namespace std;

class student
{
private:
    int rollNumber;
    string name;
    char gender;
    int pmarks;
    int cmarks;
    int mmarks;

public:
    void getData()
    {
        cout << "Enter the Students Roll Number: ";
        cin >> rollNumber;
        cin.ignore();
        cout << "Enter the Students Name: ";
        getline(cin, name);
        cout << "Enter the Students Gender(M/F): ";
        cin >> gender;
        cout << "Enter the Students Physics Marks: ";
        cin >> pmarks;
        cout << "Enter the Students Chemistry Marks: ";
        cin >> cmarks;
        cout << "Enter the Students Maths Marks: ";
        cin >> mmarks;
    }

    void showData()
    {
        cout << "Student name is: " << name << endl
             << "Student roll no is: " << rollNumber << endl
             << "Student gender is: " << gender << endl
             << "Student Physics marks is: " << pmarks << endl
             << "Student Chemistry marks is: " << cmarks << endl
             << "Student Maths marks is: " << mmarks << endl
             << endl;
    }
};

int main()
{
    fstream FILE;
    int n;

    cout << "Enter the number of students :";
    cin >> n;

    student s[n];

    FILE.open("student.txt", ios::out | ios::binary);
    cout << "Entert the details of " << n << " students" << endl;
    for (int i = 0; i < n; i++)
    {
        s[i].getData();
        FILE.write((char *)&s[i], sizeof(s[i])); // Writting students data to file
    }

    FILE.open("student.txt", ios::in | ios::binary);
    cout << "\nStudents details are\n-----------------------------\n";
    for (int i = 0; i < n; i++)
    {
        FILE.read((char *)&s[i], sizeof(s[i])); // Reading students data to file

        s[i].showData();
    }
    FILE.close();

    return 0;
}