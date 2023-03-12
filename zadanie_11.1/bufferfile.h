#ifndef BUFFERFILE_H
#define BUFFERFILE_H
#include <iostream>
#include "buffer.h"

using namespace std;

class BufferFile:Buffer
{
    string fileName;
public:
    BufferFile();
    BufferFile(string newFileName);
    virtual void add(int a) override;
    virtual void write() override;
    ~BufferFile();
};

#endif // BUFFERFILE_H
