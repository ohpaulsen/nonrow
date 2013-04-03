#include <vector>
#include "class_cords.h"
#ifndef WINDOW
#define WINDOW

namespace nonrow {
class window
{
    //int count[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int w;
    int h;
    int onrow;
    public:
    window(int,int,int,std::vector<cords>);
    void print();

};
}
#endif 

