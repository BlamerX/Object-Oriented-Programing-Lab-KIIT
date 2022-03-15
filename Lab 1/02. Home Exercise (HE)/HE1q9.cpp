// Define a structure to store the employee name, id, date of birth, basic salary of an employee. Write a program to store n employee details.Display the employee information having highest salary.Sort the employee details according to the basic salary.

#include <iostream>
#include <algorithm>

using namespace std;

struct employee
{
    string name;
    int id;
    int dob;
    float salary;
};

bool sorting(employee e1, employee e2)
{
    if (e1.salary < e2.salary)
    {
        return true;
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    employee e[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the employee name: ";
        cin >> e[i].name;
        cout << "Enter the employee ID: ";
        cin >> e[i].id;
        cout << "Enter the employee Date of birth: ";
        cin >> e[i].dob;
        cout << "Enter the employee salary: ";
        cin >> e[i].salary;
    }

    sort(e, e + n, sorting);

    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << e[i].name << "\t" << e[i].id << "\t" << e[i].dob << "\t" << e[i].salary << endl;
    }

    return 0;
}