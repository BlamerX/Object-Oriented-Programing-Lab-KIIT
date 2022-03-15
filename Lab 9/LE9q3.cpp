// (Function Template) Write a template function to search for a given key element from an array. Illustrate how you perform search in integer, character as well as double arrays using the same template function.

#include <iostream>
#define MAX 5

using namespace std;

template <typename T>

void search(T arr[], T val)
{
    for (int i = 0; i < MAX; i++)
    {
        if (arr[i] == val)
            cout << arr[i] << " is present in the array" << endl;
    }
}

int main()
{

    int iarr[MAX];

    cout << "Integer Values \n";
    for (int i = 0; i < MAX; i++)
    {
        cin >> iarr[i];
    }

    int number;
    cout << "Enter the number you want to search: ";
    cin >> number;

    search(iarr, number);

    char carr[MAX];

    cout << "Character Values \n";
    for (int i = 0; i < MAX; i++)
    {
        cin >> carr[i];
    }

    char number1;
    cout << "Enter the number you want to search: ";
    cin >> number1;

    search(carr, number1);

    double darr[MAX];

    cout << "Floating Values \n";
    for (int i = 0; i < MAX; i++)
    {
        cin >> darr[i];
    }

    double number2;
    cout << "Enter the number you want to search: ";
    cin >> number2;

    search(darr, number2);

    return 0;
}