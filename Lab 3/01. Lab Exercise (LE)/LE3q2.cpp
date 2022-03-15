//Write a program to enter the code, name and price of items.The user must feed the quantity in which he wants a product.The program must calculate and display the final bill of 10 nitems.In the following format.
//Sl.No. Code Name Price Quantity Total--
//----------------------------------------------------------------------
//  1. rib001 Printercatrige 300 2 600
//  2. Pap45 A4 size paper 200 0 0
//  3. Bk2109 Computer book 350 5 1750
// --------------------------------------------------------------------------
//                             Total = Rs .2350 / -

#include <iostream>
#include <string>

using namespace std;

class items
{
private:
    char code[10];
    string name;
    float price;
    int quantity;
    float total, grandtotal = 0;

public:
    void getData(void);
    float calculate(void);
    void displayData(void);
};

void items ::getData(void)
{
    cout << "Enter the items code: ";
    cin >> code;
    cout << "Enter the items name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter the items price: ";
    cin >> price;
    cout << "Enter the items quantity: ";
    cin >> quantity;
}

float items ::calculate(void)
{
    total = price * quantity;
    return total;
}

void items ::displayData(void)
{
    cout << code << "\t" << name << "\t" << price << "\t" << quantity << "\t" << total << endl;
}

int main()
{
    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    items item[n];
    float grandtotal = 0;

    for (int i = 0; i < n; i++)
    {
        item[i].getData();
        item[i].calculate();
    }

    cout << endl
         << "SL.NO. Code\tName\t\tPrice Quantity\tTotal" << endl;
    cout << "----------------------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ".";
        item[i].displayData();
    }
    cout << "----------------------------------------------------------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        grandtotal += item[i].calculate();
    }

    cout << "\t\t\t\t\tGrand Total is: " << grandtotal << " / -";

    return 0;
}