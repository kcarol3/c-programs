#ifndef CONTACTS_H
#define CONTACTS_H

#include <iostream>
#include <boost/multi_index_container.hpp>
#include <contact.h>
#include <boost/multi_index/hashed_index.hpp>
#include <boost/multi_index/member.hpp>
#include <boost/multi_index/random_access_index.hpp.>
#include <vector>
using namespace std;
using namespace boost::multi_index;

typedef multi_index_container<Contact, indexed_by<
hashed_non_unique<member<Contact, string, &Contact::name>>,
hashed_non_unique<member<Contact, string, &Contact::surname>>,
hashed_non_unique<member<Contact, int, &Contact::age>>,
hashed_unique<member<Contact, string, &Contact::phoneNum>>,
hashed_non_unique<member<Contact, string, &Contact::street>>,
random_access<>>> multi_Contacts;

typedef multi_Contacts::nth_index<0>::type name_type;
typedef multi_Contacts::nth_index<3>::type phone_type;
typedef multi_Contacts::nth_index<4>::type street_type;
typedef multi_Contacts::nth_index<2>::type age_type;

class Contacts
{
    multi_Contacts phoneBook;
public:
    Contacts();
    void changeStreets(string newStreet, string oldStreet) {
        auto &phoneNumber_index = phoneBook.get<4>();
        auto it = phoneNumber_index.find(oldStreet);
        phoneNumber_index.modify(it, [newStreet](Contact &a) { a.street = newStreet; });
        }
    void pushContact(string name,string surname,int age, string phoneNum,string street);
    void showAllContacts();
    void removeContact(string phoneNumber);
    void searchAllByStreet(string street);
    void searchAllInRange(int firstAge, int secondAge);
    void searchByPhoneNumber(string phoneNumber);
    void renemeStreet(string oldStreet, string newStreet);
    int countIfAdult();
    int countUniqueSurnames();
};

#endif // CONTACTS_H
