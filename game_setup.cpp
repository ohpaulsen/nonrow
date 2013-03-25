#include <game_setup.h>
#include <algorithm>
#include <ctime>
using namespace nonrow;
using namespace std;

game_setup::game_setup(int onrows)
{
    this->on_row = onrows;
    //game_setup::start();
    this->gen_tables();
}

void game_setup::start()
{
    srand(time(NULL));
    int tmp = rand();
    //this->start = tmp != 0;

}


void game_setup::gen_tables()
{
    this->height = on_row;
    this->width = on_row;

}
