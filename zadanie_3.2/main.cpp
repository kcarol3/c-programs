#include <iostream>
//#include <limits>

using namespace std;

template <typename T>
T findMin(T *tab, int size){
    T minValue = tab[0];
    for (int i=1;i<size;i++) {
        if (minValue>tab[i]) {
            minValue=tab[i];
        }
    }
    return minValue;
}
int main()
{
    int tab[] = {4,2,3,4,1,6};
    float tab1[] = {1.5,3.2,1.4,2.1,6.1};

    cout<<"najmniejsza wartosc: "<<findMin<float>(tab1,3)<<endl;
    return 0;
}


