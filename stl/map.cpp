#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // map is a data strucure which store the key value pair 
    map <int, string> m;
    m[1]="abc";
    m[5]="cdc";
    m[3]="acd";
    m.insert({4, "adkj"});
    // map<int,string> :: iterator it;
    // for(it =m.begin(); it != m.end(); ++it)
    // {
    //     cout<<(*it).first;
    //     cout<<endl;
    //     cout<<(*it).second;
    // }
    for(auto &pr : m)
    {
        cout<<pr.first<<" "<< pr.second;
        cout<<endl;
    }
    return 0;
}