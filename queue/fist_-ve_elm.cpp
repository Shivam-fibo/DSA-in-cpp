#include<iostream>
#include <deque>
using namespace std;
vector<int> firstNegativeElement(int a[], int n , int k)
{
    deque<int>dq;
    vector<int>ans;
    // process first window of k size
    for(int i =0; i<k;i++)
    {
        if(a[i]<0)
        {
            dq.push_back(i);
        }
    }
    // store answer for first k size vector
    if(dq.size()>0)
    {
        ans.push_back( a[dq.front()])
    }
    else{
        ans.push_back(0);

    }
    //process for remainig window
    if(!dq.empty() && i-dq.front()>=k)
    {
        dq.pop_back(i);
    }
    if(a[i]<0)
    {
        dq.push_back(i);
    }
    //answer store
    if(dq.size()>0)
    {
        ans.push_back(a[dq.front()])

    }
    else{
        ans.push_back(0);
    }

}
return ans;
int main(){
     q.push(-8);
    q.push(2);
    q.push(3);
    q.push(-6);
    q.push(10);
    int firstNegativeElement()
    return 0;
}