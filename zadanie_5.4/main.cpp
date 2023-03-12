#include <iostream>
#include <dictionary.h>

using namespace std;

int main()
{
    Dictionary *slownik = new Dictionary();

    slownik->pushWord(pair<string,string>("kot", "pies"));
    slownik->pushWord(pair<string,string>("pies", "dog"));
    slownik->pushWord(pair<string,string>("dom", "home"));
    slownik->pushWord(pair<string,string>("telefon", "phone"));
    slownik->pushWord(pair<string,string>("ksiazka", "book"));
    slownik->pushWord(pair<string,string>("kino", "cinema"));
    slownik->pushWord(pair<string,string>("zdjecie", "picture"));
    slownik->pushWord(pair<string,string>("kino", "cinema"));

    slownik->show();

    cout<<"Po usunieciu"<<endl;
    slownik->deleteWord("dom");
    slownik->show();

    cout<<"zdjecie : ";
    slownik->getTranslation("zdjecie");
    cout<<endl;

    slownik->showSortedDec();

    delete slownik;

    return 0;
}
