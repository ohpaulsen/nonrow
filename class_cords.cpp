#include "class_cords.h"

using namespace nonrow;
using namespace std;

cords::cords(y ycord, x xcord, s scord){
    //Y-akse
    ycords = ycord;
    //X-aksel
    xcords = xcord;
    //Symbol
    scords = scord;
}

y cords::ycord()
{
    return ycords;
}

x cords::xcord()
{
    return xcords;
}

s cords::scord()
{
    return scords;
}
