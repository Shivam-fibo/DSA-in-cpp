#include<iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;

    // int ans =1;
    // for(int i =0; i<n; i++){
    //     if(i*i<=n){
    //         ans = i;

    //     }
    //     else{
    //         break;
    //     }
    // }
    // cout<<ans;
    // by binary search
    int low = 1; int high = n;
        int ans = 1;
    while(low<high){
      int  mid = low+high/2;
        if((mid* mid)<=n){
            cout<<mid;
            break;
        }
        else if((mid * mid)>n )
        high = mid-1;
    }

    return 0;
}