// Creating a 2d array
#include<iostream>
using namespace std;

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
        for(int row =0; row<3; row++)
     {
        for(int colm =0; colm<4; colm++)
        {
            cout<<arr[row][colm]<<" ";
        }
      cout<<endl;   
     }


    return 0;
}