#include<iostream>
using namespace std;
int fact(int n){
    //basae case 
    if(n==1)
     return 1;
    else{
        return n* fact(n-1);
    }
}
int main(){
    int n = 5;
 
 
    cout<<fact(4)<<" ";
   
    return 0;
}