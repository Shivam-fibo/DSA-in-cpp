#include<iostream>
using namespace std;

int main(){
    int n=3;
    int arr[3]= {1,2,3};
    string ans1 = "";
    string ans2 = "";
    string ans3 = "";
    for(int i =0; i<n; i++){
        if(arr[i]==1){
            ans1+='a';
            ans2+='b';
            ans3+='c';
        }
        if(arr[i]==2){
            ans1+='d';
            ans2+='e';
            ans3+='f';
        }
        if(arr[i]==3){
            ans1+='g';
            ans2+='h';
            ans3+='i';
        }
    }
    cout<<ans1<<" "<<ans2<<" "<<ans3<<" ";
    return 0;
}