#ifndef CORDS
#define CORDS

#include <vector>
#include <string>

namespace nonrow{

    typedef char y;
    typedef char x;

class cords{
    y ycords;
    x xcords;
 public:
    cords(y,x);
    y ycord();
  x xcord();
};

}
#endif
