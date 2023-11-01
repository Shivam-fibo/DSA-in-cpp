#include<iostream>
#include<vector>
using namespace std;

int main(){
    // Count the number of element which are greter than x
     vector<int> v(6);
     for(int i =0; i<v.size(); i++)
      {
        cin>>v[i]; 
      }
     cout<<"Enter the element: ";
     int x;
     cin>>x;

     int count =0;
     for(int i =0; i<v.size(); i++)
      {
        if(v[i]>x)
         count++;
      }
      cout<<count<<endl;
    return 0;
}