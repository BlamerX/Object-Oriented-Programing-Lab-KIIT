// Modify the program LE8.1 by creating an array of n objects using pointers.Show the details of n items by using pointers to object concept.

#include <iostream>

using namespace std;

class Item
{
private:
    int itemNumber;
    float price;

public:
    Item(int num = 0, float pri = 0)
    {
        itemNumber = num;
        price = pri;
    }

    void getData(int num, float pri)
    {
        this->itemNumber = num; // Pointer to object
        this->price = pri;      // Pointer to object
    }

    void displayData()
    {
        cout << endl
             << "Item number is: " << this->itemNumber << " and it's Price is: " << this->price << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the number of objects: ";
    cin >> n;

    Item obj[n];
    int number;
    float pric;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the item Number: ";
        cin >> number;
        cout << "Enter the item Price: ";
        cin >> pric;
        obj[i].getData(number, pric);
    }

    for (int i = 0; i < n; i++)
        obj[i].displayData();

    return 0;
}