#ifndef __SCOUT_H__
#define __SCOUT_H__
#include "Pawn.h"
class Scout : public Pawn {
    private :
        const std::string NAME = "scout";
        const int RANK = 2;

    public:
        Scout();
};

#endif // __SCOUT_H__