#include<iostream>
using namespace std;
void buubleSort( int arr[], int n)
{
    // base case
    if(n==1 || n==0)
        return;

    for(int i =0; i<n-1; i++)
    {
   
        if(arr[i]>arr[i+1]);
         swap(arr[i],arr[i+1]);
    }
    buubleSort(arr, n-1 );

}

int main(){
    int arr[5]={41,12,27,9,18};
    buubleSort(arr,5);
     for(int i =0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}