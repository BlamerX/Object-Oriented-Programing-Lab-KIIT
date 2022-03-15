// Implement a class String containing the following functions :
// 1. Overload + operator to carry out concatenation of strings.
// 2. Overload = operator to carry out string copy.
// 3. Overload = + operator to carry out the comparison of strings.
// 4. Function to display the length of a string.

#include <iostream>
#include <string.h>

using namespace std;

class String
{
private:
    char *ptr;
    int len;

public:
    String()
    {
        len = 0;
        ptr = NULL;
    }
    String(const char *str)
    {
        len = strlen(str);
        ptr = new char[len + 1];
        strcpy(ptr, str);
    }
    void operator+(String &s2)
    {
        cout << "concatenation of string: " << strcat(ptr, s2.ptr) << endl;
    }
    void operator=(String &s2)
    {
        cout << "copy of string: " << strcpy(ptr, s2.ptr) << endl;
    }
    void operator+=(String &s2)
    {
        cout << "comparison result: ";
        if (strcmp(ptr, s2.ptr) == 0)
            cout << "Perfect Match" << endl;
        else
            cout << "Not Matched" << endl;
    }
    void lengthDisplay()
    {
        cout << "Length of " << ptr << " is : " << len << endl;
    }
};

int main()
{
    String s1("Hello"), s2("World");

    s1 += s2;
    s1.lengthDisplay();
    s2.lengthDisplay();
    s1 + s2;
    s1 = s2;

    return 0;
}