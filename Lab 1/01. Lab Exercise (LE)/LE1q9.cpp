//Write a program to store the author, title, price of n books & display the book details. n is the user input.

#include <iostream>

using namespace std;

struct book
{
    char author[50];
    char title[50];
    char price[20];
};

int main()
{
    int n = 2;

    book b[n];

    cout << "Enter the details: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the author name: ";
        cin.getline(b[i].author, 50);
        cout << "Enter the title: ";
        cin.getline(b[i].title, 50);
        cout << "Enter the price of the book: ";
        cin.getline(b[i].price, 20);
    }

    cout << "Details are: \n";
    for (int i = 0; i < n; i++)
    {
        cout << "The author of the book is: " << b[i].author << endl
             << "The title of the book is: " << b[i].title << endl
             << "The price of the book is: " << b[i].price << endl;
    }

    return 0;
}