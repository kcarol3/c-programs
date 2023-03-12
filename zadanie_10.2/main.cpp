#include <iostream>
#include <regex>
#include <vector>

using namespace std;

bool check(string line){
    regex regPattern("((0[0-9]|1[0-9]|2[0-3])(:)([0-5][0-9])(:)([0-5][0-9])|(0[0-9]|1[0-9]|2[0-3])(:)([0-5][0-9]))");

    if (regex_match (line, regPattern)){
        return true;
    }
    else{
        return false;
    }
}


int main()
{
    vector<string> wek = {"12:00","00:00:00","23:59:59","10:11:60"};
    for (auto i: wek){
        cout << i;
        if(check(i)){
            cout<<"   Zgadza sie"<<endl;
        } else{
            cout<<"   Nie zgadza sie"<<endl;
        }
    }
    return 0;
}
