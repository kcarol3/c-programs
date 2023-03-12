#ifndef USER_H
#define USER_H
#include <iostream>
#include <regex>

using namespace std;

class User
{
    string name;
    string surname;
    string age;
    string phoneNumber;
    string email;



    public:
        User();
        User(string newName, string newSurname, string newAge, string newPhoneNumber, string newEmail);

        bool checkName();
        bool checkSurname();
        bool checkAge();
        bool checkPhoneNumber();
        bool checkEmail();

        bool checkAll();

        void saveUser(string fileName);
        void showUSers(string fileName);

};

#endif // USER_H
