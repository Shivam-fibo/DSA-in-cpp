// Print sum of all element in an array
#include<iostream>
using namespace std;

int main(){
   
    int sum = 0;
    int arr[5]={ 0 ,1,2,3,4};
    
    for(int i =1; i<5; i++)
      {
        cout<<arr[i];
         sum = sum+i;
      }
      cout<<sum;
 
    return 0;
}