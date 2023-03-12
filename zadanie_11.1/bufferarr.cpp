#include "bufferarr.h"

BufferArr::BufferArr()
{

}

BufferArr::BufferArr(int newSize)
{
    this->size=newSize;
    arr = new int[size];
}
