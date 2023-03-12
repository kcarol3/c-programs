#include<iostream>
#include "figure.h"
#include "square.h"
using namespace std;
Square:: Square(float a1):Figure()
{
    a=a1;
    cout<<"Konstruktor klasy Square"<<endl;
}
Square:: ~Square()
{
    cout<<"Destruktor klasy Square"<<endl;
}

void Square::calculateCircuit()
{
    setCircuit(a*a);
}
void Square::calculateArea()
{
    float p=4*a;
    setArea(p);
}
