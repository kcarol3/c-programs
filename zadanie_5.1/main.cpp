#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

pair<int,int> fun(vector<int> vec){
    set<int> tempSet;
    pair<int, int> para;
    int duplicate=0;
    int sum=0;

    for (auto i:vec){
        tempSet.insert(i);
    }

    sort(vec.begin(),vec.end());
    int i=0;
    bool foundD = false;

    set<int>::iterator it;
    for(it = tempSet.begin();it!=tempSet.end();it++){

        if(*it != vec[i] && foundD==false){
            duplicate = vec[i];
            foundD = true;
        }
        sum+=*it;
        i++;
    }
    if(!foundD) {
        duplicate = vec.back();
    }
    para.first = duplicate;
    para.second = sum;

    return para;
}

int main()
{

    pair<int, int> para;
    vector<int> wektor = {1,8,4,3,7,5,2,6,9,7,10};
    para = fun(wektor);
    cout<<"Duplikat: "<<para.first<<endl;
    cout<<"Suma: "<<para.second<<endl;
    return 0;
}
