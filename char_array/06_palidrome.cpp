#include<iostream>
using namespace std;
// To check the palidrome case when it is not case sensitive;
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
bool checkPalidrome(char a[], int n)
 {
    int s =0; 
    int e = n-1;
    while(s<=e)
    {
        if( lowertUpper(a[s])!= lowertUpper(a[e]) )
         {
            return 0;
         }
         else{
            s++;
            e--;
           
         }

    }
return 1;
 }
 void  reverse(char a[], int n)
  {
    int s =0; int e =n-1;
    while(s<=e)
    {
    swap(a[s++],a[e--]);
    }
  }
  int getLine(char a[])
   {
    int count  =0;
    for(int i =0; a[i]!='\0';i++)
     {
        count++;
     }
   return count;
   }
int main(){
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Your name is: ";
    cout<<name<<endl;
    int len = getLine(name);
    cout<<len<<endl;
    
   cout<<"The revere of this name is";
   reverse(name,len);
   cout<<endl;
   
    cout<<"Palidrome or not "<<checkPalidrome(name, len);

    return 0;
}