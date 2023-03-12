#include <iostream>
#include "user.h"

using namespace std;

int main()
{
    cout <<"Podaj dane:"<<endl;
    cout<<"Podaj imie:"<<endl;
    string name;
    cin >> name;
    cout<<"Podaj nazwisko:"<<endl;
    string surname;
    cin >> surname;
    cout<<"Podaj wiek:"<<endl;
    string age;
    cin >> age;
    cout<<"Podaj numer telefonu:"<<endl;
    string phoneNumber;
    cin >> phoneNumber;
    cout << "Podaj email:"<<endl;
    string email;
    cin >> email;

    User *karol = new User(name,surname,age,phoneNumber,email);

    karol->saveUser("users.txt");
    karol->showUSers("users.txt");
    delete karol;
    return 0;
}
