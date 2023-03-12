#include "student.h"
#include <fstream>


const string &Student::getName() const
{
    return name;
}

void Student::setName(const string &newName)
{
    name = newName;
}

Student::Student()
{

}

Student::Student(string name, string surname, char gender, int grade, string mail)
{
    this->name=name;
    this->surname=surname;
    this->gender=gender;
    this->grade=grade;
    this->mail=mail;
}

void Student::showAll()
{
    ifstream file;
    file.open("dane.csv");
    while(!file.eof()){
        string str;
        getline(file,str,';');
        Student *s = new Student();
        isstream >>
    }
}

void Student::showStudent(string name, string surname, char gender, int grade, string mail)
{
    cout<<"Imie: "<<name<<" Nazwisko: "<<surname<<" Plec: "<<gender<<" Ocena: "<<grade<<" Email: "<<mail<<endl;
}
