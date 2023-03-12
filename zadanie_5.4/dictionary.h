#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <map>
#include <iostream>

using namespace std;

class Dictionary
{
private:
    map<string,string> words;
    map<string, string>::iterator searchByValue(map<string, string>& m, string val);
public:
    Dictionary();
    void pushWord(pair<string, string> word);
    void deleteWord(string key);
    void show();
    void getTranslation(string word);
    void showSortedDec();
};

#endif // DICTIONARY_H
