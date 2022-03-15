// Write a C++ program to create a class called MATRIX using a two - dimensional array of integers.Implement the following operations by overloading the operator== which checks the compatibility of two matrices to be added and subtracted.Perform the addition and subtraction by overloading the operators + and -.Display the result by overloading the operator<<.if (m1 == m2) Then m3 = m1 - m2 and m4 = m1 + m2 else display error. operator<<.if (m1 == m2) Then m3 = m1 - m2 and m4 = m1 + m2 else display error.

#include <iostream>

using namespace std;

class MATRIX
{
private:
    int r, c;
    int mat[3][3];

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
    friend ostream &operator<<(ostream &output, MATRIX &M)
    {
        cout << "The elements are:\n";
        for (int i = 0; i < M.r; i++)
        {
            for (int j = 0; j < M.c; j++)
            {
                cout << " " << M.mat[i][j];
            }
            cout << "\n";
        }
        return output;
    }
    int operator==(MATRIX &M)
    {
        if (r == M.r && c == M.c)
            return 1;
        else
            return 0;
    }
    MATRIX operator-(MATRIX &M)
    {
        MATRIX temp(r, c);
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                temp.mat[i][j] = mat[i][j] - M.mat[i][j];
            }
        }
        return temp;
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

    if (m1 == m2)
    {
        m1.getData();
        m2.getData();

        m3 = m1 - m2;
        cout << "The resultant of subtraction matrix is\n";
        cout << m3;

        m3 = m1 + m2;
        cout << "The resultant of addition matrix is\n";
        cout << m3;
    }
    else
        cout << "Not Possible as number of rows != number of columns\n";

    return 0;
}
