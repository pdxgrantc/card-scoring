#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include "scorecard.h"
#include "cell.h"

using namespace std;

int main()
{
    Scorecard *board = new Scorecard();
    board->printBoard();
    delete board;
}