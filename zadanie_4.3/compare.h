#ifndef COMPARE_H
#define COMPARE_H

#include "city.h"

class Compare
{
public:
    bool operator() (City &c1,City &c2);
};

#endif // COMPARE_H
