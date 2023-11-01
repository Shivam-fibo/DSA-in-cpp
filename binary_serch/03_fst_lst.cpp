#include<iostream>
using namespace std;
int firstOccure(int arr[], int n, int key)
 {
     int s =0; 
     int e =n-1;
     int ans =-1;
     int mid = s+e/2;
     while(s<=e){
     if(arr[mid]==key)
      {
        ans = mid;
        e = mid-1;
      }
      else if(key>arr[mid])
       {
         s = mid+1;

       }
      else if(key<arr[mid])
       {
        e = mid -1;
       }
       mid = s+e/2;
     }
   return ans;
 }
 int lastOccure(int arr[], int n, int key)
 {
     int s =0; 
     int e =n-1;
     int ans =-1;
     int mid = s+e/2;
     while(s<=e){
     if(arr[mid]==key)
      {
        ans = mid;
        s= mid+1;
      }
      else if(key>arr[mid])
       {
         s = mid+1;

       }
      else if(key<arr[mid])
       {
        e = mid -1;
       }
       mid = s+e/2;
     }
   return ans;
 }

int main(){
    int even[6]={12,25,35,45,58,58};
     cout<<"The last occurence is at the index of "<<lastOccure(even, 58 , 3)<<endl;
     cout<<"The first occurence is at the index of "<<firstOccure(even, 58, 3)<<endl;

    
 
    return 0;
}