#include<iostream>
using namespace std;

int main(){
    int arr[10]={23,65,77,454,3345,5534};
    // cout<<"Adrres of the first memory block: "<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<"Address of the first memoy block: "<<&arr[0]<<endl;  
    int i=3 ;
    cout<<i[arr]<<endl;
    cout<<*(i+arr)<<endl;
    cout<<arr[i]<<endl;
    cout<<*(arr+i);
    return 0;
}