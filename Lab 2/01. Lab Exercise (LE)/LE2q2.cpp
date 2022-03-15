// Write a program to demonstrate the use of scope resolution operator(::) by declaring same varibale name globally and locally and display the value of gloabl and local variables.

#include <iostream>

using namespace std;

int n = 45; // Global variable

int main()
{

    int n = 23; //Local variable

    cout << "The value of global variable is: " << ::n << endl;
    cout << "The value of local variable is: " << n;

    return 0;
}