// Define a class to represent a bank account. Include the following members:
// Data Members
// a) Name of the depositor
// b) Account number
// c) Type of account
// d) Balance amount in the account
// Member Functions
// a) To assign initial value
// b) To deposit an amount
// c) To withdraw an amount after checking the balance
// d) To display name and balance
// Write a main program to test the program.

#include <iostream>

using namespace std;

class member
{
    string name;
    long long accountNumber;
    string accountType;
    float amountInBank;
    float total;

public:
    void initialValue(void);
    void deposit(void);
    void withdrawAfterCheck(void);
    void DisplayNameAndBalance(void);
};

void member::initialValue(void)
{
    cout << "Enter the Account Holders Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter the Account number: ";
    cin >> accountNumber;
    cout << "Enter the Account Type: ";
    cin.ignore();
    getline(cin, accountType);
    cout << "Enter the Amount you are Depositing: ";
    cin >> amountInBank;
}

void member::deposit(void)
{
    float amount = 0;
    cout << "Enter the ammount you want to Enter for Holder " << name << endl;
    cin >> amount;
    amountInBank += amount;
}

void member::withdrawAfterCheck(void)
{
    float withdraw;
    cout << "Your current Balance is: " << amountInBank << endl
         << "Enter the amount you want to withdraw: ";
    cin >> withdraw;
    if (amountInBank >= withdraw)
        amountInBank -= withdraw;
    else
        cout << "Amount entered is Greater than Amount In Bank" << endl;
}

void member::DisplayNameAndBalance(void)
{
    cout << "Your name is: " << name << endl;
    cout << "Your Total Balance is: " << amountInBank << endl;
}

int main()
{

    int n;
    cout << "Enter the number of Account holders: ";
    cin >> n;

    member m[n];
    for (int i = 0; i < n; i++)
    {
        m[i].initialValue();
        m[i].deposit();
        m[i].withdrawAfterCheck();
    }

    for (int i = 0; i < n; i++)
    {
        m[i].DisplayNameAndBalance();
    }
    return 0;
}
