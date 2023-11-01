#include<iostream>
#include<stack>
using namespace std;

int main(){
    // cration of stack
    stack<int> s;
    //push operation
    s.push(2);
    s.push(3);

    //pop operation
    s.pop();

    cout<<"Printing the top element: "<<s.top();
    cout<<endl;
    cout<<"Printing the size of stack:  "<<s.size();
    cout<<endl;

    // to check the stack is empty or not
     if(s.empty())
      {
        cout<<"stack is empty "<<endl;
      }
      else{
        cout<<"stack is not empty"<<endl;
      }
    return 0;
}