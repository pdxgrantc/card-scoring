#ifndef SCOREBOARD
#define SCOREBOARD

#include <string>
#include <vector>
#include "cell.h"

using namespace std;

class Scorecard
{
protected:
    int numPlayers;
    Cell **ary;

public:
    Scorecard();
    ~Scorecard();
    int takeNumPlayers();
    void printBoard();
    void updateTotals();
};

#endif