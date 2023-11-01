#include<iostream>
using namespace std;

int main(){
    // int arr[3][4]= {1,2,3,4,5,6,7,8,9,11,12,89};
    int arr[3][4]={{1,11,111,1111}, {2,22,222,2222},  {3,33,333,3333}};
    // // Input the array in column wise
    // for(int colm = 0; colm<4; colm++)
    //  {
    //     for(int row =0; row<3; row++)
    //     {
    //      cin>>arr[colm][row];
    //     }
        
    //  }

     //Printing the array

       for(int row =0; row<3; row++)
    
     {
       
        for(int colm = 0; colm<4; colm++)
        {
         cout<<arr[row][colm]<<" ";
        }
        cout<<endl;
        
     }
    return 0;
}