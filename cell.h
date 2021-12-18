#ifndef CELL
#define CELL

using namespace std;

class Cell
{
protected:
    int value;
    string name;

public:
    //Cell();
    void setValue(int);
    void setName(string);
    string getName();
    int getValue();
};

#endif