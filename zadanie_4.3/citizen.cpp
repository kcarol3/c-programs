#include "citizen.h"

const string &Citizen::getName() const
{
    return name;
}

const string &Citizen::getSurname() const
{
    return surname;
}

int Citizen::getAge() const
{
    return age;
}

char Citizen::getSex() const
{
    return sex;
}

const string &Citizen::getPostalCode() const
{
    return postalCode;
}

Citizen::Citizen()
{

}

Citizen::Citizen(string name, string surname, int age, char sex, string postalCode)
{
    this->name=name;
    this->surname=surname;
    this->age=age;
    this->sex=sex;
    this->postalCode=postalCode;
}

void Citizen::show()
{
    cout<<"Imie: "<<getName()<<", "<<"Nazwisko: "<<getSurname()<<", "<<"Wiek: "<<getAge()<<", "<<"Plec: "<<getSex()<<", "<<"Kod pocztowy: "<<getPostalCode()<<endl;
}
