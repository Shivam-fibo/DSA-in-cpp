#include<iostream>
using namespace std;
void reverse(string& str, int n ,int s, int n-s-1 )
{
    cout<<"call for recustion    ->   "<<str<<endl;;
    if(s>e)
        return;

    swap(str[s], str[e]);
    s++;
    e--;
    reverse(str, s, e);
}
int main(){
    string name = "shivam";
    reverse(name, 0, name.length()-1);
    cout<<name<<" ";

    return 0;
}