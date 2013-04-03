#include "class_window.h"
#include <stdio.h>
using namespace std;
using namespace nonrow;

window::window(int wi, int hi, int ri)
{
    this->w = wi;
    this->h = hi;
    this->onrow = ri;

}

void window::print()
{
    for (int i = 0; i < h; i++) { 
            printf("\n"); // + this->count[i]);
        for (int p = 0; p < w; p++) {
            printf("|___|");
        }
    }
    printf("\n");

}
