#include "comparenumb.h"


bool CompareNumb::operator()(int a, int b)
{
    int aCount=0, bCount=0;
    while(a>0){
        aCount++;
        a=a/10;
    }
    while(b>0){
        bCount++;
        b=b/10;
    }
    return aCount > bCount;
}
