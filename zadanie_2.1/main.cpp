#include <iostream>
#include "figure.h"
#include "square.h"
#include "circle.h"

using namespace std;
int main()
{
    Figure* f1=new Square(4);
    Figure* f2=new Circle(2);
    f1->calculateArea();
    f1->calculateCircuit();
    f1->show();
    f2->calculateArea();
    f2->calculateCircuit();
    f2->show();
    delete f1;
    delete f2;
    return 0;
}
