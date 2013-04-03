#include "class_game_action.h"
#include "class_cords.h"
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
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
    splitcords.clear();
    cout << "Write the cords you want to set your symbol example: 'a 1'" << endl;
    string myString = "";
    cin >> myString;
    string l = "";
    stringstream ss(myString); 
    while ( ss >> l)
        this->splitcords.push_back(l);
   if(this->vectorLength() != 2)
   {
       cout << "invalid input" << endl;
       this->print();
   }
   else
   {
       cords c('1','2','X');
   }
}

cords game_action::takeAction()
{
    return print();
}

int game_action::vectorLength()
{
    return this->splitcords.size();
}

