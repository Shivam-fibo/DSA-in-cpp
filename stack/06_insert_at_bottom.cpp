#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> s , int x){
// base case
if(s.empty())
{
  s.push(x);
  return
}

int num=s.top();
  s.pop();
  solve(s, x);
  s.push(num);
   };


int main(){
   stack<int> pushAtBottom(stack<int>&myStack , int x) 
   {
    solve(myStack,x)
     return myStack;
   }

}