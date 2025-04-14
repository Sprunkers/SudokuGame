#include "SudokuBoard.h"

void SudokuBoard::setCell(int r, int c, int v)
{
    board[r][c].setValue(v);
}

int SudokuBoard::getCell(int r, int c)
{
    return board[r][c].getValue();
}

bool SudokuBoard::isComplete()
{
    for(int row = 0; row < 9; row++)
    {
        for(int col = 0; col < 9; col++)
        {
            if(SudokuBoard::getCell(row, col) == 0)
            {
                return false;
            }
        }
    }
    return true;
}

SudokuBoard::SudokuBoard()
{
    for(int row = 0; row < 9; row++)
    {
        std::vector<Cell> currentRow;
        for(int col = 0; col < 9; col++)
        {
            currentRow.push_back(Cell());
        }
        board.push_back(currentRow);
    }
}

void SudokuBoard::loadPuzzle(const std::vector<std::vector<int>>& puzzle)
{
    int value;
    for(int row = 0; row < 9; row++)
    {
        for(int col = 0; col < 9; col++)
        {
            value = puzzle[row][col];
            if(value != 0)
            {
                board[row][col] = Cell(value, true);
            } 
            else 
            {
                board[row][col] = Cell();
            }
        }
    }
}