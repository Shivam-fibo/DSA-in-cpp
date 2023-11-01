#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);
    for(int i =0; i<v.size(); i++)
     {
        cin>>v[i];
     }
     bool flag = true;
     for(int i =0; i<v.size(); i++)
     {
      if(v[i]>=v[i+1])
        flag= true;
     }
     cout<<flag;
    return 0;
}