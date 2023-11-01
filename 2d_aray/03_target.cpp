#include<iostream>
using namespace std;
bool isPresent(int arr[][4], int target, int row, int colm )
{
     for(int row =0; row<3; row++)
    { 
        for(int colm =0; colm<4; colm++)
        {
           if(arr[row][colm]==target)
             {
                return 1;
             }
        }        
    }
    return 0;
}    
int main(){
       int arr[3][4];
    // Input the array in row wise
    for(int row =0; row<3; row++)
     {
        for(int colm =0; colm<4; colm++)
        {
            cin>>arr[row][colm];
        }
         
     }
     //Printing the array
    //     for(int row =0; row<3; row++)
    //  {
    //     for(int colm =0; colm<4; colm++)
    //     {
    //         cout<<arr[row][colm]<<" ";
    //     }
    //   cout<<endl;   
    //  }
     int target;
     cout<<"Enter the element you want to serch"<<endl;
     cin>>target;
     if(isPresent(arr, target , 3, 4))
      {
        cout<<"Yes"<<endl;
      }
      else{
        cout<<"No"<<endl;
      }
    return 0;
}