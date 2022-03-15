// Write a program to find the smallest and largest elements in a given array of n integers.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0], min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    cout << "Min is: " << min << endl
         << "Max is: " << max;

    return 0;
}