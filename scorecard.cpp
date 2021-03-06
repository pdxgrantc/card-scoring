#include <iostream>
#include <string>
#include "scorecard.h"
#include "cell.h"

using namespace std;

// Function declarations
void makeArray(int numPlayers);
bool isNumber(const string &str);

Scorecard::Scorecard()
{
    string testString = "Grantler";
    testString.resize(5);
    numPlayers = takeNumPlayers();
    // make the array
    ary = new Cell *[numPlayers];
    for (int i = 0; i < numPlayers; i++)
    {
        ary[i] = new Cell[13];
        for (int j = 0; j < 13; j++)
        {
            if (i == 0)
            {
                ary[i][j].setName(testString);
            }
            ary[i][j].setValue(1);
        }
    }
}

void Scorecard::printBoard()
{
    int width = 0;
    for (int i = 0; i < numPlayers; i++)
    {
        if (i == (numPlayers - 1))
        {
            cout << "Totals:" << endl;
        }
        cout << "|";
        for (int j = 0; j < 13; j++)
        {
            if (i == 0)
            {
                width = ary[i][j].getName().length();
                cout << ary[i][j].getName() << "|";
            }
            else
            {
                int num = ary[i][j].getValue();
                string outputVal;
                if (num == 0)
                {
                    outputVal = ' ';
                }
                else
                {
                    outputVal = to_string(num);
                }
                if (num < 10)
                {
                    cout << "  " << outputVal << "  |";
                }
                else if (num < 100)
                {
                    cout << "  " << outputVal << " |";
                }
                else
                {
                    cout << " " << outputVal << " |";
                }
            }
        }
        cout << endl;
    }
}

void Scorecard::updateTotals()
{
    // print function for lenth
}

Scorecard::~Scorecard()
{
    // go through the array and free the cell mallocs
    for (int i = 0; i < numPlayers; i++)
    {
        delete[] ary[i];
    }
    delete[] ary;
}

// Class functions
int Scorecard::takeNumPlayers()
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

// Utility functions
void makeArray(int numPlayers)
{
}

bool isNumber(const string &str)
{
    return str.find_first_not_of("0123456789") == string::npos;
}