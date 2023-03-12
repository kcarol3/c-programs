#include "contacts.h"
#include <set>
Contacts::Contacts()
{

}

void Contacts::pushContact(const string name,const string surname,const int age,const string phoneNum,const string street)
{

    Contact con(name,surname,age,phoneNum,street);
    auto i = phoneBook.insert(con);
    if(i.second==false){
        cout<<"Istnieje osoba z takim numerem telefonu"<<endl;
    }

}

void Contacts::showAllContacts()
{
    for(auto it=phoneBook.get<0>().begin(); it != phoneBook.get<0>().end(); ++it){
      it->show();
    }
    cout<<endl;

}

void Contacts::removeContact(string phoneNumber)
{
    auto &phone_index = phoneBook.get<3>();
    const auto it = phone_index.find(phoneNumber);
    phone_index.erase(it);



}

void Contacts::searchAllByStreet(string street)
{
    //auto &streetIndex = phoneBook.get<4>();
    for (auto it=phoneBook.get<4>().begin();it!=phoneBook.get<4>().end();++it){
        if(it->street==street){
            it->show();
        }
    }
    cout<<endl;
}

void Contacts::searchAllInRange(int firstAge, int secondAge)
{
    for (auto it=phoneBook.get<3>().begin();it!=phoneBook.get<3>().end();++it){
        if(it->age>=firstAge && it->age<=secondAge){
            it->show();
        }
    }
    cout<<endl;
}

void Contacts::searchByPhoneNumber(string phoneNumber)
{
    auto &phone_index = phoneBook.get<3>();
    const auto it = phone_index.find(phoneNumber);
    it->show();
    cout<<endl;
}

void Contacts::renemeStreet(string oldStreet, string newStreet)
{
    auto &street_index=phoneBook.get<4>();
    auto it = street_index.find(oldStreet);
    while(it!=street_index.end()){
        if(it->street==oldStreet){
            changeStreets(newStreet,oldStreet);
            it = street_index.find(oldStreet);
        }
    }

}

int Contacts::countIfAdult()
{
    int i=0;
    for (auto it=phoneBook.get<2>().begin();it!=phoneBook.get<2>().end();++it){
        if(it->age>=18){
            i++;
        }
    }
    return i;

}

int Contacts::countUniqueSurnames()
{
    set<string> uniqueSurnames;

    for (auto it=phoneBook.get<1>().begin();it!=phoneBook.get<1>().end();++it){
        uniqueSurnames.insert(it->surname);
    }
    return uniqueSurnames.size();
}

