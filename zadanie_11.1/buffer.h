#ifndef BUFFER_H
#define BUFFER_H
#include <iostream>
using namespace std;

class Buffer
{
public:
    Buffer();
    virtual void add(int a) = 0;
    virtual void write() = 0;
    ~Buffer();
};

#endif // BUFFER_H
