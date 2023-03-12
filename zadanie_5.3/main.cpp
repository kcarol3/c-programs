#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

char fun(string firstStr, string secondStr){
    map<bool, char> checkChar;
    bool check;
    for (auto c1:secondStr){
        check = false;
        for(auto c2:firstStr){
            if(c1==c2){
                check = true;
                break;
            }
        }
        checkChar.insert(pair<bool,char>(check,c1));
    }
    return checkChar[0];
}
int main()
{
    string s1 = "abcdef";
    string s2 = "bdagcfe";
    char znak = fun(s1,s2);
    cout<<znak<<endl;
    return 0;
}
