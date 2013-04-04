#ifndef NONROW_CLASS
#define NONROW_CLASS
#include "class_cords.h"
#include "class_player.h"
#include <vector>

namespace nonrow {

class player;
class nonrow_game{
        std::vector<cords> playerV;
        std::vector<cords> boardV;
        player me;
        int nonrow;
        bool turn;
        bool Bwinner;
        public:
        nonrow_game(int,player);
        void playround();
        void who_start();
        bool checkCord(int,int,char);
        bool valid_cords(cords);
        bool winner(cords);
};



}
#endif
