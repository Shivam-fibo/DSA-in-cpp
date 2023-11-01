#include<iostream>
using namespace std;
bool binarySerch(int arr[],  int key , int s, int e)
{
  // base case
  if(s>e)
   return false;
     int mid=(s+e)/2;
   if(arr[mid]==key)
   return true;

    // recusive function
    if(arr[mid]<key)
    {
        return  binarySerch(arr, key , mid+1, e);
          
    }
    else{
        return  binarySerch(arr, key , mid+1, e);
            
    }

}

int main(){
    int arr[5]={12,23,53,454,3};
    int key =53;
    // int mid = (s+e)/2;
   bool ans = binarySerch(arr,key,12,3);
   if(ans)
   {
        cout<<"element is present is  array";
   }
   else{
     cout<<"element is not present is   array";
   }
    return 0;
}