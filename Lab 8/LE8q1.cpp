// (Pointers to objects) Define a class Item that is used to store and display the information regarding the item number and its price.Write a program to store and display the details of one items by using both normal object and pointer to object separately.Display appropriate message wherever necessary.

#include <iostream>

using namespace std;

class Item
{
private:
    int itemNumber;
    float price;

public:
    Item(int num, float pri)
    {
        this->itemNumber = num; // Pointer to object
        this->price = pri;      // Pointer to object
    }

    void displayData()
    {
        cout << "Item number is: " << this->itemNumber << " and it's Price is: " << this->price << endl
             << endl;
    }
};

int main()
{
    Item obj(2029196, 45000.00);
    Item &obj2 = obj;

    obj2.displayData();

    return 0;
}
