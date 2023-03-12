#include <iostream>
#include <list>
#include <cstdlib>
#include <algorithm>

using namespace std;

void print(int el){
    cout<<el<<endl;
}

int main()
{
    srand(time(NULL));

    int num = rand();
    list<int> lista;
    int tmp;

    for (int i=0;i<num;i++) {
        tmp = rand()%201-100;
        if (tmp >= 0) {
            lista.push_front(tmp);
        }
        else {
            lista.push_back(tmp);
        }
    }
   for_each(lista.begin(),lista.end(),print);


    return 0;
}
