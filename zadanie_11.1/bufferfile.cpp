#include "bufferfile.h"
#include <fstream>
#include <memory>
BufferFile::BufferFile()
{

}

BufferFile::BufferFile(string newFileName)
{
    cout<<"Konstruktor klasy BufferFikle"<<endl;
    this->fileName=newFileName;
}

void BufferFile::add(int a)
{
    unique_ptr<ofstream> file(new ofstream);

    file->open(this->fileName, ios::app);
    if(file->is_open())
    {
       *file<<a<<endl;
       file->close();
     }
     else
        cerr<<"Blad przy otwieraniu pliku!"<<endl;
}

void BufferFile::write()
{
    unique_ptr<ifstream> file(new ifstream);
    file->open(this->fileName,ios::in);
    while(!file->eof())
    {
        string line;
       getline(*file,line);
       cout<<line<<endl;
     }
    file->close();
}

BufferFile::~BufferFile()
{
    cout << "Destruktor klasy BufferArr"<<endl;
}
