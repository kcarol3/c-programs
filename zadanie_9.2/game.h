#ifndef GAME_H
#define GAME_H

#include <iostream>

using namespace std;

class Game
{
    int points;
    int numOfTry;
    int lastTry;

public:
    Game();
    bool readValue();
    bool checkResult();
    void newLastVal();
    void win();
    void lost();
    void rmvWrongValFromCin();
    int getPoints();
};

#endif // GAME_H
