#include "user.h"
#include <fstream>

User::User()
{


}

User::User(string newName, string newSurname, string newAge, string newPhoneNumber, string newEmail)
{
    this->name=newName;
    this->surname=newSurname;
    this->age=newAge;
    this->phoneNumber=newPhoneNumber;
    this->email=newEmail;
}

bool User::checkName()
{
    regex regPattern("[A-Z][a-z]+");
    if (regex_match (this->name, regPattern)){
        return true;
    }
    else{
        return false;
    }
}

bool User::checkSurname()
{
    regex regPattern("[A-Z][a-z]+|([A-Z][a-z]+)\\-([A-Z][a-z]+)");
    if (regex_match (this->surname, regPattern)){
        return true;
    }
    else{
        return false;
    }
}

bool User::checkAge()
{
    regex regPattern("[1-9][0-9]?");
    if (regex_match (this->age, regPattern)){
        return true;
    }
    else{
        return false;
    }
}

bool User::checkPhoneNumber()
{
    regex regPattern("[1-9][0-9]{8}");
    if (regex_match (this->phoneNumber, regPattern)){
        return true;
    }
    else{
        return false;
    }
}

bool User::checkEmail()
{
    regex regPattern("([a-zA-Z][a-zA-Z0-9\\_\\-\\.]*)@([a-zA-Z0-9]+)\\.([a-zA-Z0-9]+)");
    if (regex_match (this->email, regPattern)){
        return true;
    }
    else{
        return false;
    }
}

bool User::checkAll()
{
    bool w = false;
    if(!this->checkName()){
        cout<<"Zle imie!"<<endl;
    } else if(!this->checkSurname()){
          cout<<"Zle nazwisko!"<<endl;
    } else if(!this->checkAge()){
        cout<<"Zly wiek!"<<endl;
    } else if(!this->checkPhoneNumber()){
        cout<<"Zly numer telefonu!"<<endl;
    } else if(!this->checkEmail()){
        cout<<"Zly email!"<<endl;
    } else {
        cout<<"Poprawne dane!"<<endl;
        w = true;
    }
    return w;
}

void User::saveUser(string fileName)
{
    if(this->checkAll()){
        ofstream fileOf;
        fileOf.open(fileName, ios_base::app);
        if(fileOf.is_open())
        {
        fileOf
        <<this->name<<";"
        <<this->surname<<";"
        <<this->age<<";"
        <<this->phoneNumber<<";"
        <<this->email<<";"
        <<endl;
        fileOf.close();
        cout<<"Zapisano dane uzytkownika"<<endl;
        }
        else
        cerr<<"Blad przy otwieraniu pliku!"<<endl;
    }
}

void User::showUSers(string fileName)
{
    ifstream fileIf;
    fileIf.open(fileName);
    if(fileIf.is_open()){
        string line1;
        while(getline(fileIf,line1)){
        cout<<line1<<endl;
        }
    }

}
