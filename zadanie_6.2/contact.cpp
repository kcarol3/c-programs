#include "contact.h"

Contact::Contact()
{

}

Contact::Contact(string n, string sn, int a, string pn, string st)
{
    this->name=n;
    this->surname=sn;
    this->age=a;
    this->phoneNum=pn;
    this->street=st;
}

void Contact::show () const{
    cout<<name<<" "<<surname<<" "<<"Wiek:"<<age<<" "<<"Telefon:"<<phoneNum<<" "<<"Ulica:"<<street<<endl;
}
