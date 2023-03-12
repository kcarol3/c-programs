#include <iostream>
#include "citizen.h"
#include "city.h"

using namespace std;

int main()
{
    City m("Mragowo");
    City l("Lublin");
    City r("Radom");


    Citizen obywatel1("Karol","Kurowski",21,'M',"08-307");
    m.addCitizen(obywatel1);
    Citizen obywatel2("Mateusz","Kur",33,'M',"08-306");
    m.addCitizen(obywatel2);
    Citizen obywatel3("Anna","Kowalska",45,'K',"08-307");
    m.addCitizen(obywatel3);
    Citizen obywatel4("Magda","Wisniewska",17,'K',"08-309");
    m.addCitizen(obywatel4);
    Citizen obywatel5("Magdalena","Polaska",14,'K',"08-309");
    m.addCitizen(obywatel5);
    Citizen obywatel6("Jerzy","Paka",25,'M',"08-309");
    m.addCitizen(obywatel6);

    Citizen obywatel7("Karol","Krakowski",18,'M',"20-140");
    l.addCitizen(obywatel7);
    Citizen obywatel8("Marek","Bizon",15,'M',"20-141");
    l.addCitizen(obywatel8);
    Citizen obywatel9("Anna","Zazzz",45,'K',"20-140");
    l.addCitizen(obywatel9);
    Citizen obywatel10("Magda","Kowalska",22,'K',"20-140");
    l.addCitizen(obywatel10);
    Citizen obywatel11("Joanna","Dobrowolska",14,'K',"20-141");
    l.addCitizen(obywatel11);
    Citizen obywatel12("Jerzy","Kowalski",25,'M',"20-141");
    l.addCitizen(obywatel12);
    Citizen obywatel13("Karol","Arasz",26,'M',"20-141");
    l.addCitizen(obywatel13);

    Citizen ob1("Paweł","Żuk",33,'M',"12-541");
    r.addCitizen(ob1);
    Citizen ob2("Anna","Zdroinska",16,'K',"12-542");
    r.addCitizen(ob2);
    Citizen ob3("Magda","Raba",17,'K',"12-543");
    r.addCitizen(ob3);
    Citizen ob4("Janina","Polaska",22,'K',"12-543");
    r.addCitizen(ob4);
    Citizen ob5("Adam","Para",25,'M',"12-544");
    r.addCitizen(ob5);

    m.showCitizens();
    //cout<<"Po usunieciu"<<endl;
    //cout<<endl;
    //m.deleteCitien("Kur",33);
    //m.showCitizens();

    //m.showCity();
    vector<City> miasta;
    miasta.push_back(m);
    miasta.push_back(r);
    miasta.push_back(l);

    //City::showCities(miasta);
    cout<<endl;
    //cout<<"Po sortowaniu:"<<endl<<endl;
    //::sort_cities(miasta);
    //City::showCities(miasta);
    //City::the_most(miasta,1);

    //City::statatistic(miasta);
    //cout<<"Liczba kobiet: "<<m.women()<<endl;
    //cout<<"Liczba pelnoletnich obywateli: "<<m.adults()<<endl;

    m.postalCodes();


    return 0;
}
