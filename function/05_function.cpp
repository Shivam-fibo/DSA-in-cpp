#include<iostream>
using namespace std;
bool isEven(int a)
// 0- odd
// 1- even
 {
    if(a&1)
      {
        return 0;
      }
      else 
      {
        return 1;
      }
 }
int main(){
    int num;
    cin>>num;
    if (isEven(num))
     {
        cout<<"even";
     }
     else{
     cout<<"odd";
     }     
    return 0;
}