
#include <iostream>
#include "contacts.h"


using namespace std;

int main(){

    Contacts kontakty;
    kontakty.pushContact("Karol","Kurowski",21,"123456789","Dluga");
    kontakty.pushContact("Karol","Kurowski",21,"123456789","Dluga");
    kontakty.pushContact("Marek","Kowalski",34,"890912321","Szkolna");
    kontakty.pushContact("Jan","Kowalski",17,"906790212","Spoldzielcza");
    kontakty.pushContact("Anna","Baronowa",42,"123321123","Szkolna");
    kontakty.pushContact("Zenon","Kurowski",14,"906712312","Spoldzielcza");


    kontakty.showAllContacts();

    cout<<"Ludzie z ulicy szkolna:"<<endl;
    kontakty.searchAllByStreet("Szkolna");

    cout<<"Ludzie z przedzialu lat 20..40:"<<endl;
    kontakty.searchAllInRange(20,40);

    cout<<"Osoba o numerze telefonu 123456789:"<<endl;
    kontakty.searchByPhoneNumber("123456789");

    cout<<"Po zamianie ulic szkolna na rycerska:"<<endl;
    kontakty.renemeStreet("Szkolna","Rycerska");
    kontakty.showAllContacts();

    cout<<"Liczba pelnoletnich osob: "<<kontakty.countIfAdult()<<endl;
    cout<<endl;

    cout<<"Liczba unikalnych nazwisk:"<<kontakty.countUniqueSurnames()<<endl;
    cout<<endl;

    cout<<"Usuwanie Anna...."<<endl;
    kontakty.removeContact("123321123");
    cout<<endl;
    kontakty.showAllContacts();

    return 0;
}
