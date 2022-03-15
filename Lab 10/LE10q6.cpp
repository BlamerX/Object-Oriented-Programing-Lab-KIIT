// Write a program to copy the content of two files and merge them into a third file.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream f1, f2, f3;
    string str1, str2;

    f1.open("file1.txt", ios::in);
    f2.open("file2.txt", ios::in);
    f3.open("file3.txt", ios::out);
    while (getline(f1, str1))
        f3 << str1 << endl;

    while (getline(f2, str2))
        f3 << str2 << endl;

    f1.close();
    f2.close();
    f3.close();

    return 0;
}