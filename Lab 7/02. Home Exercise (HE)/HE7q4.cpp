// Write a C++ program to create a class called DATE. Accept two valid dates in the form dd/mm/yy. Implement the following operations by overloading the operators + and -. After every operation display the results by overloading the operator <<.
// a) no_of_days=d1-d2; where d1 and d2 are DATE objects d1>=d2 and no_of_days is an integer.
// b) d2=d1-no_of_days; where d1 is a DATE object and no_of_days is an integer.

#include <iostream>
#include <process.h>

using namespace std;

class date
{

private:
    int mm, dd, yy;

public:
    void getdate()
    {
        cout << "Enter a valid date(dd/mm/yy): ";
    START:
        cin >> dd >> mm >> yy;
        if ((mm == 2) && (dd > 29))
        {

            cout << "wrong input!!!\n";
            cout << "\n enter the date again....\n";
            goto START;
        }
        if ((mm > 12) || (dd > 31))
        {

            cout << "wrong input!!!\n";
            cout << "\n enter the date again....\n";
            goto START;
        }
        if ((mm == 4 || mm == 6 || mm == 9 || mm == 11) && (dd > 30))
        {

            cout << "wrong input!!!\n";
            cout << "\nenter the date again....\n";
            goto START;
        }
        if ((yy % 4) != 0 && (mm == 2) && (dd > 28))
        {

            cout << "wrong input!!!\n";
            cout << "\nenter the date again....\n";
            goto START;
        }
    }
    int operator-(date d2)
    {
        int i, nod1, nod2, nody, lc, no_of_days;
        nod1 = nod2 = lc = 0;

        for (i = 1; i < mm; i++)
        {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
                nod1 += 31;
            else if (i == 2)
                nod1 += 28;
            else
                nod1 += 30;
        }
        nod1 += dd;
        for (i = 1; i < d2.mm; i++)
        {
            if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
                nod2 += 31;
            else if (i == 2)
                nod2 += 28;
            else
                nod2 += 30;
        }
        nod2 += d2.dd;
        nody = (yy - d2.yy) * 365;
        for (i = d2.yy; i < yy; i++)
            if ((i % 4) == 0)
                lc++;
        int y4 = yy - d2.yy;
        while (y4 > 400)
        {
            lc++;
            y4 -= 400;
        }
        if ((mm > 2) && (yy % 4) == 0)
            lc++;
        if ((d2.mm > 2) && (d2.yy % 4) == 0)
            lc--;
        no_of_days = nody + nod1 - nod2 + lc;
        if (no_of_days > 0)
        {
            cout << "total number of days between these dates is: ";
            return (no_of_days);
        }
        else
            return (no_of_days);
    }
    date operator+(int nd)
    {
        date dd3;
        while (nd > 365)
        {
            yy++;
            nd -= 365;
        }
        while (nd > 30)
        {
            if (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12)
            {
                nd -= 31;
                mm++;
            }
            else if (mm == 2)
            {
                nd -= 28;
                mm++;
            }
            else
            {
                nd -= 30;
                mm++;
            }
            if (mm > 12)
            {
                yy++;
                mm = 1;
            }
        }
        dd = dd + nd;
        if (dd > 30)
        {
            if (mm == 4 || mm == 6 || mm == 9 || mm == 11)
            {
                mm++;
                dd -= 30;
            }
            else if (mm == 2)
            {
                mm++;
                dd -= 28;
            }
            else if (dd > 31)
            {
                mm++;
                dd -= 31;
            }
            if (mm > 12)
            {
                yy++;
                mm = 1;
            }
        }
        dd3.mm = mm;
        dd3.dd = dd;
        dd3.yy = yy;
        return (dd3);
    }
    friend ostream &operator<<(ostream &output, date &D)
    {
        cout << "Date is: " << D.dd << " / " << D.mm << " / " << D.yy << endl;
    }
};

int main()
{
    int res, num;
    date dd1, dd2;

BEGIN:
    dd1.getdate();
    dd2.getdate();
    res = dd1 - dd2;

    if (res < 0)
    {
        cout << "\nThe first date should be greater than the second date\n";
        cout << "so enter the dates again\n";
        goto BEGIN;
    }

    cout << res;
    cout << "\nEnter the no. of days to be added to the FIRST date:";
    cin >> num;
    dd2 = dd1 + num;

    cout << dd2;

    return 0;
}