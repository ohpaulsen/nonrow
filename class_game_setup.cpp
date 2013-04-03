#include "class_game_setup.h"
#include "class_window.h"
#include "class_player.h"
#include "class_cords.h"
#include <vector>
using namespace nonrow;
using namespace std;

game_setup::game_setup(int onrows,player p,vector<cords> V)
{
    this->on_row = onrows;
    this->Vc = V;
    game_setup::whostart();
    this->gen_table();
}


void game_setup::gen_table()
{
    this->height = on_row;
    this->width = on_row;
    nonrow::window w(width,height,on_row,Vc);
    w.print();
}
