#ifndef __FLAG_H__
#define __FLAG_H__
#include "Pawn.h"
class Flag : public Pawn {
    private:
        static constexpr int RANK_VALUE = 0;
        bool captured;
    public:
        Flag();
        bool isCaptured() const;
        void setCaptured(bool);
};

#endif // __FLAG_H__