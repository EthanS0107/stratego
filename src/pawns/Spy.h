#ifndef __SPY_H__
#define __SPY_H__
#include "Pawn.h"
class Spy : public Pawn {
    private :
        const std::string NAME = "spy";
        const int RANK = 1;

    public:
        Spy();
};

#endif // __SPY_H__