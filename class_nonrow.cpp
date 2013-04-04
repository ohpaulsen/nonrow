#include "class_nonrow.h"
#include "class_player.h"
#include "class_game_setup.h"
#include "class_game_action.h"
#include <ctime>
#include <iostream>
#include <algorithm>
using namespace std;
using namespace nonrow;

nonrow_game::nonrow_game(int onrow,player p)
{
    this->me = p;
    this->nonrow = onrow;
    this->Bwinner = false;
    playround();
    this->who_start();
}

void nonrow_game::playround()
{
    game_setup g(nonrow,me,this->boardV);
    game_action a;
    if(turn == true)
    {
        cords c = a.takeAction();
        if(this->valid_cords(c)){
        this->boardV.push_back(c);
        winner(c);
        turn = false;
        }else{
            cout << "There is allready a symbol on the cord or you trying to set cords outside the board" << endl;
            this->playround();
        }
    }else{
        //AI MOVE
        cout << "AI moves..." << endl;
        turn = true;
    }
    playround();

}

bool nonrow_game::valid_cords(cords c)
{
    //This function need to check if the cords are in the vector allready and its inside the board.
    for(vector<cords>::size_type i = 0; i!= this->boardV.size(); i++)
    {
        //cout << "er inne i for" << endl;
        if(c.xcord() == this->boardV[i].xcord() && c.ycord() == this->boardV[i].ycord())
        {
            return false;
        }
    }
    if(c.ycord() > this->nonrow || c.xcord() > this->nonrow)
    {
        return false;
    }
    return true;
}


//this quits the game if someone wins.
bool nonrow_game::winner(cords c)
{
    if(this->boardV.size() <= nonrow){
    this->Bwinner = false;
    return false;
    }
    int tmpx =0;
    int tmpu =0;
    char symbol = 0;
    int teller = 0;

    for(int i=0;i < 4; i++)
    {
        if(i==0)//Checks diagonal from the last inserted cords
        {
            tmpx = c.ycord();
            symbol = c.scord();
            for(int p=1; tmpx < nonrow; p++)
            {
                    //cout << tmpx+p << " " << c.ycord() << symbol << endl;
                    if(checkCord(tmpx+p,c.xcord(),symbol))
                        teller++;
                    else
                    {
                       // cout << "teller1 " << teller << endl;
                        break;
                    }
            }
            for(int p=0; nonrow > tmpx; p++)
            {
                if(checkCord(tmpx-p,c.ycord(),symbol))
                {
                    teller++;
                }
                else
                {
                    //cout << "teller " << teller << endl;
                    break;
                }
                //while(checkCord(i,c.ycord(),symbol) == true){
                //    teller++;
                //}

            }
            if(teller == nonrow)
            {
                cout << "WINNER" << endl;
                return true;
            }
        }
        if(i == 1)//Checks loddrett from the last insterted cords
        {
            teller = 0;
            tmpx = c.xcord();
            symbol = c.scord();
            for(int p=1; tmpx < nonrow; p++)
            {
                if(checkCord(c.ycord(),tmpx+p,symbol))
                    teller++;
                else{
                
                    cout << "teller1" << teller << endl;
                    break;
                }
            }
            for(int p=0; nonrow > tmpx; p++)
            {
                if(checkCord(c.ycord(),tmpx-p,symbol))
                    teller++;
                else{
                    cout << "teller " << teller << endl;
                    break;
                }
            }
            if(teller == nonrow)
            {
                cout << "WINNER" << endl;
                return true;
            }
        }
        if(i == 2)//Checks diagonalt to left - right from last insterted cords
        {
            //return true;
        }
        if(i == 3)//checks diagonalt Right to left from last insterted cords
        {
            //return true;
        }
    }
   cout << "Ferdig med å telle.. " << teller << endl; 

}

bool nonrow_game::checkCord(int x, int y, char z)
{
    for(vector<cords>::size_type i=0; i!= this->boardV.size();i++)
    {
        cords tmp(y,x,z);
        cout << this->boardV[i].xcord() << this->boardV[i].ycord()  << boardV[i].scord() << endl;
        cout << tmp.xcord() << tmp.ycord() << tmp.scord();
        if(tmp.scord() ==  boardV[i].scord() && tmp.ycord() == boardV[i].ycord() && tmp.xcord() == boardV[i].xcord())
        {
            cout << "_FANT__EN____" << endl;
            return true;
        }
        cout << "____" << endl;
    }
    return false;

}

void nonrow_game::who_start()
{
    srand(time(NULL));
    int tmp = rand();
    this->turn = tmp != 0;
}
