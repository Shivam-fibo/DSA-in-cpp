#include<iostream>
using namespace std;
int power (int a, int b)
{
    // base case 
    if(b==1)
        return a;
    if(b==0)
        return 1;
    // even case
    int ans = power(a, b/2);
    if(a>0 && b>0)
    {
   if(b%2==0)
   {
    return ans* ans;
   }
   else {
    return a*ans* ans;
   }
    }
    else if(a>0 && b<0)
    {
        if(b%2==0)
   {
    return 1/ (ans* ans);
   }
   else {
    return 1/( a*ans* ans);
   }
    }
}


int main(){
  int a,b;
  cin>>a>>b;
    int ans = power(a,b);
    cout<<ans;
    return 0;
}