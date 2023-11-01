#include<iostream>
using namespace std;
void print2(int n){
 for (int i = 1; i <= n; i++)
 {
    for (int j = 1; j<= i ; j++)
    {
        cout<<j ;
    }
    cout<<endl;
    
 }
}
 
int main(){
    print2(5);
    return 0;
}