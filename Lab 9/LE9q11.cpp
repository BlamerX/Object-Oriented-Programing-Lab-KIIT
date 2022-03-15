// (Class Template) Design a template Stack which can work with either a Student record or an Employee record. A Student record contains name, rollNo and cgpa. An Employee record contains name, empId and salary fields. Provide push, pop, display functions to the template stack class.

#include <iostream>
#include <string>

using namespace std;

#define SIZE 5

template <class T>
class Stack
{
private:
    int top;
    T st[SIZE];
    string name;
    int rollNo_empID;
    string cgpa_salaryFields;

public:
    Stack()
    {
        top = -1;
    }
    void push(T k, string h, string l)
    {
        if (isFull())
        {
            cout << "Stack is full\n";
        }
        cout << "Insert sucessful\n";
        top = top + 1;
        st[top] = k;
        name = h;
        rollNo_empID = k;
        cgpa_salaryFields = l;
    }
    T pop()
    {
        T popped_element = st[top];
        top--;
        return popped_element;
    }
    T topElement()
    {
        T top_element = st[top];
        return top_element;
    }
    bool isFull()
    {
        if (top == (SIZE - 1))
            return 1;
        else
            return 0;
    }
    bool isEmpty()
    {
        if (top == -1)
            return 1;
        else
            return 0;
    }
    void display()
    {
        cout << "Name is: " << name << endl;
        cout << "Roll no or ID is: " << rollNo_empID << endl;
        cout << "CGPA or Salary is: " << cgpa_salaryFields << endl;
    }
};

int main()
{
    Stack<int> student_record;

    student_record.push(23, "Sharma Rohan", "E");
    student_record.display();

    Stack<int> employee_record;

    employee_record.push(43, "Rohan", "Software engineer");
    employee_record.display();

    return 0;
}