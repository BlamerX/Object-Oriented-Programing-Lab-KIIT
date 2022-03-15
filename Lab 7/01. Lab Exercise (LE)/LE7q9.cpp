// Write a program to create a class player having data members as player number, name, score.Now enter details of player by overloading extraction operator(>>) and display all the details by overloading insertion operator(<<).

#include <iostream>
#include <string.h>

using namespace std;

class Player
{
private:
    int playerNumber;
    string name;
    float score;

public:
    friend void operator>>(istream &input, Player &p1)
    {
        cout << "Enter the Player name: ";
        getline(cin, p1.name);
        cout << "Enter the Player No: ";
        cin >> p1.playerNumber;
        cout << "Enter Score of " << p1.name << ": ";
        cin >> p1.score;
    }
    friend void operator<<(ostream &output, Player &p1)
    {
        cout << "Player name is: " << p1.name << endl;
        cout << "Player no is: " << p1.playerNumber << endl;
        cout << "Player score is: " << p1.score << endl;
    }
};

int main()
{
    Player p1;
    cin >> p1;
    cout << p1;

    return 0;
}