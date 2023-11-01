#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v={1,2,3,4,5};
   
    for( auto it = v.begin(); it != v.end(); ++it)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    vector<pair<int,int>> v_p={{1,2},{4,2}};
    for(auto &value:v_p)
    {
        cout<<value.first;
    }
  
    return 0;
}