#include "game.h"

using namespace std;

Game::Game()
{
    this->points = 0;
    this->numOfTry = 0;
    this->lastTry = 0;
}

bool Game::readValue()
{
    cout<<"Podaj wartosc:";
    if((cin>>lastTry)&&lastTry>0){
        points+=lastTry;
        numOfTry++;
        return true;
    } else {
        return false;
    }
}

bool Game::checkResult()
{
    if(points < 21){
        return false;
    } else if(points == 21){
        return true;
    } else {
        throw -1;
    }
}

void Game::newLastVal()
{
    points-=lastTry;
    if(!readValue()){
        cout<<"Musisz podać liczbe dodatnia!"<<endl;
    }
}

void Game::win()
{
    cout<<"!!Wygrana!!"<<endl;
    cout<<"Udalo ci sie wygrac oczko w "<<numOfTry<<" "<<"probach!"<<endl;
}

void Game::lost()
{
    cout<<"Porazka"<<endl;
    cout<<"Niestety nie osiagnales 21 punktow, twoj wynik to "<<points<<" w "<<numOfTry<<" probach"<<endl;
}

void Game::rmvWrongValFromCin()
{
    cout<<"Musisz podac liczbe dodatnia!"<<endl;
    cin.clear();
    cin.ignore();
}

int Game::getPoints()
{
    return this->points;
}
