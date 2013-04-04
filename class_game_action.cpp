#include "class_game_action.h"
#include "class_cords.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
using namespace std;
using namespace nonrow;

game_action::game_action()
{

}

game_action::actiontype game_action::getType()
{
    return this->type;
}

int game_action::getInt(char x)
{
    cout << "write the cords on the " << x << "-axis you want to set your symbol. example '1'" << endl;
    string input = "";
    int tmp;
    cin >> input;
    stringstream s(input);
    if(s >> tmp)
    {
        return tmp;
    }
    return 0;
}

int game_action::intLength(int value)
{
    int l=1;
    while(value>9){l++;value/=10;}
    return l;

}

cords game_action::print()
{
    string output;
    string output2;
    int en = 0;
    int to = 0;
    en = getInt('x');
    to = getInt('y');
    if(intLength(en) == 1 && intLength(to) == 1 && en != 0 && to != 0)
    {
        cords c(to,en,'x');
        cout << "cord.. " << c.xcord() << " " << c.ycord() << endl;
        return c;
    }
    else
      {
       cout << "invalid input" << endl;
       this->print();
       }
}

cords game_action::takeAction()
{
    return print();
}

