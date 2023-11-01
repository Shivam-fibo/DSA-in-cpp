#include<iostream>
using namespace std;
void print(int arr[], int size)
 {
    cout<<" Size of the array "<<size<<endl;
     for(int i =0 ; i<size; i++)
      {
        cout<<arr[i];
      }
      //https://discord.gg/7SJNmR85
      cout<<endl;

 }
    bool linerSerch(int arr[], int n, int key)
     {
        print(arr, n);
        // base condtion
        if(n ==0)
        {
          cout<<"Elememt end"<<endl;
          return false;
        }
       if(arr[0]== key) 
        return true;
       bool ans = linerSerch(arr+1, n-1,key );
               return ans;

     }
int main(){
    int arr[5]= {11 ,2,3,4,5};
    int key = 5;
    int size= 5;
    bool answer= linerSerch(arr, size, key);
    if(answer)
     cout<<"Key is present in the element";
     else{
        cout<<"Key is not present in the element";
     }
       
    return 0;
}