#include <iostream>
#include <set>
#include <algorithm>

using namespace std;


template <typename T1>
void diffSets(set<T1> set1, set<T1> set2){
    set<T1> sDiffer1;
    set<T1> sDiffer2;
    set<T1> sDiffer3;

    set_difference(set1.begin(),set1.end(),set2.begin(),set2.end(),insert_iterator(sDiffer1,sDiffer1.begin()));
    set_difference(set2.begin(),set2.end(),set1.begin(),set1.end(),insert_iterator(sDiffer2,sDiffer2.begin()));

    cout<<"Roznica pomiedzy pierwszym a drugim zbiorem: "<<endl;
    for(auto i:sDiffer1){
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<"Roznica pomiedzy drugim a pierwszym: "<<endl;
    for(auto i:sDiffer2){
        cout<<i<<endl;
    }
    cout<<endl;
    set_union(sDiffer1.begin(),sDiffer1.end(),sDiffer2.begin(),sDiffer2.end(),insert_iterator(sDiffer3,sDiffer3.begin()));
    cout<<"Unikaty w A i B: "<<endl;
    for(auto i:sDiffer3){
        cout<<i<<endl;
    }
}

int main()
{
    set<int> set1 = {2,5,1,4,3};
    set<int> set2 = {3,2,1,7,8,9,10};
    diffSets(set1,set2);
    return 0;
}
