#include<iostream>
using namespace std;
int largestSumRow(int arr[][3], int row, int colm)
{
    int maxi =INT8_MIN;

      for(int row =0; row<3; row++)
    {
        int sum=0;
        for(int colm =0; colm<3; colm++)
         {
           sum+=arr[row][colm]; 
         }  
           if(maxi>sum)
            {
                maxi= sum;
            }
         
    }
    //    cout<<"The maximum sum is: "<<maxi<<endl;
}

int main(){
        int arr[3][3];
    for(int row =0; row<3; row++)
    {
        for(int colm =0; colm<3; colm++)
         {
            cin>>arr[row][colm];
         }
    }
    int ans = largestSumRow(arr,3,3);
    cout<<ans<<endl;
    
    return 0;
}