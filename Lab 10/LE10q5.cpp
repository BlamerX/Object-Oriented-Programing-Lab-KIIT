// Write a program to count number of words and lines available in a file student.txt.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("student.txt");

    int line = 1, word = 1;
    char ch;

    f.seekg(0, ios::end);
    f.seekg(0, ios::beg);

    while (f)
    {
        f.get(ch);
        if (ch == '\n')
            line++;
        word++;
    }

    cout << "Lines = " << line << endl
         << "Words = " << word << endl;

    f.close();

    return 0;
}