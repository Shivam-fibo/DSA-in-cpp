#include<iostream>
using namespace std;
void printSum(int arr[][3],int row, int colm)
 {
        for(int row =0; row<3; row++)
    {
    int sum =0; 
        for(int colm =0; colm<3; colm++)
         {
            sum += arr[row][colm];
         }
    cout<<sum<<" ";
    }
    cout<<endl;

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
    
    printSum(arr, 3,3);
    return 0;
}