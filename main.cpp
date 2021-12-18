#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>

using namespace std;

int takeNumPlayers();
bool isNumber(const string &);

int main()
{
    Scorecard board = new Scorecard();
    delete board;
}

class Scorecard
{
private:
    int numPlayers;

    bool isNumber(const string &str)
    {
        return str.find_first_not_of("0123456789") == string::npos;
    }

    int takeNumPlayers()
    {
        int numPlayers;
        string cache;
        bool correct = false;
        while (correct == false)
        {
            cout << "Enter the number of players you have: ";
            cin >> cache;
            correct = isNumber(cache);
            if (correct == true)
            {
                numPlayers = stoi(cache);
                correct = true;
            }
            else
            {
                cout << "You did not enter an integer please try agin." << endl;
            }
        }
        return numPlayers;
    }

public:
    Scorecard()
    {
        int numPlayers = takeNumPlayers();
    }
};
