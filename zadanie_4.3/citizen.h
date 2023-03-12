#ifndef CITIZEN_H
#define CITIZEN_H

#include <iostream>

using namespace std;

class Citizen
{
private:
    string name;
    string surname;
    int age;
    char sex;
    string postalCode;
public:
    Citizen();
    Citizen(string name, string surname, int age, char sex,string postalCode);
    void show();
    const string &getName() const;
    const string &getSurname() const;
    int getAge() const;
    char getSex() const;
    const string &getPostalCode() const;
};

#endif // CITIZEN_H
