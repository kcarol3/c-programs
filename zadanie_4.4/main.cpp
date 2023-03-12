#include <iostream>
#include <vector>
#include "comparesum.h"
#include <algorithm>
#include "comparenumb.h"


using namespace std;

void show(int &el){
    cout<<el<<" ";
}

int main()
{
    vector<int> wektor{12,54,23,85,33,55,112,2,76,455,34,1444,11111,3,6,432,222323};
    for_each(wektor.begin(),wektor.end(),show);
    cout<<endl<<endl;
    sort(wektor.begin(),wektor.end(),CompareSum());
    for_each(wektor.begin(),wektor.end(),show);
    cout<<endl<<endl;
    sort(wektor.begin(),wektor.end(),CompareNumb());
    for_each(wektor.begin(),wektor.end(),show);
    cout<<endl<<endl;
    return 0;
}
