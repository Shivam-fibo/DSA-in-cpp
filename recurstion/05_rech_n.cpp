// You are given a number of strais . Intially you are at 0 strais
// In how many ways you will rech to nth strirs
#include<iostream>
using namespace std;
int coutWays(int n)
{
    // base case
    if(n<0)
     return 0;
     if(n==0)
     return 1;

 int ans = coutWays(n-1)+coutWays(n-2);
     return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<coutWays(n)<<endl;

    return 0;
}