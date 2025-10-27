#ifndef BOARD_H
#define BOARD_H
#include "pawns/Pawn.h"  
#include <iostream>
#include <memory>

class Board {
    private:
        static constexpr int ROWS = 10;
        static constexpr int COLS = 10;
        std::shared_ptr<Pawn> grid[ROWS][COLS];
    public:
        Board();
        bool placePawn(int row, int col, std::shared_ptr<Pawn> pawn);
        bool movePawn(int startRow, int startCol, int endRow, int endCol);
        void display() const;
        std::shared_ptr<Pawn> getPawn(int row, int col) const;
};

#endif // BOARD_H
