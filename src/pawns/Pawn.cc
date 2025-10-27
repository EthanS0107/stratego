#include "Pawn.h"

Pawn::Pawn() : name(""), rank(0), movable(true), color("undefined"), alive(true), x(-1), y(-1), symbol(' ') {
}

Pawn::Pawn(const std::string& name, int rank, bool movable) : 
    name(name), rank(rank), movable(movable && name != "flag" && name != "bomb"), 
    color("undefined"), alive(true), x(-1), y(-1), symbol(name.empty() ? ' ' : name[0]) {
}

Pawn::Pawn(const std::string& name, int rank, const std::string& color, bool movable) :
    name(name), rank(rank), movable(movable && name != "flag" && name != "bomb"), 
    color(color), alive(true), x(-1), y(-1), symbol(name.empty() ? ' ' : name[0]) {
}

std::string Pawn::getName() const {
    return this->name;
}

int Pawn::getRank() const {
    return this->rank;
}

int Pawn::getX() const {
    return this->x;
}

int Pawn::getY() const {
    return this->y;
}

bool Pawn::isMovable() const {
    return this->movable;
}

void Pawn::setX(int x) {
    this->x = x;
}

void Pawn::setY(int y) {
    this->y = y;
}

void Pawn::kill() {
    this->alive = false;
}

void Pawn::moveTo(int newX, int newY) {
    this->x = newX;
    this->y = newY;
}

bool Pawn::isAlive() const {
    return this->alive;
}

char Pawn::getSymbol() const {
    return this->symbol;
}