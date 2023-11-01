#include<iostream>
using namespace std;
//   0,1,1,2,3,5,8,13,21,34,55,89
int main(){
    int n=10;
    int nextNumber;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i =1; i<=n;  i++)

      {
        nextNumber= a+b;
        a=b;
        b=nextNumber;
        cout<<nextNumber<<" ";
      }
    return 0;
}