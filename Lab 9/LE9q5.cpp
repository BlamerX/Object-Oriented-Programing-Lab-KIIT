// (Non - type as template parameters) Write a program to demonstrate the concept behind function templates with non - type as template parameters by taking sorting an array of numbers as an examples.

#include <iostream>

using namespace std;

template <class T>
void swap_(T *x, T *y)
{
    T temp = *x;
    *x = *y;
    *y = temp;
}

template <class T, int size>
void sort(T arr[])
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

template <class T, int size>
void printArray(T arr[])
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
    printArray<int, size_arr>(arr);
    sort<int, size_arr>(arr);
    cout << "Sorted Array is: ";
    printArray<int, size_arr>(arr);

    return 0;
}