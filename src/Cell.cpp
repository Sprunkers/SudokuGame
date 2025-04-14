#include "Cell.h"

Cell::Cell()
{
    value = 0;
    fixed = false;
}

Cell::Cell(int v, bool f)
{
    value = v;
    fixed = f;
}

int Cell::getValue() const
{
    return value;
}

void Cell::setValue(int val)
{
    if(!fixed)
    {
        value = val;
    }
}

bool Cell::isFixed() const
{
    return fixed;
}