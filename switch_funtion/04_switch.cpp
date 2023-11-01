#include<iostream>
using namespace std;

int main(){
   // Calculator
   int a;
   cin>>a;
   int b ;
   cin>>b;
   int op ;
   cin>>op;
    switch (op) 
      {
        case 1 : cout<<a+b<<endl;
         break;
         case 2 : cout<<a-b<<endl;
         break;
         case 3 : cout<<a*b<<endl;
         break;
         case 4 : cout<<a/b<<endl;
         break;
         default: cout<<"Enter case is not valid";
      }
    return 0;
}