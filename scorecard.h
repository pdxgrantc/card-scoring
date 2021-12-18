#ifndef SCOREBOARD
#define SCOREBOARD

#include <string>
#include "cell.h"

using namespace std;

class Scorecard
{
protected:
    int numPlayers;
    Cell* ary;

public:
    Scorecard();
    int takeNumPlayers();
};

#endif