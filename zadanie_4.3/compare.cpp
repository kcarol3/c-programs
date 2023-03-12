#include "compare.h"



bool Compare::operator()(City &c1, City &c2)
{
    return c1.cityCitizens()<c2.cityCitizens();
}
