// A book shop maintains the inventory of books that are being sold at the workshop. The list includes details such as author, title, price, publisher and stock position. Whenever a customer wants a book, the sales person inputs the title and author and the system searches the list and displays whether it is available or not. If it is not, an appropriate message is displayed. If itis, then the system displays the book details and requests for the number of copies required. If the requested copies are available, the total cost of their quested copies is displayed otherwise the message “Required copies not in stock” is displayed. WAP using a class called Books with suitable member functions and constructors.

#include <iostream>
#include <string.h>

using namespace std;

class Books
{
private:
    char *author;
    char *title;
    float price;
    char *publisher;
    int stock;

public:
    Books();

    void inputData();

    int check(char *);

    int check(int);

    void displayData();

    void displayTotal(int);
};

Books::Books()
{
    title = new char[30];
    author = new char[30];
    publisher = new char[20];
    price = 0;
    stock = 0;
}

void Books::inputData()
{
    cin.ignore();
    cout << "Enter the Author: ";
    gets(author);
    cout << "Enter the Title: ";
    gets(title);
    cout << "Enter thr Publisher: ";
    gets(publisher);
    cout << "Enter the Prices: ";
    cin >> price;
    cout << "Enter the no of copies available: ";
    cin >> stock;
}

void Books::displayData()
{
    cout << "Author is: " << author << "    Title is: " << title << "    Price is: " << price << "    Publisher is: " << publisher << "    Stock is: " << stock << endl;
}

void Books::displayTotal(int num)
{
    float total = (price * num);
    cout << "\nCost of " << num << " books is Rs. " << total;
}

int Books::check(char *t)
{
    if (strcmp(title, t) == 0)
        return 1;
    return 0;
}

int Books::check(int n)
{
    if (n <= stock)
        return 1;
    return 0;
}

int main()
{
    int n, numberOfCopies;
    char bookTitle[50];

    cout << "Enter the number of books: ";
    cin >> n;
    Books b[n];

    for (int i = 0; i < n; i++)
        b[i].inputData();

    cin.ignore();
    cout << "Enter the title of the Book: ";
    gets(bookTitle);

    for (int i = 0; i < n; i++)
    {
        if (b[i].check(bookTitle) == 1)
        {
            b[i].displayData();
            cout << "Enter number of copies you wnat to buy: ";
            cin >> numberOfCopies;
            if (b[i].check(numberOfCopies) == 1)
                b[i].displayTotal(numberOfCopies);
            else
                printf("The Amount of Copies Are NOT AVILUABLE!!");
        }
    }

    return 0;
}