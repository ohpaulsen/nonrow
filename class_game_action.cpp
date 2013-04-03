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



void game_action::print()
{
    cout << "Write the cords you want to set your symbol eksample: 'a 1'" << endl;
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
}

int game_action::vectorLength()
{
    return this->splitcords.size();
}

