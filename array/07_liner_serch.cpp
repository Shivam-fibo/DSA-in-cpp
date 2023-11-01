#include<iostream>
using namespace std;
int liner_serch(int arr[], int n, int key)
  {
    for(int i =0; i<=n; i++)
     {
        if(arr[i]== key)
         {
            return i;
         }
     }
     return -1;
  }
int main(){
    int n;
    cout<<"enter the number of element :  ";
    cin>>n;
    int arr[n];
    for(int i =0; i<n; i++)
      {
        cin>>arr[i];
      }

    int key;
    cout<<"Enter the element you want to serch : ";
    cin>>key;
    cout<< liner_serch(arr, n, key)<<endl;
    return 0;
}