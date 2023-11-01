#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n =5;
    int arr[n]={1,2,3,4,5};
    vector<int, int>v;
    for(int i =0; i<n; i++){
        v[arr[i]]++;
    }
     for(int j =0; j<n; j++)
     {
        cout<<arr[j];
     }
    return 0;
}