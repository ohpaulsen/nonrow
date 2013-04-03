#include "class_game_state.h"
#include "class_cords.h"
#include <vector>

using namespace nonrow;
using namespace std;

game_state::game_state(vector<cords> p, vector<cords> b)
{
    this->cords_player = p;
    this->cords_board = b;
}

void game_state::print()
{

}
