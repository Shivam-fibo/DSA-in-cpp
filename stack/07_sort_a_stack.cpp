#include<iostream>
#include<stack>
using namespace std;
void sortedInsert(stack<int> &stack , int num)
{
    // base case
    if(stack.empty() || (!stack.empty() && stack.top()<num))

    {
        stack.push(num);
        return;
    }
    int n=stack.top();
    stack.pop();
}
void sortStack(stack<int>&stack)
{
    if(stack.empty())
    {
        return;
    }
    int num = stack.top();
    stack.pop();
    // recursive call
    sortStack(stack);
    sortedInsert(stack, num);
}
int main(){
    stack<int> num;
    num.push(1);
    num.push(14);
    num.push(-9);
    num.push(3);
    sortStack(num);
    return 0;
}