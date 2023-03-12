#include <iostream>
#include "algorytmy.h"

using namespace std;

int main()
{
    Algorytmy *num = new Algorytmy(10);
    num->show();

    cout<<"Srednia: "<<num->average()<<endl;

    cout<<"Liczba dodatnich: "<<num->countPositives()<<endl;

    cout<<"Po sortowaniu: "<<endl;
    num->sortPosNeg();
    num->show();

    cout<<"Po negowaniu:"<<endl;
    num->neg();
    num->show();

    auto nb = 200;
    cout<<"Liczba elemntow mniejszych od "<<nb<<": "<<num->countIfSmaller(nb)<<endl;

    cout<<"Po usunieciu:"<<endl;
    num->delNegatives();
    num->show();

    delete num;

    return 0;
}
