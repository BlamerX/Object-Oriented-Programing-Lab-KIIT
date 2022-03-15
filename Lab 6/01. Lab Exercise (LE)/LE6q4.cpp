// (Multipath Inheritance) Design a base class called Student with two fields : -(i)Name (ii) roll number.
// Derive two classes called Sports and Exam from the Student base class.Class Sports has a field called s_grade and class Exam has a field called e_grade which are integer fields.Derive a class called Results which inherit from Sports and Exam.This class has a character array or string field to represent the final result.Also it has a member function called display which can be used to display the final result.Illustrate the usage of these classes in main.

#include <iostream>
#include <string.h>

using namespace std;

class Student
{
protected:
    char *name;
    int rollNumber;
};

class Sports : public Student
{
protected:
    int s_grade;

public:
    void setData(const char *str1, int roll)
    {
        int len = strlen(str1);
        name = new char[len + 1];
        strcpy(name, str1);
        rollNumber = roll;
    }

    void displayOfStudent()
    {
        cout << "Student name is: " << name << endl;
        cout << "Student roll number is: " << rollNumber << endl;
    }
};

class Exam : public Student
{
protected:
    int e_grade;
};

class Result : Sports, Exam
{
    string array;

public:
    Result(const char *str1, int roll, int sportGrade, int ExamGrade)
    {
        setData(str1, roll);
        s_grade = sportGrade;
        e_grade = ExamGrade;
    }

    void result()
    {
        if (s_grade + e_grade >= 90)
            array = "O";
        else if (s_grade + e_grade >= 80)
            array = "A";
        else if (s_grade + e_grade >= 70)
            array = "E";
        else
            array = "Fail";
    }

    void display()
    {
        displayOfStudent();
        cout << "Grade in Sports is: " << s_grade << endl;
        cout << "Grade in Exam is: " << e_grade << endl;
        result();
        cout << "Your total grade is: " << array << endl
             << endl;
    }
};

int main()
{
    Result r1("Display Person 1", 2029196, 34.65, 89.46);
    Result r2("Display Person 2", 2029178, 0, 85.46);
    Result r3("Display Person 4", 2029245, 0, 0);

    r1.display();
    r2.display();
    r3.display();

    return 0;
}