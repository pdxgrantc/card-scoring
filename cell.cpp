#include <iostream>
#include "cell.h"

using namespace std;

/*
Cell::Cell(int value)
{
}
*/

void Cell::setValue(int value)
{
    this->value = value;
}

void Cell::setName(string name)
{
    this->name = name;
}

string Cell::getName()
{
    return name;
}

int Cell::getValue()
{
    return value;
}