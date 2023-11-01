#include<iostream>
using namespace std;
void reverse(char name[], int n)
 {
    int s =0;
    int e = n-1;
    while(s<e)
    {
        swap(name[s++], name[e--]);
    }
 }
 int getLenght(char name[])
  {
    int count=0;
    for(int i =0; name[i]!='\0'; i++)
     {
        count++;
     }
     return count;
  }
int main(){
    char name[20];
    cout<<"Enter your name";
    cin>>name;
    cout<<"Your name is ";
    cout<<name<<endl;
    cout<<"The lenght of name is: ";
    int len = getLenght(name);
    cout<<len<<endl;
    cout<<"Your enterde name is revere order: ";
    reverse(name, len);
    cout<<name;

    return 0;
}