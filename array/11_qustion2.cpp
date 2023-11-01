// You have been an integer array of size N. When N is equal to 2m+1 Now, in the given array M number are prensent twice and one number is present only onve time
#include<iostream>
using namespace std;
bool uniqueoccrurece()
  {
    int ans =0;
    int n;
    cin>>n;
    int arr[100];
    for(int i =0; i<n; i++)
      {
        cin>>arr[i];
      ans = ans^arr[i];
      }
      return ans;
    
  }

int main(){
   cout<< uniqueoccrurece();
    return 0;
}
 