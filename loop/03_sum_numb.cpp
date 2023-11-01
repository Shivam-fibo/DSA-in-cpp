// WAP to print sum of number upto n
#include<iostream>
using namespace std;
int main(){
    int sum, n;
    cout<<"Enter the number upto wich you want addition"<<endl;
    cin>>n;
    sum=0;
    int i=1;
    while(i<=n){
        sum= sum+i;
        i=i+1;
    }
        cout<<sum;
    return 0;
}