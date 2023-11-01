#include<iostream>
using namespace std;
bool isFound(int arr[], int size, int key)
{
  // base case
  if(size==0)
    return false;
  
  //recusive function
  if(arr[0]==key)
    return true;
  else{
    bool remaingPart = isFound(arr+1, size-1, key);
     return remaingPart;
  }
}
int main(){
    int arr[5]={12,25,89,63,63};
    int size=5;
    int key =12;
   bool ans = isFound(arr, size, key);
    if(ans)
    {
      cout<<"the element is present in the array";
    }
    else{
      cout<<"the element is not presenet in the array";
    }
   
    return 0;
}