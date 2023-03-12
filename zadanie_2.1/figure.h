#ifndef FIGURE_H
#define FIGURE_H
class Figure
{
private:
    float area;
    float circuit;
public:
    Figure();
    virtual ~Figure();
    float getArea();
    void setArea(float area1);

    virtual void calculateArea()=0;
    void show();
    virtual void calculateCircuit()=0;
    void setCircuit(float newCircuit);
    float getCircuit() const;
};

#endif // FIGURE_H
