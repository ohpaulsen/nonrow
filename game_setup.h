#ifndef GAMESETUP
#define GAMESETUP


namespace nonrow{


class game_setup{
    int on_row;
    bool start;
    int width;
    int height;

public:
    game_setup(int onrows);
    void start();
    void gen_table();
};

}

#endif
