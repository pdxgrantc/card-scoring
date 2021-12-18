#ifndef CELL
#define CELL

using namespace std;

class Cell
{
protected:
    int value;

public:
    Cell();
    ~Cell();
    void setValue();
    int getValue();
};

#endif