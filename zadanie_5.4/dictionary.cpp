#include "dictionary.h"
#include <vector>
#include <algorithm>
#include <map>

map<string, string>::iterator Dictionary::searchByValue(map<string, string> &m, string val)
{
    map<string, string>::iterator it;
    for(it=m.begin();it!=m.end();it++)
        if(it->second == val)
            break;

    return it;
}


Dictionary::Dictionary()
{

}

void Dictionary::pushWord(pair<string, string> word)
{
    bool exists = false;
    map<string, string>:: iterator it;
    for (it=words.begin();it!=words.end();++it){
        if(it->first==word.first){
            exists = true;
            break;
        }
    }
    if (!exists) {
        words.insert(word);
    }
    else cout<<"Slowo "<<word.first<<" istnieje w slowniku"<<endl;

}

void Dictionary::deleteWord(string key)
{
    words.erase(key);
}

void Dictionary::show()
{
    map<string, string>:: iterator it;
    for (it=words.begin();it!=words.end();++it){
        cout<<it->first<<" = "<<it->second<<endl;
    }
    cout<<endl;
}

void Dictionary::getTranslation(string word)
{
    cout<<words.find(word)->second<<endl;
}

void Dictionary::showSortedDec()
{
    vector<string> translations;
    auto it = words.begin();
    while (it != words.end()){
        translations.push_back(it->second);
        it++;
    }
    sort(translations.begin(),translations.end(),greater<string>());

    cout<<"Posortowany malejaco slownik: "<<endl;
    for(auto i:translations){
        map<string, string>::iterator it = searchByValue(words, i);
        cout<<it->first<<" = "<<it->second<<endl;
    }
    cout<<endl;
}
