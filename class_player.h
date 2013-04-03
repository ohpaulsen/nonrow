#ifndef PLAYER
#define PLAYER
#include <string>

namespace nonrow{
class player{
    int wins;
    int loss;
    int draw;
    std::string nick;

 public:
    player(std::string);
    player();
    void setWins(int);
    void setLoss(int);
    void setDraw(int);
    int getWins();
    int getLoss();
    int getDraw();
};


}//end of namespace
#endif
