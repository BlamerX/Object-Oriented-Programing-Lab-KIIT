// Write a program to create a class for counting the number of objects created and destroyed within various block using static data member, constructor and destructors.

#include <iostream>

using namespace std;

class count
{
private:
    static int countObjects;

public:
    count()
    {
        countObjects++;
        cout << countObjects << " Constructor created" << endl;
    }

    ~count()
    {
        countObjects--;
        cout << countObjects << " Destructor created" << endl;
    }
};

int count::countObjects;

int main()
{
    cout << "Inside main" << endl;
    count c1, c2, c3;
    cout << "Entering Block" << endl;
    {
        count c4, c5;
    }
    cout << "Block Exit!!" << endl;

    return 0;
}