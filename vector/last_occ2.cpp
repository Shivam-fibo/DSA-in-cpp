#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v(6);
    for(int i=0; i<v.size(); i++)
    {
        cin>>v[i];
    }
    cout<<"Enter the element you want to serch : ";
    int x;
    cin>>x;
     int occurence =-1;
    for(int i= v.size()-1; i>=0 ; i++ )
     {
        if(v[i]==x)
        {
         occurence =i;
           break;
        }
     }
     cout<<occurence<<endl;
    
    return 0;
}