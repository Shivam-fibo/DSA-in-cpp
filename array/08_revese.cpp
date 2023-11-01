// Program to reverse an array
#include<iostream>
using namespace std;
void reverse(int arr[], int n)
 {
    int start =0;
    int end =n-1;
    while(start<=end)
      {
        swap(arr[start], arr[end]);
        start++;
        end--;
         
      }
void printArray( int arr[], int n)
{
    for(int i =0; i<=n; i++)
     {
        cout<<arr[i]<<" ";
     }
}
int main(){
    int arr[6]={4,8,5,6,9,-9};
    // int brr[5]={2,6,3,9,4};
    reverse(arr,6);
    // reverse(brr,5);
    printArray(arr,6);
    // printArray(arr,5);
    return 0;
}
