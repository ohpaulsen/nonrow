#include "class_game_setup.h"
#include "class_window.h"
#include "class_player.h"
#include <algorithm>
#include <ctime>
using namespace nonrow;
using namespace std;

game_setup::game_setup(int onrows,player p)
{
    this->on_row = onrows;
    game_setup::whostart();
    this->gen_table();
}

void game_setup::whostart()
{
    srand(time(NULL));
    int tmp = rand();
    this->start = tmp != 0;
}


void game_setup::gen_table()
{
    this->height = on_row;
    this->width = on_row;
    nonrow::window w(width,height,on_row);
    w.print();
}
