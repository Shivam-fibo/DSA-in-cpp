#include<iostream>
using namespace std;
void merge(int arr, int s , int e)
{
    int mid = (s+e)/2;
    // determind the lenght of both arr
    int len1 = mid-s+1;
    int len2 = e-mid;
    // created two new array of given lenght
    int *first = new int[len1];
    int *second = new int[len2];
}
void mergeSort(int arr , int s , int e)
{
    
 // base case 
 if(s>e)
  return ;
  int mid = s+e/2;

  mergeSort(arr, s, mid);
  mergeSort(arr, mid+1, e);
  // merge
  mergeSort( arr, s, e);

}

int main(){
    int arr[6]={12,4,55,7,9,1};
    mergeSort(arr, 6, 12, 1);

    return 0;
}