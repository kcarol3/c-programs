#include "algorytmy.h"
#include <ctime>
#include <stdlib.h>
#include <algorithm>

const vector<float> &Algorytmy::getWektor() const
{
    return wektor;
}

Algorytmy::Algorytmy()
{

}

Algorytmy::Algorytmy(int newN)
{
    this->n = newN;
    srand(time(NULL));
    float var;
    for(int i=0;i<n;i++){
        var = rand()%1000-500;
        this->wektor.push_back(var);
    }
}

void Algorytmy::show()
{
    for_each(wektor.begin(),wektor.end(),[](float el){cout<<"|"<<el;});
    cout<<"|"<<endl;
}

float Algorytmy::average()
{
 float sum = 0;
 for_each(wektor.begin(),wektor.end(),[&sum](float el){sum+=el;});
 return sum/(float)n;
}

int Algorytmy::countPositives()
{
    return count_if(wektor.begin(),wektor.end(),[](float el)->bool{return el>0;});
}

void Algorytmy::delNegatives()
{

    auto it = wektor.begin();
    while(it!=wektor.end()){
        if (*it<0) {
            wektor.erase(it);
        } else {
            it++;
        }
    }
}

void Algorytmy::sortPosNeg()
{
    sort(wektor.begin(),wektor.end(),[](int a, int b){return b%2!=0;});

}

void Algorytmy::neg()
{
    transform(wektor.begin(),wektor.end(),wektor.begin(),[](float el){return -el;});
}

int Algorytmy::countIfSmaller(float nb)
{
    return count_if(wektor.begin(),wektor.end(),[nb](float el)->bool{return el<nb;});
}
