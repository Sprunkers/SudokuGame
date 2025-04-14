#pragma once

#include "Cell.h"
#include <vector>

class SudokuBoard
{
public:
    void setCell(int, int, int); //(cell row, cell column, cell value)
    int getCell(int, int); //(cell row, cell column)
    bool isComplete(); //returns True if the board is full
    void loadPuzzle(const std::vector<std::vector<int>>&);
    SudokuBoard();
private:
    std::vector<std::vector<Cell>> board;
};