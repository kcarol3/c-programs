#include "comparesum.h"

bool CompareSum::operator()(int a, int b)
{
    int aSum=0,bSum=0;
    while(a>0){
        aSum+=a%10;
        a=a/10;
    }
    while(b>0){
        bSum+=b%10;
        b=b/10;
    }
    return aSum < bSum;
}
