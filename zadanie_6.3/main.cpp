#include <boost/bind.hpp>
#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>

using namespace std;

template<typename T>
float average(vector<T> wek){
    T sum = 0;
    for (auto i:wek){
        sum+=i;
    }
    float av = sum/(float)wek.size();
    return av;
}

template<typename T>
T median(vector<T> wek){
    sort(wek.begin(),wek.end());
    if (wek.size() % 2 == 0)
        {
          return (wek[wek.size() / 2 - 1] + wek[wek.size() / 2]) / 2;
        }
        else
        {
          return wek[wek.size() / 2];
        }
}


template<typename T>
void fun(vector<T> wek){
    int p1 = count_if(wek.begin(),wek.end(),boost::bind(less<T>(),_1,average(wek)));

    int p2 = count_if(wek.begin(),wek.end(),
                      boost::bind(std::logical_and<bool>(),
                      boost::bind(std::greater<T>(),_1,median(wek)),
                      boost::bind(std::less<T>(),_1,average(wek))));

    int p3 = count_if(wek.begin(),wek.end(),boost::bind(greater<T>(),_1,0));

    cout<<"Liczba liczb mniejszych niz sredania: "<<p1<<endl;
    cout<<"Liczba liczb znajdujacych sie pomiedzy srednia a mediana: "<<p2<<endl;
    cout<<"Liczba liczb dodatnich: "<<p3<<endl;

}

int main()
{
    vector<int> wek={1,0,-2,6,-5,2,10,20};
    cout<<"srednia = "<<average(wek)<<endl;
    cout<<"mediana = "<<median(wek)<<endl;
    fun(wek);

    return 0;
}

