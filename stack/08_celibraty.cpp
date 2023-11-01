#include<iostream>
#include<stack>
using namespace std;
class Solution{
    private:
    bool know(vector <vector><int> &M, int  n, int a , int b)
    {
        if(M[a][b]==1)
        {
            return true;
        }
        else{
            return false;
        }
    }
    public:
    int celebratiy(vector <vector><int> &M, int  n)
    {
        stack <int> s;
         // step1  push all element in a stack
       for(int i =0; i<n;  i++)
       {
        s.push(i);
       }
       // step2: select two element and comapare them
       while(s.size()>1)
       {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();
        if(know(M,a,b,n))
        {
            s.push(a)
        }
        else{
            s.push(b);
        }
        // step3 verify the potensial celebratiy
        int ans = s.top();
        bool rowCheck = false;
        int zeroCount = 0;
        for(int i = 0; i<n; i++)
        {
            if(M[ans][i]==0)
            {
                zeroCount++;
            }
            if(zeroCount==n)
            {
                rowCheck=true;
            }
        }
        bool colmCheck= false;
        int oneCount = 0;
        for(int i =0; i<n; i++)
        {
            if(M[i][ans]==1)
            {
                oneCount++;
            }
            if (oneCount==n-1)
            {
                colmCheck=true;
            }  
        }
        if(rowCheck==true && colmCheck==true)
        {
            return candidate;
        }
        else{
            return -1;
        }

       }

    }
}
int main(){
    int n =3;
    m[][]={
        {0 1 0}
        {0 0 0}
        {0 1 0}
    }
    
    return 0;
}