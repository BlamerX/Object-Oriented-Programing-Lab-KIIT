// (Non - type as function parameters) Write a program to demonstrate the concept behind function templates with non - type as function parameters by taking sorting an array of numbers as an examples.

#include <iostream>

using namespace std;

void swap_(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap_(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size - 1; i++)
    {
        cout << arr[i] << ", ";
    }

    cout << arr[size - 1] << endl;
}

int main()
{
    int arr[] = {156, 21, 5, 56, 6};
    const int size_arr = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array is: ";
    printArray(arr, size_arr);
    sort(arr, size_arr);
    cout << "Sorted Array is: ";
    printArray(arr, size_arr);

    return 0;
}