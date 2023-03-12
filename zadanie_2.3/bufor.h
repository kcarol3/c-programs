#ifndef BUFOR_H
#define BUFOR_H


class Bufor
{
private:
    int *tabNumbers;
    int tabSize;
    int firstEl;
public:
    Bufor();
    Bufor(int size);
    virtual ~Bufor();
    virtual void add(int value);
    virtual double calculated()=0;
    int getIndex();
    int getSize();
    int getTab(int i);
    int getFirts();

};

#endif // BUFOR_H
