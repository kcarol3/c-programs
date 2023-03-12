#include <iostream>
#include "bufferarr.h"
#include "bufferfile.h"
using namespace std;

int main()
{
    auto ob = BufferFile("numbers.txt");
    cout<<"Plik"<<endl;
    ob.add(11);
    ob.write();
    auto b = BufferArr(2);
    cout<<"tablica"<<endl;
    b.add(13);
    b.add(16);
    b.write();
    b.add(15);
    return 0;
}
