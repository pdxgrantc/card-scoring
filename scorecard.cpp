#include <iostream>
#include <string>
#include "scorecard.h"

using namespace std;

Scorecard::Scorecard()
{
    cout << "created scorecard" << endl;
    //int numPlayers = takeNumPlayers();
}

/*
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
*/