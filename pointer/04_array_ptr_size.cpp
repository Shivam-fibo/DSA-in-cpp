#include<iostream>
using namespace std;

int main(){
    int temp[10];
    int *ptr = &temp[0];
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<"1:  "<<sizeof(ptr)<<endl;
    cout<<"2:  "<<sizeof(*ptr)<<endl;
    cout<<"3:  "<<sizeof(&ptr)<<endl;
    cout<<"4:  "<<sizeof(temp)<<endl;
    cout<<"5:  "<<sizeof(*temp)<<endl;
    return 0;
}