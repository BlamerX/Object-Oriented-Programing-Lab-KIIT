// Write a program that takes student data (roll number, name, gender, marks in three subjects (phy, chem. & math) from the keyboard and store it to a file student.txt.

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
    FILE.close();

    return 0;
}
