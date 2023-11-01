// Function to print biulble sort 
#include<iostream>
using namespace std;
int bubbleSort(int arr[], int n)
 {
    int i,j;
    bool swap;
    for( i =0; i<n-1; i++)
    swap = false;
    {

     for(j =0; j<n-1; j++)
      {
        if(arr[j]>arr[j+1])
         {
            swap(arr[j],arr[j+1]);
            swap = true;
         }
       }
    }  
  }
 int printArray( int arr[], int size)
 {
 for(int i =0; i<size; i++)
   cout<<arr[i]<<" ";
 }
int main(){
    int arr[0 ]= {5,1,4,2,8};
    int N = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, N);
    cout<<"After sorting \n";
    printArray(arr,N);

    
    return 0;
}