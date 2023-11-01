#include<iostream>
using namespace std;
int getSum(int *arr, int n )
 {
    cout<<sizeof(arr)<<endl;
    cout<<endl;
    
    int sum =0;
    for(int i =0; i<n ; i++)
     {
        sum+=i[arr];
     }
     return sum;
 }
int main(){
    int arr[14]={1,3,4,6,7,5,6,7,5,3,543,3,432,67};
     cout<<"Sum is : "<<getSum(arr+3,3)<<endl;
    return 0;
}