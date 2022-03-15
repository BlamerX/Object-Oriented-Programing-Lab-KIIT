// (Function Template) Define a function template for finding the minimum value contained in an array. Write main() function to find the minimum value of integer array and minimum value of floating point numbers in an array.

#include <iostream>

using namespace std;

template <class T>

T findMin(T arr[], int n)
{
    T min;
    min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}

int main()
{
    int n;
    cout << "Enter the integer array size: ";
    cin >> n;
    int iarr[n];

    cout << "Integer Values \n";
    for (int i = 0; i < n; i++)
    {
        cin >> iarr[i];
    }

    cout << "Integer Minimum is : " << findMin(iarr, n) << "\n";

    int m;
    cout << "Enter the float array size: ";
    cin >> m;
    double darr[m];

    cout << "Floating values\n";
    for (int k = 0; k < m; k++)
    {
        cin >> darr[k];
    }

    cout << "Double Minimum is : " << findMin(darr, m) << "\n";

    return 0;
}
