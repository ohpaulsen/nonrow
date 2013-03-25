#include <cords.h>

using namespace nonrow;
using namespace std;

cords::cords(y ycord, x xcord){
    ycords = ycord;
    xcords = xcord;

}

y cords::ycord()
{
    return ycords;
}

x cords::xcord()
{
    return xcords;
}

