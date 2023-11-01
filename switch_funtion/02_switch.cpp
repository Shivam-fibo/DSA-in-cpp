#include<iostream>
using namespace std;

int main(){
    char ch = '1';
    
    switch(ch)
     {
        case '1': cout<<"Yes"<<" ";
        break;
        case '2': cout<<"No"<<" ";
        break;
        default: cout<<"It is default case ";
     }
    return 0;
}