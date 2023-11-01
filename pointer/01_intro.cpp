#include<iostream>
using namespace std;

int main(){
// int num;
// num = 5;
// int *p = &num;
// int *q = p;
// cout<<p<<"---"<<q<<endl;
// cout<<*p<<"----"<<*q<<endl;
int j =4456;
int *p = &j;
cout<<"Before incresing the value of p: "<<p<<endl;
p = p+1;
cout<<"After incresing the value of p: "<<p<<endl;

   
 

    return 0;
}