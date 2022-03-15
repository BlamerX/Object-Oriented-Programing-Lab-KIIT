// Program to create a class called STRING and implement the following operations. Display the results after every operation by overloading the operator <<.
// a) STRING s1= “KIIT”
// b) STRING s2= “KISS
// c) STRING s3= s1+s2 (use copy operator).

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
    String operator+(String &s2)
    {
        strcat(ptr, s2.ptr);
        return ptr;
    }
    friend ostream &operator<<(ostream &print, String &o)
    {
        print << "String is: " << o.ptr << endl;
        return print;
    }
};

int main()
{
    String s1("KIIT"), s2("KISS"), s3;
    cout << "s1 " << s1;
    cout << "s2 " << s2;

    s3 = s1 + s2;
    cout << "s1 + s2 " << s3;

    return 0;
}