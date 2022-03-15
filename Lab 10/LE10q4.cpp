// Write a program to count number of characters, tabs, newline characters available in agiven text file.

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    FILE *fp;
    char ch, fname[30];
    int noOfChar = 0, noOfSpace = 0, noOfTab = 0, noOfNewline = 0;
    printf("Enter file name with extension: ");
    gets(fname);
    fp = fopen(fname, "r");
    while (fp)
    {
        ch = fgetc(fp);
        if (ch == EOF)
            break;
        noOfChar++;
        if (ch == ' ')
            noOfSpace++;
        if (ch == '\t')
            noOfTab++;
        if (ch == '\n')
            noOfNewline++;
    }
    fclose(fp);
    cout << "Number of characters = " << noOfChar << endl;
    cout << "Number of spaces = " << noOfSpace << endl;
    cout << "Number of tabs = " << noOfTab << endl;
    cout << "Number of newline = " << noOfNewline << endl;
    return 0;
}