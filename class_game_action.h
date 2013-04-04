#include "class_cords.h"
#include <vector>
#include <string>
#ifndef ACTION
#define ACTION

namespace nonrow {

    class game_action {
    public:
    enum actiontype{put,pass};
    actiontype getType();
    cords print();
    cords takeAction();
    game_action();
    int getInt(char);
    int intLength(int);
    int vectorLength();
    cords aiMove(int);
    actiontype type;
    };


}
#endif
