#include<iostream>
#include<stack>
using namespace std;
bool isValidParenthesis(string experesstion)
{
stack<int> s;
    for(int i =0; i<experesstion.length(); i++)
    {
        char ch =experesstion[i];
        // if opening bracket stack push
        // if closing bracket , stack check and pop

        // opening bracket
        if(ch=='('||ch=='{'|| ch=='[')
        {
            s.push(ch);
        }
        else{
            if(!s.empty())
            {
                char top =s.top();

                if((ch==')' && top=='(')
                || (ch=='}' && top=='{')
                || (ch==']' && top=='['))
                {
                    s.pop();
                }
                else{
                    return false;
                }

            }
            return false;
        }

    }
    if(s.empty())
    {
        return true;
    }
    else{
        return false;
    }
   };
int main(){
  

    return 0;
}