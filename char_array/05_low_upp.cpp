#include<iostream>
using namespace std;
char lowertUpper(char ch)
{
    if(ch>='a' &&ch<='z')
     {
        return ch;
     }
     else {
        char temp = ch-'A'+'a';
        return temp;
     }
}
int main(){

    cout<<lowertUpper('A')<<endl;
    cout<<lowertUpper('a')<<endl;
    return 0;
}
