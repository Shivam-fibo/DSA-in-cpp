// fibnoachi sum

#include<iostream>
using namespace std;
int fibonachi(int n)
 {
    // base condition
    if(n==1)
    return 0;
    if(n==2)
     return 1;
     int ans = fibonachi(n-1)+fibonachi(n-2);
     return ans;
 }
int main(){
    int n ;
    cin>>n;
    cout<<fibonachi(n)<<endl;
    return 0;
}
