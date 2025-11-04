#include "Player.h"*
#include <iostream>

using namespace std;

Player::Player(const string& playerName, const string& playerColor)
    : name(playerName), color(playerColor) 
    {}

void Player::displayPlayer() const {
    cout << "Player: " << name << ", Color: " << color << ", Pawns: " << pawns.size() << endl;
}

void Player::addPawn(std::shared_ptr<Pawn> pawn) {
    pawns.push_back(pawn);
}

const std::string& Player::getName() const {
    return name;
}

const std::vector<std::shared_ptr<Pawn>>& Player::getPawns() const {
    return pawns;
}

const std::string& Player::getColor() const {
    return color;
}
