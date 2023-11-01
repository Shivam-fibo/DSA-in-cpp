#include<iostream>
#include <deque>
using namespace std;

int main(){
    deque<int>dq;
    dq.push_front(12);
    dq.push_front(41);
    dq.push_front(32);
    dq.push_front(00);
    dq.push_back(1);
    dq.push_back(58);
    dq.push_back(74);
    dq.push_back(3);
    dq.push_back(99);
    dq.pop_back(); 
    dq.pop_back();
    dq.pop_back();
    dq.pop_back();
    dq.pop_back();
    dq.pop_back();
for(auto i:dq)
{
    cout<<i<<" ";
}
cout<<endl;
if(dq.empty())
{
    cout<<"dq is empty";
}
else{
    cout<<"dq is not empty";
}
    
    return 0;
}