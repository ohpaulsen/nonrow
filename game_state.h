#include <vector>
#include "cords.h"

namespace nonrow
{
    class game_state
    {
        //Player's cords
        std::vector<cords> cords_player;
        //Computer cords
        std::vector<cords> cords_computer;
        //Board cords
        std::vector<cords> cords_board;
        //players turn or computers turn
        bool turn;
    public:
        game_state(std::vector<cords> player, std::vector<cords> board);
        void print(); 
    };
}
