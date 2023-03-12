#include <iostream>
#include "figure.h"
using namespace std;
void Figure::setCircuit(float newCircuit)
{
    circuit = newCircuit;
}

float Figure::getCircuit() const
{
    return circuit;
}

Figure::Figure()
{
    cout<<"Konstruktor klasy bazowej Figure"<<endl;
}
Figure:: ~Figure()
{
    cout<<"Wirtualny destruktor klasy bazowej Figure"<<endl;
}
float Figure:: getArea()
{
    return area;
}
void Figure::setArea(float area1)
{
    area=area1;
}
void Figure::show()
{
    cout<<"Pole: "<<area<<endl;
    cout<<"Obwod: "<<circuit<<endl;
}
