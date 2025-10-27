#ifndef __BOMB_H__
#define __BOMB_H__
#include "Pawn.h"
class Bomb : public Pawn {
    private:
        static constexpr int RANK_VALUE = 11;

    public:
        Bomb();
};
#endif // __BOMB_H__