#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int i;
    for( i =0; i<n; i++)
    {
        cin>>arr[i];
    }
    int x,j;
    cin>>x;
    if(find(arr,arr+n,x)-arr==n)cout<<-1<<endl;
    else cout<<find(arr,arr+n,x)-arr<<endl;
    cout<<accumulate(arr,arr+n,0)<<" ";
    // // bool p=false;
    // for (j = 0; j < n; j++)
    // {
    //     if(arr[j]==x)
    //     {
    //         // p=true;
    //         cout<<j;
    //         break;
    //     }
    // }
    // if(j==n){
    //     cout<<-1;
    // }  
    // // if(!p)cout<<-1<<endl;
    return 0;
}