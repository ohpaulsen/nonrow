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
    void setWins(int);
    void setLoss(int);
    void setDraw(int);
    void setNick(std::string);
    int getWins();
    int getLoss();
    int getDraw();
};


}//end of namespace
#endif
