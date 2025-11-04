#ifndef PLAYER_H
#define PLAYER_H
#include <vector>
#include <string>
#include <memory>
#include "pawns/Pawn.h"


class Player {
    private:
        std::string name;
        std::vector<std::shared_ptr<Pawn>> pawns;
        std::string color;
    public:
        Player(const std::string& playerName, const std::string& playerColor);
        void displayPlayer() const;
        void addPawn(std::shared_ptr<Pawn> pawn);
        const std::string& getName() const;
        const std::vector<std::shared_ptr<Pawn>>& getPawns() const;
        const std::string& getColor() const;
};

#endif