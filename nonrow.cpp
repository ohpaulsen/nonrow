#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include "class_game_setup.h"
#include "class_window.h"
#include "class_cords.h"
#include "class_player.h"
using namespace std;
//using namespace nonrow;

int main()
{
    //game_setup g(3);
    cout << "Please register your nickname" << endl;
    string myString;
    cin >> myString;
    nonrow::player p(myString);
    cout << "How many on row do you want to play?" << endl;
    string myInt;
    cin >> myInt;
    int myIntInt = atoi(myInt.c_str());
    nonrow::game_setup g(myIntInt,p);

    return 0;
}
