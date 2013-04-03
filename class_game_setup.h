#include "class_player.h"
#include <vector>
#include "class_cords.h"
#ifndef GAMESETUP
#define GAMESETUP


namespace nonrow{


class game_setup{
    int on_row;
    bool start;
    int width;
    int height;
    std::vector<cords> Vc;
public:
    game_setup(int onrows, player p,std::vector<cords> V);
    bool whostart();
    void gen_table();
};

}

#endif
