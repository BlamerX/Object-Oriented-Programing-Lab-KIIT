// Write a program for processing students records using structure. The o/p must come in the
// following format with decreasing order of their average marks.
// ROLL NAME AVERAGE RANK
// ==== ===== ======= ====
// 001 Harapriya 95.46 1
// 029 Sampad 92.34 2

#include <iostream>
#include <algorithm>

using namespace std;

struct student
{
    int roll;
    char name[20];
    float average;
};

bool sorting(student s1, student s2)
{
    if (s1.average > s2.average)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    student s[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter roll no: ";
        cin >> s[i].roll;
        cout << "Enter the name: ";
        cin.ignore();
        cin.getline(s[i].name, 20);
        cout << "Enter the average marks: ";
        cin >> s[i].average;
    }

    sort(s, s + n, sorting);

    cout << endl
         << "ROLL\tNAME\tAVERAGE\tRANK" << endl;
    cout << "====\t====\t=======\t====" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << s[i].roll << "\t" << s[i].name << "\t" << s[i].average << "\t" << i + 1 << endl;
    }

    return 0;
}