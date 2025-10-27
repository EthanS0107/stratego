#include "Flag.h"
Flag::Flag() : Pawn(LIST_NAMES[RANK_VALUE], RANK_VALUE), captured(false) {}

bool Flag::isCaptured() const {
    return captured;
}

void Flag::setCaptured(bool captured) {
    this->captured = captured;
}
