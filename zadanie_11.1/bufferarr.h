#ifndef BUFFERARR_H
#define BUFFERARR_H
#include <iostream>
#include <memory>
#include "buffer.h"

class BufferArr:Buffer
{
    int size;
    int *arr;
    int nextIndex = 0;
public:
    BufferArr();
    BufferArr(int newSize);
    void add(int a) {
            if (nextIndex < size) {
                arr[nextIndex++] = a;
            } else {
                cout << "Tablica jest pelna, nie mozna dodac elementu" << endl;
            }
        }

    void write() {
            for (int i = 0; i < nextIndex; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};

#endif // BUFFERARR_H
