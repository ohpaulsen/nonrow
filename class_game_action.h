#ifndef ACTION
#define ACTION

namespace nonrow {

    class game_action {

    public:
    enum actiontype{put,pass};
    actiontype getType();
    void print();
    game_action();
    actiontype type;
    };


}
#endif
