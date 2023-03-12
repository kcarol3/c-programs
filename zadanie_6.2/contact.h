#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

using namespace std;

class Contact
{
public:
    string name;
    string surname;
    int age;
    string phoneNum;
    string street;

    Contact();
    Contact(string n, string sn, int a, string pn, string st);
    void show()const;

};

#endif // CONTACT_H
