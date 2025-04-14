#include "SudokuBoard.h"
#include <vector>
#include <iostream>

int main() {
    SudokuBoard board;
    std::vector<std::vector<int>> puzzle = {
        {9, 0, 1, 3, 0, 0, 0, 6, 0},
        {0, 0, 3, 1, 9, 5, 8, 0, 2},
        {0, 7, 2, 4, 0, 0, 9, 3, 0},
        {6, 0, 8, 0, 0, 0, 3, 0, 7},
        {0, 4, 0, 0, 7, 0, 0, 8, 0},
        {7, 0, 9, 0, 0, 0, 2, 0, 5},
        {0, 3, 4, 0, 0, 2, 7, 9, 0},
        {2, 0, 6, 7, 1, 8, 4, 0, 0},
        {0, 5, 0, 0, 0, 4, 1, 0, 6}
    };
    
    board.loadPuzzle(puzzle);

    for(int row = 0; row < 9; row++)
    {
        for(int col = 0; col < 9; col++)
        {
            std::cout << board.getCell(row, col) << " ";
        }
        std::cout << std::endl;
    }
                   
    return 0;
}