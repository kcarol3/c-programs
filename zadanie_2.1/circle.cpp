#include<iostream>
#include "figure.h"
#include "circle.h"
using namespace std;
Circle::Circle(float r1)
{
    r=r1;
    cout<<"Konstruktor w klasie Circle"<<endl;
}
Circle::~Circle()
{
    cout<<"Destruktor w klasie Circle"<<endl;
}
void Circle:: calculateArea()
{
    float p=3.14*r*r;
    setArea(p);
}

void Circle::calculateCircuit()
{
    setCircuit(2*3.14*r);
}
