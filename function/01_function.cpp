#include<iostream>
using namespace std;

int main(){
    // WAP to calculate the power of a number up to given number
    int a,b;
    cin>>a>>b;
    int ans =1;
    for (int  i =1; i<=b; i++)
      {
        ans = ans *a;
        
      }
      cout<<ans<<endl;
    return 0;
}