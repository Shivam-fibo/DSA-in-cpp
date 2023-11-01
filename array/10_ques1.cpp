// Question1 = swap alternate
#include<iostream>
using namespace std;
int reverseAlter(int arr[], int n)
  {
  for(int i = 0; i<=n; i+=2)
   {
    if(i+1<n)
     {
        swap(arr[i], arr[i+1]);
     }
   }


  }
int printArray(int arr[], int n)
{    for(int i =0; i<=n; i++)
      {
           cout<<arr[i]<<" ";
      }
      cout<<endl;
}
int main(){
    int arr[6]= {1,2,3,4,5,6};
    int brr[5]= {11,85,96,4141,78};
    reverseAlter(arr, 4);
    reverseAlter(brr, 4);
    printArray(arr,4);
    printArray(brr,4);
    return 0;
}