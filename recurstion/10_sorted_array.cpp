#include<iostream>
using namespace std;
bool isSorted(int arr[], int size)
 {
    // Base conditon
     if(size ==0 || size ==1)
      {
        return true;
      }
      if(arr[0]>arr[1])
       {
        return false;
       }
       else{
        bool ans = isSorted(arr+1, size-1);
            return ans;
       }
 }
int main(){
    int arr[5]= {1,2,14,5,7};
     int size = 5;

     bool ans = isSorted(arr, size);
      if(ans)
       cout<<"Array is sorted";
     else
      cout<<"Array is not sorted";
    return 0;
}