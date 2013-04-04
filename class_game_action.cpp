#include "class_game_action.h"
#include "class_cords.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stdio.h>
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



cords game_action::print()
{
    char en = 0;
    char to = 0;
    cout << "Write the cords on the y-axis you want to set your symbol example: '1'" << endl;
    string myString = "";
    string myString2 = "";
    cin >> myString;
    cout << "Write the cords on the x-axis you want to set you symbol. example: '2'" << endl;
    cin >> myString2;
   if(!myString2.length() == 1 && !myString.length() == 1) 
   {
       en = atoi(myString.c_str());
       to = atoi(myString.c_str());
       if(!isdigit(en) && !isdigit(to))
       {
       cout << "invalid input" << endl;
       this->print();
       }
   }
   else
   {
       cords c(en,to,'X');
       cout << "cord.." << c.xcord() << endl; 
       return c;
   }
}

cords game_action::takeAction()
{
    return print();
}

