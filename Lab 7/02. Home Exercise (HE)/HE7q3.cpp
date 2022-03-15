// Derive a class ‘MAT’ from MATRIX class created in the previous program.Add a member function to overload ‘*’ operator to multiply two objects.(Single Inheritance).

#include <iostream>

using namespace std;

class MAT;

class MATRIX
{
public:
    int r, c;
    int mat[20][20];
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
};

class MAT : public MATRIX
{
public:
    int r, c;
    int mat[20][20];
    MAT() { r = c = 0; }
    MAT(int row, int column) : r(row), c(column){};
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
    MATRIX operator*(MATRIX &M)
    {
        MATRIX temp(r, c);
        if (M.c == r)
        {
            for (int i = 0; i < M.r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    temp.mat[i][j] = 0;
                    temp.mat[i][j] = mat[i][j] + M.mat[i][j];
                }
            }
        }
        return temp;
    }
};

int main()
{
    MATRIX m1(2, 2), m3;
    MAT m2(2, 2);
    m1.getData();
    m2.getData();

    m1 = m1 + m2;
    cout << "The resultant of addition matrix is\n";
    m3.displayData();

    return 0;
}