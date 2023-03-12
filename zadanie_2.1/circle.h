#ifndef CIRCLE_H
#define CIRCLE_H
#include "figure.h"
class Circle: public Figure
{
private:
float r;
public:
Circle(float r1);
~Circle();
virtual void calculateArea() override;
virtual void calculateCircuit() override;
};
#endif // CIRCLE_H
