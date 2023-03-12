#include <iostream>
#include <map>
#include <boost/fusion/container.hpp>
#include <boost/fusion/sequence.hpp>
#include <boost/mpl/int.hpp>
using namespace std;

class Count
{
public:
    template <typename T>
    void operator()(T &t)
    {
        switch(*typeid(t).name()){
        case 'f': fl++;break;
        case 'i': in++;break;
        }

        m.insert(pair<string, int>("int",in));
        cout<<"f = "<<fl<<endl;
    }
    int in=0,db=0,fl=0,bl=0,ch=0;
    map<string, int> m;


};


map<string, int> fun(boost::fusion::vector<int,double,float,bool,char> wek){
    int in=0,db=0,fl=0,bl=0,ch=0;

    //boost::fusion::for_each(wek,Print());

    map<string, int> mapa;
    mapa.insert(pair<string,int>("kot",1));
    return mapa;
}

int main()
{
    boost::fusion::vector<int,double,float,bool,char> wek{1,2.2,3.33,false,'c'};
    auto wek2 = push_back(wek,'m');
    auto wek3 = push_back(wek2,false);
    boost::fusion::for_each(wek3,Count());


    fun(wek3);
    cout<<endl;


    return 0;
}
