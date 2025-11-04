#include "Board.h"
Board::Board() {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            grid[i][j] = nullptr;
        }
    }
}

bool Board::placePawn(int row, int col, std::shared_ptr<Pawn> pawn) {
    if (row >= 0 && row < ROWS && col >= 0 && col < COLS && grid[row][col] == nullptr) {
        grid[row][col] = pawn;
        pawn->moveTo(col, row);
        return true;
    }
    return false;
}

bool Board::movePawn(int startRow, int startCol, int endRow, int endCol) {
    // Vérifier bornes
    if (!(startRow >= 0 && startRow < ROWS && startCol >= 0 && startCol < COLS &&
          endRow   >= 0 && endRow   < ROWS && endCol   >= 0 && endCol   < COLS)) {
        return false;
    }

    // Vérifier présence du pion
    if (grid[startRow][startCol] == nullptr) return false;

    // Vérifier que le pion est movable
    if (!grid[startRow][startCol]->isMovable()) return false;

    // Vérifier que la case de destination est vide
    if (grid[endRow][endCol] == nullptr) {
        grid[endRow][endCol] = grid[startRow][startCol];
        grid[startRow][startCol] = nullptr;
        grid[endRow][endCol]->moveTo(endCol, endRow);
        return true;
    }

    return false;
}

void Board::display() const {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (grid[i][j] != nullptr) {
                std::cout << grid[i][j]->getSymbol() << " ";
            } else {
                std::cout << ". ";
            }
        }
        std::cout << std::endl;
    }
}

std::shared_ptr<Pawn> Board::getPawn(int row, int col) const {
    if (row >= 0 && row < ROWS && col >= 0 && col < COLS) {
        return grid[row][col];
    }
    return nullptr;
}
