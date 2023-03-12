#include <iostream>
#include "game.h"
using namespace std;


int main()
{
    cout<<"Start gry"<<endl;
    Game *gameStart = new Game();
    try {
        while(!(gameStart->checkResult())){
            if(!gameStart->readValue()){
                gameStart->rmvWrongValFromCin();
            }
        }
        gameStart->win();
    } catch (int) {
        cout<<"Przekroczono oczko"<<endl;
        gameStart->newLastVal();
        if(gameStart->getPoints()==21){
            gameStart->win();
        } else {
            gameStart->lost();
        }
    }
    delete gameStart;

    return 0;
}
