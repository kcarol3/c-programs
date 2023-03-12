#include "city.h"
#include "citizen.h"
#include <algorithm>
#include "postalcodes.h"
#include <list>
#include "compare.h"

const string &City::getCityName() const
{
    return cityName;
}

void City::showCities(vector<City> c)
{
    for(auto i:c){
        i.showCity();
    }
}

void City::the_most(vector<City> c, int mode)
{
    string name = City::firtsMode(c);
    system("cls");
    switch(mode) {
    case 1:{
        cout<<"Miasto w ktorym jest najwiecej kodow pocztowych: "<<name<<endl;
        break;
    }
    case 2:{
        cout<<"Miasto z najmniejsza liczba obywateli: "<<City::secondMode(c)<<endl;
        break;
    }
    }
}

void City::statatistic(vector<City> c)
{
    for(auto i:c){
        cout<<"Statystyki:"<<endl;
        cout<<"Nazwa miasta: "<<i.getCityName()<<endl;
        cout<<"Liczba mieszkancow: "<<i.cityCitizens()<<endl;
        cout<<"liczba kobiet: "<<i.women()<<endl;
        cout<<"Liczba mezczyzn: "<<i.cityCitizens()-i.women()<<endl;
        cout<<"Liczba doroslych: "<<i.adults()<<endl;
        cout<<"Liczba niepelnoletnich: "<<i.cityCitizens()-i.adults()<<endl;
        cout<<endl;
    }
}

void City::sort_cities(vector<City> &c)
{
        sort(c.begin(),c.end(),Compare());
}


bool City::ifWomen(Citizen cit)
{
    if (cit.getSex()=='K'){
        return true;
    }
    else {
        return false;
    }
}

bool City::ifAdults(Citizen cit)
{
    if(cit.getAge()>=18){
        return true;
    }
    else {
        return false;
    }
}

string City::firtsMode(vector<City> c)
{

    string max = c[0].cityName;

    vector<City>::iterator it;
    for (it=c.begin();it<c.end()-1;++it){
            if (it->postalCodes()<(1+it)->postalCodes()){
                max = (it+1)->cityName;

            }
        }


    return max;
}

string City::secondMode(vector<City> c)
{
    string min;

    vector<City>::iterator it;
    for (it=c.begin();it<c.end()-1;++it){
            if (it->cityCitizens()>(1+it)->cityCitizens()){
                min = (it+1)->cityName;
            }
        }
    return min;
}

City::City()
{

}

City::City(string cName)
{
    this->cityName=cName;
}

void City::addCitizen(Citizen cit)
{
    citizens.push_back(cit);
}

void City::deleteCitien(string surname, int age)
{
    vector<Citizen>::iterator it;
    for(it=citizens.begin(); it!=citizens.end();++it) {
        if (surname == it->getSurname() && age==it->getAge()){
            citizens.erase(it);
        }
    }
}

void City::showCitizens()
{
    for(auto i:citizens){
        i.show();
    }
}

void City::showCity()
{
    cout<<"Miasto nazywa sie: "<<getCityName()<<endl;
}

int City::women()
{
    return count_if(citizens.begin(),citizens.end(),City::ifWomen);

}

int City::cityCitizens()
{
    return citizens.size();
}

int City::adults()
{
    return count_if(citizens.begin(),citizens.end(),City::ifAdults);
}

int City::postalCodes()
{
    list<PostalCodes> listCodes{};

    for(int i = 0;i<citizens.size();i++){
        bool w=true;

        list<PostalCodes>::iterator it;
        for(it = listCodes.begin(); it != listCodes.end(); ++it){
            if(citizens[i].getPostalCode()==it->getPostCode()){
                it->addMan();
                w=false;
                break;
            }
        }
        if (w)
        {
            listCodes.push_back(PostalCodes(citizens[i].getPostalCode()));
        }
    }

    cout<<"Liczba kodow pocztowych:"<<listCodes.size()<<endl;
    cout<<"Kody mieszkancow:"<<endl;

    for (auto i:listCodes){
        cout<<i.getPostCode()<<"->"<<i.getNumOfPeople()<<endl;

    }
    cout<<endl;

    return listCodes.size();
}
