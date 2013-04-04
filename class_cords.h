#ifndef CORDS
#define CORDS

#include <vector>
#include <string>

namespace nonrow{

    typedef int y;
    typedef int x;
    typedef char s;

class cords{
    y ycords;
    x xcords;
    s scords;
 public:
    cords(y,x,s);
    y ycord();
    x xcord();
    s scord();
};

}
#endif
