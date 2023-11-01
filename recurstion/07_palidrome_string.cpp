#include<iostream>
using namespace std;
bool checkPalidrome(string str, int i, int j)
 {
    // base condition
     if(i>j)
      return true;

      if(str[i]!=str[j])
       return false;

       else{
        return checkPalidrome(str, i+1, j-1);
        }
 }
int main(){
    string name = "abba";
        bool isPalidrome= checkPalidrome(name, 0, name.length()-1);
        if(isPalidrome)
         cout<<name<<" is palidrome";
         else
         cout<<name<<" is not palidrome";
    return 0;
}