#include <iostream>
#include "array.h"

int main()
{
    Array<string> tablica(6);
    tablica.append("koty");
    tablica.append("niedzwiedz");
    tablica.append("samochodowy");
    tablica.append("smoki");
    tablica.append("miejskaDzungla");
    tablica.append("smart");

    /*Array<int> tablica(4);
    tablica.append(3);
    tablica.append(1);
    tablica.append(4);
    tablica.append(2);*/

    tablica.show();
    cout<<"Po sortowaniu:"<<endl;
    tablica.sortUp();
    tablica.show();
    cout<<"Element maksymalny: "<<tablica.maxElement()<<endl;
    cout<<"Element pod indeksem 2: "<<tablica.getElement(2)<<endl;
    return 0;

}
