// Write a program to find the most occurring element in an array of integers.

#include <iostream>

using namespace std;

void most_occuring_element(int num[], int n)
{
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
            if (num[i] == num[j])
                count++;
        if (count > max)
            max = count;
    }

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        for (int j = i + 1; j < n; j++)
            if (num[i] == num[j])
                count++;
        if (count == max)
            cout << num[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The most occuring element is: ";
    most_occuring_element(arr, n);

    return 0;
}