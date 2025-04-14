#pragma once

class Cell
{
public:
    int getValue() const;
    void setValue(int);
    bool isFixed() const;
    Cell(int, bool);
    Cell();
private:
    int value;
    bool fixed;
};