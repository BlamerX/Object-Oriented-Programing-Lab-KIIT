// Write a program to create a new string with the last char added at the front of a given string of length 1 or more.

#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string test = str.substr(str.length() - 1);
    cout << test + str;

    return 0;
}