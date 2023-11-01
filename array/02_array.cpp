#include<iostream>
using namespace std;

//  void printArray(int arr[], int size)
//  {
//    for(int i =0 ; i<size; i++)
//      {
//   // cout<<"Doin the work"<<endl;
//        cout<<arr[i]<<" ";
//      }
//      cout<<"printing done"<<endl;
//  }


int main(){
    
    // int number[15];
    // cout<<"Value at the index 14"<<number[14]<<endl;
    //  printArray(number , 3);
    
    // int second[3]= {3,4,5};
    // printArray(second, 2);

    // int third[15]= {2,7};
    // printArray(third,3);

    // int fourth[10]={0};
    // int n=10;
    // printArray(fourth , 10);
    // int fifth [10]= {1};
    // n=10;
    // printArray(fifth,10);
    // int fifthSize =sizeof(fifth)/sizeof(int);
    // cout<<"Size of fifth is"<<fifthSize<<endl;
    // int six[]={345,64,64,6847,98,6,87,6,64,68};
    // int sixSize = sizeof(six)/sizeof(int);
    // cout<<"size of sixth is"<<sixSize<<endl;

    char ch[5]={'a','b','c','d','e'};
    
    for (int i =0; i<=5; i++)
    {
    cout<<ch[i]<<" ";
    }
    return 0;
}