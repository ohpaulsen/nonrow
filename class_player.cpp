#include "class_player.h"
#include <string>

using namespace std;
using namespace nonrow;

player::player()
{

}

player::player(string inick)
{
    this->nick = inick;
}

void player::setWins(int w)
{
   this->wins = w;
}

void player::setLoss(int l)
{
    this->loss = l;
}

void player::setDraw(int d)
{
    this->draw = d;
}
