#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //  Addition of a given digit
while(n!=0)
  {
        int a = n%10;
    int b = n/10;
    int c = b%10;
    int d = b/10;
    int e = a+c+d;
    int f = a*c*d;
    int g = f-e;
    cout<<g<<endl;
    break;
  }
    return 0;
}