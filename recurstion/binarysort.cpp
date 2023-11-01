#include<iostream>
using namespace std;
bool isSorted(int arr[], int size)
{
    // base case
    if(size==0 || size==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        bool remaningpart = isSorted(arr+1, size-1);
         return remaningpart;

    }
}


int main(){
    int arr[5]={23,44,54,11,171};
    int size =5;
    bool ans = isSorted(arr,size);
    if(ans){
        cout<<"The array is sorted";
    }
    else{
        cout<<"The array is not sorted";
    }

    return 0;
}