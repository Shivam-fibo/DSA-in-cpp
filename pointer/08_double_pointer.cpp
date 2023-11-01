#include<iostream>
using namespace std;

int main(){
    int i =5;
    int *p1= &i;
    cout<<"address of i:   "<<p1<<endl;
    cout<<"Value of i:   "<<*p1<<endl;
    cout<<"Adress of p1:   "<<&p1<<endl;
    int **p2= &p1;
    cout<<"address of p1:  "<<p2<<endl;
    cout<<"value of p1:  "<<*p2<<endl;
    cout<<"address of p2: "<<&p2<<endl;
    cout<<**p2<<endl;
// Three way to print the value of i
cout<<endl;
 cout<<i<<endl;
 cout<<*p1<<endl;
 cout<<**p2<<endl;
 cout<<endl;
 // printing the address of i
 cout<<&i<<endl;
 cout<<p1<<endl;
 cout<<*p2<<endl;
cout<<endl;
 // printing the address of p1
 cout<<&p1<<endl;
 cout<<p2<<endl;
 


  
    return 0;
}