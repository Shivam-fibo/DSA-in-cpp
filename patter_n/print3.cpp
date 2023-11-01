#include<iostream>
using namespace std;
void print3(int n)
 {
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n-i+1; k++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j <2*i+1; j++)
        {
            cout<< "x" ;
        }
        for (int l = 0; l < n-i+1; l++)
        {
            cout<<" ";
        }
        cout<<endl;
        
    }
    
    
    
 }
int main(){
    print3(3);
    return 0;
}