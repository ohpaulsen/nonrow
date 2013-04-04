#include "class_window.h"
#include "class_cords.h"
#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;
using namespace nonrow;

window::window(int wi, int hi, int ri,vector<cords> bi)
{
    this->w = wi;
    this->h = hi;
    this->onrow = ri;
    this->b = bi;

}

void window::print()
{
    for (int i = 0; i < h; i++) { 
            printf("\n"); // + this->count[i]);
        for (int p = 0; p < w; p++) {
            char symbol = '_';
            symbol = getCord(p,1);
            cout << "|_" << symbol << "_|";
        }
    }
    printf("\n");

}

char window::getCord(int en, int to)
{
    for(std::vector<cords>::size_type i = 0; i != b.size();i++)
    {
        if(en == b[i].xcord() && to == b[i].ycord())
        {
            cout << "fant en.." << endl;
            return b[i].scord();
        }

    }
    return '_';
}
