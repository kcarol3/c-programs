#include <iostream>
#include <regex>
#include <vector>

using namespace std;

bool checkStreetName(string street){
    regex regPattern("[A-Z a-z]+");

    if (regex_match (street, regPattern)){
        return true;
    }
    else{
        return false;
    }
}

bool checkPostNumber(string postNumber){
    regex regPattern("[0-9]{2}\\-[0-9]{3}");

    if (regex_match (postNumber, regPattern)){
        return true;
    }
    else{
        return false;
    }
}

bool checkHouseNumber(string houseNumber){
    regex regPattern("[1-9][0-9]*|[1-9][0-9]*[A-B]");

    if (regex_match (houseNumber, regPattern)){
        return true;
    }
    else{
        return false;
    }
}

bool checkFlatNumber(string flatNumber){
    regex regPattern("([1-9][0-9]*)");

    if (regex_match (flatNumber, regPattern)){
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    vector<string> streets = {"Koperska","terazowska","Jana Pawla 2", ""};
    vector<string> postNumbers = {"00-000","11-11","99-999","2-3456","123456","12-098"};
    vector<string> houseNumbers = {"12A","131","012Z","0","11"};
    vector<string> flatNumbers = {"123","012","102","1","0"};

    cout << "Ulice"<<endl;
    for (auto i: streets){
        cout << i;
        if(checkStreetName(i)){
            cout<<"   Zgadza sie"<<endl;
        } else{
            cout<<"   Nie zgadza sie"<<endl;
        }
    }
    cout <<endl;

    cout<<"Kody pocztowe"<<endl;
    for (auto i: postNumbers){
        cout << i;
        if(checkPostNumber(i)){
            cout<<"   Zgadza sie"<<endl;
        } else{
            cout<<"   Nie zgadza sie"<<endl;
        }
    }
    cout <<endl;

    cout<<"Numery domow"<<endl;
    for (auto i: houseNumbers){
        cout << i;
        if(checkHouseNumber(i)){
            cout<<"   Zgadza sie"<<endl;
        } else{
            cout<<"   Nie zgadza sie"<<endl;
        }
    }
    cout <<endl;

    cout<<"Numery miekszkan"<<endl;
    for (auto i: flatNumbers){
        cout << i;
        if(checkFlatNumber(i)){
            cout<<"   Zgadza sie"<<endl;
        } else{
            cout<<"   Nie zgadza sie"<<endl;
        }
    }
    return 0;
}
