// Create a 'MATRIX' class of size m X n.Overload the ‘+’ operator to add two MATRIX objects.Write a main function to implement it.

#include <iostream>

using namespace std;

class MATRIX
{
private:
    int r, c;
    int mat[20][20];

public:
    MATRIX() { r = c = 0; }
    MATRIX(int row, int column) : r(row), c(column){};
    void getData()
    {
        cout << "Enter the elements: ";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> mat[i][j];
            }
        }
    }
    void displayData()
    {
        cout << "The elements are:\n";
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cout << " " << mat[i][j];
            }
            cout << "\n";
        }
    }
    MATRIX operator+(MATRIX &M)
    {
        MATRIX temp(r, c);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                temp.mat[i][j] = mat[i][j] + M.mat[i][j];
            }
        }
        return temp;
    }
};

int main()
{
    MATRIX m1(2, 2), m2(2, 2), m3;
    m1.getData();
    m2.getData();

    m3 = m1 + m2;
    cout << "The resultant of addition matrix is\n";
    m3.displayData();

    return 0;
}