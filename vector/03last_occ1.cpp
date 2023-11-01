#include<iostream>
#include<vector>
using namespace std;
// Find the last occurence of an element x in a given vector
int main(){
    vector<int> v(6);
    for(int i =0; i<6; i++)
     {
        cin>>v[i];
     }
     cout<<"Enter the number which you want to serch: ";
     int x;
     cin>>x;


     int occurenec = -1;
     for(int i =0; i<v.size(); i++)
      {
        if(v[i]==x) 
          {
            occurenec= i;
          }


      }
      cout<<occurenec<<endl;

    return 0;
}